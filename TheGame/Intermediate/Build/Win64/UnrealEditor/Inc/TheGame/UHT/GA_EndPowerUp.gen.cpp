// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_EndPowerUp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_EndPowerUp() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_UGA_EndPowerUp();
THEGAME_API UClass* Z_Construct_UClass_UGA_EndPowerUp_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UGA_EndPowerUp
void UGA_EndPowerUp::StaticRegisterNativesUGA_EndPowerUp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_EndPowerUp);
UClass* Z_Construct_UClass_UGA_EndPowerUp_NoRegister()
{
	return UGA_EndPowerUp::StaticClass();
}
struct Z_Construct_UClass_UGA_EndPowerUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Hero/GA_EndPowerUp.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_EndPowerUp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_EndPowerUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGA_EndPowerUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_EndPowerUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_EndPowerUp_Statics::ClassParams = {
	&UGA_EndPowerUp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_EndPowerUp_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_EndPowerUp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_EndPowerUp()
{
	if (!Z_Registration_Info_UClass_UGA_EndPowerUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_EndPowerUp.OuterSingleton, Z_Construct_UClass_UGA_EndPowerUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_EndPowerUp.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_EndPowerUp>()
{
	return UGA_EndPowerUp::StaticClass();
}
UGA_EndPowerUp::UGA_EndPowerUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_EndPowerUp);
UGA_EndPowerUp::~UGA_EndPowerUp() {}
// End Class UGA_EndPowerUp

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_EndPowerUp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_EndPowerUp, UGA_EndPowerUp::StaticClass, TEXT("UGA_EndPowerUp"), &Z_Registration_Info_UClass_UGA_EndPowerUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_EndPowerUp), 3160905488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_EndPowerUp_h_1973336460(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_EndPowerUp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_EndPowerUp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
