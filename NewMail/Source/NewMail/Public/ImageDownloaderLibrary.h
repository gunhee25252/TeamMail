// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/ImageWrapper/Public/IImageWrapper.h"
#include "Runtime/ImageWrapper/Public/IImageWrapperModule.h"
#include "Engine/Texture2D.h"

#include "ImageDownloaderLibrary.generated.h"

/**
 * 
 */
UCLASS()
class NEWMAIL_API UImageDownloaderLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "ImageDownloader")
	static UTexture2D* ConvertBytesToTexture2D(const TArray<uint8>& ImageData, const FString& DebugName = TEXT("DownloadedTexture"));
	
};
