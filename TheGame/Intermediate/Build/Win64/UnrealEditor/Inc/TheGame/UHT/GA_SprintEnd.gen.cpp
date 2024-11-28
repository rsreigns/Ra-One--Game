// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_SprintEnd.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_SprintEnd() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_UGA_SprintEnd();
THEGAME_API UClass* Z_Construct_UClass_UGA_SprintEnd_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UGA_SprintEnd
void UGA_SprintEnd::StaticRegisterNativesUGA_SprintEnd()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_SprintEnd);
UClass* Z_Construct_UClass_UGA_SprintEnd_NoRegister()
{
	return UGA_SprintEnd::StaticClass();
}
struct Z_Construct_UClass_UGA_SprintEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Hero/GA_SprintEnd.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_SprintEnd.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Default|Sprint" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_SprintEnd.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_SprintEnd>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_SprintEnd_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_SprintEnd, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_SprintEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_SprintEnd_Statics::NewProp_WalkSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_SprintEnd_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_SprintEnd_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_SprintEnd_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_SprintEnd_Statics::ClassParams = {
	&UGA_SprintEnd::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGA_SprintEnd_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_SprintEnd_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_SprintEnd_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_SprintEnd_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_SprintEnd()
{
	if (!Z_Registration_Info_UClass_UGA_SprintEnd.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_SprintEnd.OuterSingleton, Z_Construct_UClass_UGA_SprintEnd_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_SprintEnd.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_SprintEnd>()
{
	return UGA_SprintEnd::StaticClass();
}
UGA_SprintEnd::UGA_SprintEnd(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_SprintEnd);
UGA_SprintEnd::~UGA_SprintEnd() {}
// End Class UGA_SprintEnd

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_SprintEnd_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_SprintEnd, UGA_SprintEnd::StaticClass, TEXT("UGA_SprintEnd"), &Z_Registration_Info_UClass_UGA_SprintEnd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_SprintEnd), 1830346129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_SprintEnd_h_1957646273(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_SprintEnd_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_SprintEnd_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
