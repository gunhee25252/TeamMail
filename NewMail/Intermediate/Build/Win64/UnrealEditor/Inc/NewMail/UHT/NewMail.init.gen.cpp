// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewMail_init() {}
	NEWMAIL_API UFunction* Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NewMail;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NewMail()
	{
		if (!Z_Registration_Info_UPackage__Script_NewMail.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NewMail_OnTextureLoadedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NewMail",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x84E9942F,
				0xDBCD501A,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NewMail.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NewMail.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NewMail(Z_Construct_UPackage__Script_NewMail, TEXT("/Script/NewMail"), Z_Registration_Info_UPackage__Script_NewMail, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x84E9942F, 0xDBCD501A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
