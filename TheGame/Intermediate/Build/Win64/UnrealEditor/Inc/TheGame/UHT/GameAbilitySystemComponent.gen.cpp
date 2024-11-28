// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/AbilitySystem/GameAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameAbilitySystemComponent() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
THEGAME_API UClass* Z_Construct_UClass_UGameAbilitySystemComponent();
THEGAME_API UClass* Z_Construct_UClass_UGameAbilitySystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UGameAbilitySystemComponent
void UGameAbilitySystemComponent::StaticRegisterNativesUGameAbilitySystemComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameAbilitySystemComponent);
UClass* Z_Construct_UClass_UGameAbilitySystemComponent_NoRegister()
{
	return UGameAbilitySystemComponent::StaticClass();
}
struct Z_Construct_UClass_UGameAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/GameAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GameAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameAbilitySystemComponent_Statics::ClassParams = {
	&UGameAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UGameAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGameAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameAbilitySystemComponent.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGameAbilitySystemComponent>()
{
	return UGameAbilitySystemComponent::StaticClass();
}
UGameAbilitySystemComponent::UGameAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameAbilitySystemComponent);
UGameAbilitySystemComponent::~UGameAbilitySystemComponent() {}
// End Class UGameAbilitySystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_AbilitySystem_GameAbilitySystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameAbilitySystemComponent, UGameAbilitySystemComponent::StaticClass, TEXT("UGameAbilitySystemComponent"), &Z_Registration_Info_UClass_UGameAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameAbilitySystemComponent), 1921373276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_AbilitySystem_GameAbilitySystemComponent_h_1295195813(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_AbilitySystem_GameAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_AbilitySystem_GameAbilitySystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
