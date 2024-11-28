// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_ChangeStance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_ChangeStance() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_UGA_ChangeStance();
THEGAME_API UClass* Z_Construct_UClass_UGA_ChangeStance_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UGA_ChangeStance
void UGA_ChangeStance::StaticRegisterNativesUGA_ChangeStance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_ChangeStance);
UClass* Z_Construct_UClass_UGA_ChangeStance_NoRegister()
{
	return UGA_ChangeStance::StaticClass();
}
struct Z_Construct_UClass_UGA_ChangeStance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Hero/GA_ChangeStance.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_ChangeStance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_ChangeStance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGA_ChangeStance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_ChangeStance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_ChangeStance_Statics::ClassParams = {
	&UGA_ChangeStance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_ChangeStance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_ChangeStance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_ChangeStance()
{
	if (!Z_Registration_Info_UClass_UGA_ChangeStance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_ChangeStance.OuterSingleton, Z_Construct_UClass_UGA_ChangeStance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_ChangeStance.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_ChangeStance>()
{
	return UGA_ChangeStance::StaticClass();
}
UGA_ChangeStance::UGA_ChangeStance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_ChangeStance);
UGA_ChangeStance::~UGA_ChangeStance() {}
// End Class UGA_ChangeStance

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_ChangeStance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_ChangeStance, UGA_ChangeStance::StaticClass, TEXT("UGA_ChangeStance"), &Z_Registration_Info_UClass_UGA_ChangeStance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_ChangeStance), 3340950610U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_ChangeStance_h_762039266(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_ChangeStance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_ChangeStance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
