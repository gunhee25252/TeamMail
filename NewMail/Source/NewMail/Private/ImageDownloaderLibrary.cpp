// Fill out your copyright notice in the Description page of Project Settings.


#include "ImageDownloaderLibrary.h"

UTexture2D* UImageDownloaderLibrary::ConvertBytesToTexture2D(const TArray<uint8>& ImageData, const FString& DebugName)
{
    if (ImageData.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("UImageDownloaderLibrary::ConvertBytesToTexture2D: No image data provided."));
        return nullptr;
    }

    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
    TSharedPtr<IImageWrapper> ImageWrapper;

    ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
    if (!ImageWrapper.IsValid() || !ImageWrapper->SetCompressed(ImageData.GetData(), ImageData.Num()))
    {
        ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
        if (!ImageWrapper.IsValid() || !ImageWrapper->SetCompressed(ImageData.GetData(), ImageData.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("UImageDownloaderLibrary::ConvertBytesToTexture2D: Failed to decompress image data. Format not supported or data corrupt. Size: %d"), ImageData.Num());
            return nullptr;
        }
        UE_LOG(LogTemp, Log, TEXT("UImageDownloaderLibrary::ConvertBytesToTexture2D: Decompressed as PNG."));
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("UImageDownloaderLibrary::ConvertBytesToTexture2D: Decompressed as JPEG."));
    }

    TArray<uint8> UncompressedBGRA;
    if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
    {
        if (UncompressedBGRA.Num() == 0)
        {
            UE_LOG(LogTemp, Error, TEXT("UImageDownloaderLibrary::ConvertBytesToTexture2D: Decompressed raw data is empty."));
            return nullptr;
        }

        UTexture2D* NewTexture = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);
        if (!NewTexture)
        {
            UE_LOG(LogTemp, Error, TEXT("UImageDownloaderLibrary::ConvertBytesToTexture2D: Failed to create transient texture."));
            return nullptr;
        }

        void* TextureData = NewTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
        FMemory::Memcpy(TextureData, UncompressedBGRA.GetData(), UncompressedBGRA.Num());
        NewTexture->GetPlatformData()->Mips[0].BulkData.Unlock();

        NewTexture->UpdateResource();
        NewTexture->AddToRoot();

        NewTexture->SRGB = true;
        NewTexture->CompressionSettings = TC_Default;

        UE_LOG(LogTemp, Log, TEXT("UImageDownloaderLibrary::ConvertBytesToTexture2D: Texture '%s' created: %dx%d"), *DebugName, NewTexture->GetSizeX(), NewTexture->GetSizeY());
        return NewTexture;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("UImageDownloaderLibrary::ConvertBytesToTexture2D: Failed to get raw image data after decompression."));
        return nullptr;
    }
}