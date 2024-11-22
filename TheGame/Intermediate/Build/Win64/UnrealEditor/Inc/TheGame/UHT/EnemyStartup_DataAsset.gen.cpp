// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/StartupData/EnemyStartup_DataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyStartup_DataAsset() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_UBaseStartup_DataAsset();
THEGAME_API UClass* Z_Construct_UClass_UEnemyStartup_DataAsset();
THEGAME_API UClass* Z_Construct_UClass_UEnemyStartup_DataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UEnemyStartup_DataAsset
void UEnemyStartup_DataAsset::StaticRegisterNativesUEnemyStartup_DataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyStartup_DataAsset);
UClass* Z_Construct_UClass_UEnemyStartup_DataAsset_NoRegister()
{
	return UEnemyStartup_DataAsset::StaticClass();
}
struct Z_Construct_UClass_UEnemyStartup_DataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StartupData/EnemyStartup_DataAsset.h" },
		{ "ModuleRelativePath", "Public/StartupData/EnemyStartup_DataAsset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyStartup_DataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyStartup_DataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseStartup_DataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyStartup_DataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyStartup_DataAsset_Statics::ClassParams = {
	&UEnemyStartup_DataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyStartup_DataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyStartup_DataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyStartup_DataAsset()
{
	if (!Z_Registration_Info_UClass_UEnemyStartup_DataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyStartup_DataAsset.OuterSingleton, Z_Construct_UClass_UEnemyStartup_DataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyStartup_DataAsset.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UEnemyStartup_DataAsset>()
{
	return UEnemyStartup_DataAsset::StaticClass();
}
UEnemyStartup_DataAsset::UEnemyStartup_DataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyStartup_DataAsset);
UEnemyStartup_DataAsset::~UEnemyStartup_DataAsset() {}
// End Class UEnemyStartup_DataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_EnemyStartup_DataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyStartup_DataAsset, UEnemyStartup_DataAsset::StaticClass, TEXT("UEnemyStartup_DataAsset"), &Z_Registration_Info_UClass_UEnemyStartup_DataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyStartup_DataAsset), 2808976218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_EnemyStartup_DataAsset_h_2355664217(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_EnemyStartup_DataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_EnemyStartup_DataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
