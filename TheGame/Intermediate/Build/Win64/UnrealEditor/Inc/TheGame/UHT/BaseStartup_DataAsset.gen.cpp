// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/StartupData/BaseStartup_DataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStartup_DataAsset() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
THEGAME_API UClass* Z_Construct_UClass_UBaseStartup_DataAsset();
THEGAME_API UClass* Z_Construct_UClass_UBaseStartup_DataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UBaseStartup_DataAsset
void UBaseStartup_DataAsset::StaticRegisterNativesUBaseStartup_DataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseStartup_DataAsset);
UClass* Z_Construct_UClass_UBaseStartup_DataAsset_NoRegister()
{
	return UBaseStartup_DataAsset::StaticClass();
}
struct Z_Construct_UClass_UBaseStartup_DataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StartupData/BaseStartup_DataAsset.h" },
		{ "ModuleRelativePath", "Public/StartupData/BaseStartup_DataAsset.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseStartup_DataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseStartup_DataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStartup_DataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseStartup_DataAsset_Statics::ClassParams = {
	&UBaseStartup_DataAsset::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseStartup_DataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseStartup_DataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseStartup_DataAsset()
{
	if (!Z_Registration_Info_UClass_UBaseStartup_DataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseStartup_DataAsset.OuterSingleton, Z_Construct_UClass_UBaseStartup_DataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseStartup_DataAsset.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UBaseStartup_DataAsset>()
{
	return UBaseStartup_DataAsset::StaticClass();
}
UBaseStartup_DataAsset::UBaseStartup_DataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseStartup_DataAsset);
UBaseStartup_DataAsset::~UBaseStartup_DataAsset() {}
// End Class UBaseStartup_DataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_BaseStartup_DataAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseStartup_DataAsset, UBaseStartup_DataAsset::StaticClass, TEXT("UBaseStartup_DataAsset"), &Z_Registration_Info_UClass_UBaseStartup_DataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseStartup_DataAsset), 1054022170U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_BaseStartup_DataAsset_h_2424401230(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_BaseStartup_DataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_BaseStartup_DataAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
