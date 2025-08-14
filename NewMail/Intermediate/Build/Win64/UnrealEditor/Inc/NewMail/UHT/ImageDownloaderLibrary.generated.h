// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ImageDownloaderLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef NEWMAIL_ImageDownloaderLibrary_generated_h
#error "ImageDownloaderLibrary.generated.h already included, missing '#pragma once' in ImageDownloaderLibrary.h"
#endif
#define NEWMAIL_ImageDownloaderLibrary_generated_h

#define FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConvertBytesToTexture2D);


#define FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUImageDownloaderLibrary(); \
	friend struct Z_Construct_UClass_UImageDownloaderLibrary_Statics; \
public: \
	DECLARE_CLASS(UImageDownloaderLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NewMail"), NO_API) \
	DECLARE_SERIALIZER(UImageDownloaderLibrary)


#define FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImageDownloaderLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UImageDownloaderLibrary(UImageDownloaderLibrary&&); \
	UImageDownloaderLibrary(const UImageDownloaderLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImageDownloaderLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImageDownloaderLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImageDownloaderLibrary) \
	NO_API virtual ~UImageDownloaderLibrary();


#define FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_16_PROLOG
#define FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEWMAIL_API UClass* StaticClass<class UImageDownloaderLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
