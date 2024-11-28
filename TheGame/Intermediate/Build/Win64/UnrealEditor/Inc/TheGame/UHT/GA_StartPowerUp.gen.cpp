// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_StartPowerUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_StartPowerUp() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_UGA_StartPowerUp();
THEGAME_API UClass* Z_Construct_UClass_UGA_StartPowerUp_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UGA_StartPowerUp
void UGA_StartPowerUp::StaticRegisterNativesUGA_StartPowerUp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_StartPowerUp);
UClass* Z_Construct_UClass_UGA_StartPowerUp_NoRegister()
{
	return UGA_StartPowerUp::StaticClass();
}
struct Z_Construct_UClass_UGA_StartPowerUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Hero/GA_StartPowerUp.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_StartPowerUp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_StartPowerUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGA_StartPowerUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_StartPowerUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_StartPowerUp_Statics::ClassParams = {
	&UGA_StartPowerUp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_StartPowerUp_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_StartPowerUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_StartPowerUp()
{
	if (!Z_Registration_Info_UClass_UGA_StartPowerUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_StartPowerUp.OuterSingleton, Z_Construct_UClass_UGA_StartPowerUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_StartPowerUp.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_StartPowerUp>()
{
	return UGA_StartPowerUp::StaticClass();
}
UGA_StartPowerUp::UGA_StartPowerUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_StartPowerUp);
UGA_StartPowerUp::~UGA_StartPowerUp() {}
// End Class UGA_StartPowerUp

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_StartPowerUp, UGA_StartPowerUp::StaticClass, TEXT("UGA_StartPowerUp"), &Z_Registration_Info_UClass_UGA_StartPowerUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_StartPowerUp), 3411313225U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h_294280846(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
