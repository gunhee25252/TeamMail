// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewMail/Public/ImageDownloaderLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageDownloaderLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
NEWMAIL_API UClass* Z_Construct_UClass_UImageDownloaderLibrary();
NEWMAIL_API UClass* Z_Construct_UClass_UImageDownloaderLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_NewMail();
// End Cross Module References

// Begin Class UImageDownloaderLibrary Function ConvertBytesToTexture2D
struct Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics
{
	struct ImageDownloaderLibrary_eventConvertBytesToTexture2D_Parms
	{
		TArray<uint8> ImageData;
		FString DebugName;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ImageDownloader" },
		{ "CPP_Default_DebugName", "DownloadedTexture" },
		{ "ModuleRelativePath", "Public/ImageDownloaderLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImageData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ImageData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageData;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::NewProp_ImageData_Inner = { "ImageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::NewProp_ImageData = { "ImageData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImageDownloaderLibrary_eventConvertBytesToTexture2D_Parms, ImageData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImageData_MetaData), NewProp_ImageData_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImageDownloaderLibrary_eventConvertBytesToTexture2D_Parms, DebugName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugName_MetaData), NewProp_DebugName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ImageDownloaderLibrary_eventConvertBytesToTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::NewProp_ImageData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::NewProp_ImageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::NewProp_DebugName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImageDownloaderLibrary, nullptr, "ConvertBytesToTexture2D", nullptr, nullptr, Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::ImageDownloaderLibrary_eventConvertBytesToTexture2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::ImageDownloaderLibrary_eventConvertBytesToTexture2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UImageDownloaderLibrary::execConvertBytesToTexture2D)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_ImageData);
	P_GET_PROPERTY(FStrProperty,Z_Param_DebugName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UImageDownloaderLibrary::ConvertBytesToTexture2D(Z_Param_Out_ImageData,Z_Param_DebugName);
	P_NATIVE_END;
}
// End Class UImageDownloaderLibrary Function ConvertBytesToTexture2D

// Begin Class UImageDownloaderLibrary
void UImageDownloaderLibrary::StaticRegisterNativesUImageDownloaderLibrary()
{
	UClass* Class = UImageDownloaderLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertBytesToTexture2D", &UImageDownloaderLibrary::execConvertBytesToTexture2D },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImageDownloaderLibrary);
UClass* Z_Construct_UClass_UImageDownloaderLibrary_NoRegister()
{
	return UImageDownloaderLibrary::StaticClass();
}
struct Z_Construct_UClass_UImageDownloaderLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ImageDownloaderLibrary.h" },
		{ "ModuleRelativePath", "Public/ImageDownloaderLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UImageDownloaderLibrary_ConvertBytesToTexture2D, "ConvertBytesToTexture2D" }, // 3261755899
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImageDownloaderLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UImageDownloaderLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NewMail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UImageDownloaderLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UImageDownloaderLibrary_Statics::ClassParams = {
	&UImageDownloaderLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UImageDownloaderLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UImageDownloaderLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UImageDownloaderLibrary()
{
	if (!Z_Registration_Info_UClass_UImageDownloaderLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImageDownloaderLibrary.OuterSingleton, Z_Construct_UClass_UImageDownloaderLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UImageDownloaderLibrary.OuterSingleton;
}
template<> NEWMAIL_API UClass* StaticClass<UImageDownloaderLibrary>()
{
	return UImageDownloaderLibrary::StaticClass();
}
UImageDownloaderLibrary::UImageDownloaderLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UImageDownloaderLibrary);
UImageDownloaderLibrary::~UImageDownloaderLibrary() {}
// End Class UImageDownloaderLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UImageDownloaderLibrary, UImageDownloaderLibrary::StaticClass, TEXT("UImageDownloaderLibrary"), &Z_Registration_Info_UClass_UImageDownloaderLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImageDownloaderLibrary), 3221477277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_3086136004(TEXT("/Script/NewMail"),
	Z_CompiledInDeferFile_FID_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NewMail_Source_NewMail_Public_ImageDownloaderLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
