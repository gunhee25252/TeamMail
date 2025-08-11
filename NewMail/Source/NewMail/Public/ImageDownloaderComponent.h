// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/Texture2D.h"

#include "ImageDownloaderComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTextureLoadedSignature, UTexture2D*, LoadedTexture, int32, RequestIndex);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NEWMAIL_API UImageDownloaderComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UImageDownloaderComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	UFUNCTION(BlueprintCallable, Category = "HTTP Image Download")
	void DownloadImagesByUrlFolder(const FString& FilesListUrl, const FString& BaseFilesUrl);

	// 개별 이미지 다운로드
	UFUNCTION(BlueprintCallable, Category = "HTTP Image Download")
	void DownloadImageFromURL(const FString& ImageURL, int32 RequestIndex = -1);

	UPROPERTY(BlueprintAssignable, Category = "HTTP Image Download")
	FOnTextureLoadedSignature OnTextureLoaded;

	TMap<int32, UTexture2D*> TextureMap;

		
};
