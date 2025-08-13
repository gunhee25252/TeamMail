// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImageDownloaderComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef NEWMAIL_ImageDownloaderComponent_generated_h
#error "ImageDownloaderComponent.generated.h already included, missing '#pragma once' in ImageDownloaderComponent.h"
#endif
#define NEWMAIL_ImageDownloaderComponent_generated_h

#define FID_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_12_DELEGATE \
NEWMAIL_API void FOnTextureLoadedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnTextureLoadedSignature, UTexture2D* LoadedTexture, int32 RequestIndex);


#define FID_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDownloadImageFromURL); \
	DECLARE_FUNCTION(execDownloadImagesByUrlFolder);


#define FID_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageDownloaderComponent(); \
	friend struct Z_Construct_UClass_UImageDownloaderComponent_Statics; \
public: \
	DECLARE_CLASS(UImageDownloaderComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NewMail"), NO_API) \
	DECLARE_SERIALIZER(UImageDownloaderComponent)


#define FID_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UImageDownloaderComponent(UImageDownloaderComponent&&); \
	UImageDownloaderComponent(const UImageDownloaderComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageDownloaderComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageDownloaderComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UImageDownloaderComponent) \
	NO_API virtual ~UImageDownloaderComponent();


#define FID_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_14_PROLOG
#define FID_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWMAIL_API UClass* StaticClass<class UImageDownloaderComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
