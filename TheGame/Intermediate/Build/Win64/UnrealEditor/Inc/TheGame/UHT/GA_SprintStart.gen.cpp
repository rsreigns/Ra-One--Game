// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_SprintStart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_SprintStart() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_UGA_SprintStart();
THEGAME_API UClass* Z_Construct_UClass_UGA_SprintStart_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UGA_SprintStart
void UGA_SprintStart::StaticRegisterNativesUGA_SprintStart()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_SprintStart);
UClass* Z_Construct_UClass_UGA_SprintStart_NoRegister()
{
	return UGA_SprintStart::StaticClass();
}
struct Z_Construct_UClass_UGA_SprintStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Hero/GA_SprintStart.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_SprintStart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintVelocity_MetaData[] = {
		{ "Category", "Default|Sprint" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_SprintStart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_SprintStart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_SprintStart_Statics::NewProp_SprintVelocity = { "SprintVelocity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_SprintStart, SprintVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintVelocity_MetaData), NewProp_SprintVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_SprintStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_SprintStart_Statics::NewProp_SprintVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_SprintStart_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_SprintStart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_SprintStart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_SprintStart_Statics::ClassParams = {
	&UGA_SprintStart::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGA_SprintStart_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_SprintStart_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_SprintStart_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_SprintStart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_SprintStart()
{
	if (!Z_Registration_Info_UClass_UGA_SprintStart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_SprintStart.OuterSingleton, Z_Construct_UClass_UGA_SprintStart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_SprintStart.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_SprintStart>()
{
	return UGA_SprintStart::StaticClass();
}
UGA_SprintStart::UGA_SprintStart(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_SprintStart);
UGA_SprintStart::~UGA_SprintStart() {}
// End Class UGA_SprintStart

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_SprintStart_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_SprintStart, UGA_SprintStart::StaticClass, TEXT("UGA_SprintStart"), &Z_Registration_Info_UClass_UGA_SprintStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_SprintStart), 3332377762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_SprintStart_h_792202962(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_SprintStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_SprintStart_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
