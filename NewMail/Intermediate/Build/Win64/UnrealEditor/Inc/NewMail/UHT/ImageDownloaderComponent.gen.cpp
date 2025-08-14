// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewMail/Public/ImageDownloaderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageDownloaderComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NEWMAIL_API UClass* Z_Construct_UClass_UImageDownloaderComponent();
NEWMAIL_API UClass* Z_Construct_UClass_UImageDownloaderComponent_NoRegister();
NEWMAIL_API UFunction* Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NewMail();
// End Cross Module References

// Begin Delegate FOnTextureLoadedSignature
struct Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics
{
	struct _Script_NewMail_eventOnTextureLoadedSignature_Parms
	{
		UTexture2D* LoadedTexture;
		int32 RequestIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ImageDownloaderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequestIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::NewProp_LoadedTexture = { "LoadedTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NewMail_eventOnTextureLoadedSignature_Parms, LoadedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::NewProp_RequestIndex = { "RequestIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NewMail_eventOnTextureLoadedSignature_Parms, RequestIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::NewProp_LoadedTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::NewProp_RequestIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NewMail, nullptr, "OnTextureLoadedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::_Script_NewMail_eventOnTextureLoadedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::_Script_NewMail_eventOnTextureLoadedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTextureLoadedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnTextureLoadedSignature, UTexture2D* LoadedTexture, int32 RequestIndex)
{
	struct _Script_NewMail_eventOnTextureLoadedSignature_Parms
	{
		UTexture2D* LoadedTexture;
		int32 RequestIndex;
	};
	_Script_NewMail_eventOnTextureLoadedSignature_Parms Parms;
	Parms.LoadedTexture=LoadedTexture;
	Parms.RequestIndex=RequestIndex;
	OnTextureLoadedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTextureLoadedSignature

// Begin Class UImageDownloaderComponent Function DownloadImageFromURL
struct Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics
{
	struct ImageDownloaderComponent_eventDownloadImageFromURL_Parms
	{
		FString ImageURL;
		int32 RequestIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HTTP Image Download" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xbf\xef\xbf\xbd\xce\xb5\xef\xbf\xbd\n" },
#endif
		{ "CPP_Default_RequestIndex", "-1" },
		{ "ModuleRelativePath", "Public/ImageDownloaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xbf\xef\xbf\xbd\xce\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImageURL;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RequestIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::NewProp_ImageURL = { "ImageURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImageDownloaderComponent_eventDownloadImageFromURL_Parms, ImageURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageURL_MetaData), NewProp_ImageURL_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::NewProp_RequestIndex = { "RequestIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImageDownloaderComponent_eventDownloadImageFromURL_Parms, RequestIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::NewProp_ImageURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::NewProp_RequestIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageDownloaderComponent, nullptr, "DownloadImageFromURL", nullptr, nullptr, Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::ImageDownloaderComponent_eventDownloadImageFromURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::ImageDownloaderComponent_eventDownloadImageFromURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImageDownloaderComponent::execDownloadImageFromURL)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ImageURL);
	P_GET_PROPERTY(FIntProperty,Z_Param_RequestIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadImageFromURL(Z_Param_ImageURL,Z_Param_RequestIndex);
	P_NATIVE_END;
}
// End Class UImageDownloaderComponent Function DownloadImageFromURL

// Begin Class UImageDownloaderComponent Function DownloadImagesByUrlFolder
struct Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics
{
	struct ImageDownloaderComponent_eventDownloadImagesByUrlFolder_Parms
	{
		FString FilesListUrl;
		FString BaseFilesUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HTTP Image Download" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called every frame\n" },
#endif
		{ "ModuleRelativePath", "Public/ImageDownloaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilesListUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseFilesUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilesListUrl;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BaseFilesUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::NewProp_FilesListUrl = { "FilesListUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImageDownloaderComponent_eventDownloadImagesByUrlFolder_Parms, FilesListUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilesListUrl_MetaData), NewProp_FilesListUrl_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::NewProp_BaseFilesUrl = { "BaseFilesUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImageDownloaderComponent_eventDownloadImagesByUrlFolder_Parms, BaseFilesUrl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseFilesUrl_MetaData), NewProp_BaseFilesUrl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::NewProp_FilesListUrl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::NewProp_BaseFilesUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageDownloaderComponent, nullptr, "DownloadImagesByUrlFolder", nullptr, nullptr, Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::ImageDownloaderComponent_eventDownloadImagesByUrlFolder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::ImageDownloaderComponent_eventDownloadImagesByUrlFolder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImageDownloaderComponent::execDownloadImagesByUrlFolder)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_FilesListUrl);
	P_GET_PROPERTY(FStrProperty,Z_Param_BaseFilesUrl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DownloadImagesByUrlFolder(Z_Param_FilesListUrl,Z_Param_BaseFilesUrl);
	P_NATIVE_END;
}
// End Class UImageDownloaderComponent Function DownloadImagesByUrlFolder

// Begin Class UImageDownloaderComponent
void UImageDownloaderComponent::StaticRegisterNativesUImageDownloaderComponent()
{
	UClass* Class = UImageDownloaderComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DownloadImageFromURL", &UImageDownloaderComponent::execDownloadImageFromURL },
		{ "DownloadImagesByUrlFolder", &UImageDownloaderComponent::execDownloadImagesByUrlFolder },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageDownloaderComponent);
UClass* Z_Construct_UClass_UImageDownloaderComponent_NoRegister()
{
	return UImageDownloaderComponent::StaticClass();
}
struct Z_Construct_UClass_UImageDownloaderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ImageDownloaderComponent.h" },
		{ "ModuleRelativePath", "Public/ImageDownloaderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTextureLoaded_MetaData[] = {
		{ "Category", "HTTP Image Download" },
		{ "ModuleRelativePath", "Public/ImageDownloaderComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTextureLoaded;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageDownloaderComponent_DownloadImageFromURL, "DownloadImageFromURL" }, // 842435531
		{ &Z_Construct_UFunction_UImageDownloaderComponent_DownloadImagesByUrlFolder, "DownloadImagesByUrlFolder" }, // 4243804670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageDownloaderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImageDownloaderComponent_Statics::NewProp_OnTextureLoaded = { "OnTextureLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UImageDownloaderComponent, OnTextureLoaded), Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTextureLoaded_MetaData), NewProp_OnTextureLoaded_MetaData) }; // 3585130297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImageDownloaderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImageDownloaderComponent_Statics::NewProp_OnTextureLoaded,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageDownloaderComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UImageDownloaderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_NewMail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageDownloaderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageDownloaderComponent_Statics::ClassParams = {
	&UImageDownloaderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UImageDownloaderComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UImageDownloaderComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImageDownloaderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UImageDownloaderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImageDownloaderComponent()
{
	if (!Z_Registration_Info_UClass_UImageDownloaderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageDownloaderComponent.OuterSingleton, Z_Construct_UClass_UImageDownloaderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImageDownloaderComponent.OuterSingleton;
}
template<> NEWMAIL_API UClass* StaticClass<UImageDownloaderComponent>()
{
	return UImageDownloaderComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImageDownloaderComponent);
UImageDownloaderComponent::~UImageDownloaderComponent() {}
// End Class UImageDownloaderComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImageDownloaderComponent, UImageDownloaderComponent::StaticClass, TEXT("UImageDownloaderComponent"), &Z_Registration_Info_UClass_UImageDownloaderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageDownloaderComponent), 3577389812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_1262626970(TEXT("/Script/NewMail"),
	Z_CompiledInDeferFile_FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_NCA3_3_11_Desktop_Git_TeamMail_NewMail_Source_NewMail_Public_ImageDownloaderComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
