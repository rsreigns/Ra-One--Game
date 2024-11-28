// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_EndCrouch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_EndCrouch() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_UGA_EndCrouch();
THEGAME_API UClass* Z_Construct_UClass_UGA_EndCrouch_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UGA_EndCrouch
void UGA_EndCrouch::StaticRegisterNativesUGA_EndCrouch()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_EndCrouch);
UClass* Z_Construct_UClass_UGA_EndCrouch_NoRegister()
{
	return UGA_EndCrouch::StaticClass();
}
struct Z_Construct_UClass_UGA_EndCrouch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Hero/GA_EndCrouch.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_EndCrouch.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_EndCrouch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGA_EndCrouch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_EndCrouch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_EndCrouch_Statics::ClassParams = {
	&UGA_EndCrouch::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_EndCrouch_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_EndCrouch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_EndCrouch()
{
	if (!Z_Registration_Info_UClass_UGA_EndCrouch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_EndCrouch.OuterSingleton, Z_Construct_UClass_UGA_EndCrouch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_EndCrouch.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_EndCrouch>()
{
	return UGA_EndCrouch::StaticClass();
}
UGA_EndCrouch::UGA_EndCrouch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_EndCrouch);
UGA_EndCrouch::~UGA_EndCrouch() {}
// End Class UGA_EndCrouch

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_EndCrouch_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_EndCrouch, UGA_EndCrouch::StaticClass, TEXT("UGA_EndCrouch"), &Z_Registration_Info_UClass_UGA_EndCrouch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_EndCrouch), 285162189U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_EndCrouch_h_3056899049(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_EndCrouch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_EndCrouch_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
