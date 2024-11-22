// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_HitRight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_HitRight() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_UGA_HitRight();
THEGAME_API UClass* Z_Construct_UClass_UGA_HitRight_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UGA_HitRight
void UGA_HitRight::StaticRegisterNativesUGA_HitRight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_HitRight);
UClass* Z_Construct_UClass_UGA_HitRight_NoRegister()
{
	return UGA_HitRight::StaticClass();
}
struct Z_Construct_UClass_UGA_HitRight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Hero/GA_HitRight.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_HitRight.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_HitRight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGA_HitRight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_HitRight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_HitRight_Statics::ClassParams = {
	&UGA_HitRight::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_HitRight_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_HitRight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_HitRight()
{
	if (!Z_Registration_Info_UClass_UGA_HitRight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_HitRight.OuterSingleton, Z_Construct_UClass_UGA_HitRight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_HitRight.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_HitRight>()
{
	return UGA_HitRight::StaticClass();
}
UGA_HitRight::UGA_HitRight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_HitRight);
UGA_HitRight::~UGA_HitRight() {}
// End Class UGA_HitRight

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitRight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_HitRight, UGA_HitRight::StaticClass, TEXT("UGA_HitRight"), &Z_Registration_Info_UClass_UGA_HitRight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_HitRight), 1099589557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitRight_h_1526613156(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitRight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitRight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
