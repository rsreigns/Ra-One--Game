// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TheGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TheGame()
	{
		if (!Z_Registration_Info_UPackage__Script_TheGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TheGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x119685C2,
				0x3536F085,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TheGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TheGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TheGame(Z_Construct_UPackage__Script_TheGame, TEXT("/Script/TheGame"), Z_Registration_Info_UPackage__Script_TheGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x119685C2, 0x3536F085));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
