// Fill out your copyright notice in the Description page of Project Settings.


#include "ImageDownloaderComponent.h"
#include "Runtime/Online/HTTP/Public/Http.h" // FHttpModule�� ����ϱ� ���� �ʼ�
#include "ImageDownloaderLibrary.h"


static FString EncodeUrlPathComponents(const FString& RawUrl)
{
    FString Protocol, Host, Path;
    if (RawUrl.Split(TEXT("://"), &Protocol, &Path)) // Split into "http" and "127.0.0.1:8000/outputs/�����/"
    {
        int32 SlashIndex;
        if (Path.FindChar('/', SlashIndex))
        {
            FString HostPort = Path.Left(SlashIndex);                      // "127.0.0.1:8000"
            FString UrlPath = Path.RightChop(SlashIndex);                 // "/outputs/�����/"
            TArray<FString> Segments;
            UrlPath.ParseIntoArray(Segments, TEXT("/"), true);

            FString EncodedPath;
            for (const FString& Segment : Segments)
            {
                EncodedPath += TEXT("/") + FPlatformHttp::UrlEncode(Segment);
            }

            return FString::Printf(TEXT("%s://%s%s"), *Protocol, *HostPort, *EncodedPath);
        }
    }

    // fallback: return as-is
    return RawUrl;
}
// Sets default values for this component's properties
UImageDownloaderComponent::UImageDownloaderComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UImageDownloaderComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UImageDownloaderComponent::DownloadImagesByUrlFolder(const FString& FilesListUrl, const FString& BaseFilesUrl)
{
    FHttpRequestPtr ListRequest = FHttpModule::Get().CreateRequest();
    FString Encoded = EncodeUrlPathComponents(FilesListUrl);
    ListRequest->SetVerb("GET");
    //ListRequest->SetURL(FilesListUrl);
    ListRequest->SetURL(Encoded);


    // ���ٿ��� BaseFilesUrl ĸó
    ListRequest->OnProcessRequestComplete().BindLambda([this, BaseFilesUrl](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (bWasSuccessful && Response.IsValid())
            {
                FString JsonString = Response->GetContentAsString();

                // JSON �迭 �Ľ�: ["img_0.png", "img_1.png", ...]
                TArray<TSharedPtr<FJsonValue>> JsonArray;
                TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(JsonString);
                if (FJsonSerializer::Deserialize(JsonReader, JsonArray))
                {
                    for (const TSharedPtr<FJsonValue>& Value : JsonArray)
                    {
                        FString Filename = Value->AsString();

                        // ���ϸ��� �ѹ� �Ľ�
                        FString NumberOnly = Filename;
                        NumberOnly.RemoveFromStart(TEXT("img_"));
                        NumberOnly.RemoveFromEnd(TEXT(".png"));
                        int32 FileIndex = FCString::Atoi(*NumberOnly);

                        FString Url = BaseFilesUrl + Filename;
                        DownloadImageFromURL(Url, FileIndex);
                    }
                }
                else
                {
                    UE_LOG(LogTemp, Error, TEXT("JSON �Ľ� ����: %s"), *JsonString);
                }
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("���� ����Ʈ ��û ����!"));
            }
        });

    ListRequest->ProcessRequest();
}

void UImageDownloaderComponent::DownloadImageFromURL(const FString& ImageURL, int32 RequestIndex)
{
    if (ImageURL.IsEmpty())
    {
        OnTextureLoaded.Broadcast(nullptr, RequestIndex);
        return;
    }

    FString Encoded = EncodeUrlPathComponents(ImageURL);

    FHttpRequestPtr NewRequest = FHttpModule::Get().CreateRequest();
    NewRequest->SetVerb("GET");
    //NewRequest->SetURL(ImageURL);
    NewRequest->SetURL(Encoded);

    NewRequest->OnProcessRequestComplete().BindLambda([this, RequestIndex](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            UTexture2D* LoadedTexture = nullptr;
            if (bWasSuccessful && Response.IsValid())
            {
                const TArray<uint8>& ImageData = Response->GetContent();
                LoadedTexture = UImageDownloaderLibrary::ConvertBytesToTexture2D(
                    ImageData,
                    FString::Printf(TEXT("Downloaded_%s"), *FPaths::GetBaseFilename(Request->GetURL()))
                );
                TextureMap.Add(RequestIndex, LoadedTexture);
            }
            OnTextureLoaded.Broadcast(LoadedTexture, RequestIndex);
        });

    NewRequest->ProcessRequest();
}



