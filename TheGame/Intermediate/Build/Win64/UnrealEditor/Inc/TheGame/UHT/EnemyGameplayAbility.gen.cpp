// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Villain/EnemyGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyGameplayAbility() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
THEGAME_API UClass* Z_Construct_UClass_UEnemyGameplayAbility();
THEGAME_API UClass* Z_Construct_UClass_UEnemyGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UEnemyGameplayAbility
void UEnemyGameplayAbility::StaticRegisterNativesUEnemyGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyGameplayAbility);
UClass* Z_Construct_UClass_UEnemyGameplayAbility_NoRegister()
{
	return UEnemyGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UEnemyGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Villain/EnemyGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/Abilities/Villain/EnemyGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnemyGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyGameplayAbility_Statics::ClassParams = {
	&UEnemyGameplayAbility::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnemyGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UEnemyGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyGameplayAbility.OuterSingleton, Z_Construct_UClass_UEnemyGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnemyGameplayAbility.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UEnemyGameplayAbility>()
{
	return UEnemyGameplayAbility::StaticClass();
}
UEnemyGameplayAbility::UEnemyGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyGameplayAbility);
UEnemyGameplayAbility::~UEnemyGameplayAbility() {}
// End Class UEnemyGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Villain_EnemyGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyGameplayAbility, UEnemyGameplayAbility::StaticClass, TEXT("UEnemyGameplayAbility"), &Z_Registration_Info_UClass_UEnemyGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyGameplayAbility), 3943883884U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Villain_EnemyGameplayAbility_h_4092105575(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Villain_EnemyGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Villain_EnemyGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
