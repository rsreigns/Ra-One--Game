// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Input/HeroInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroInputComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
THEGAME_API UClass* Z_Construct_UClass_UHeroInputComponent();
THEGAME_API UClass* Z_Construct_UClass_UHeroInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UHeroInputComponent
void UHeroInputComponent::StaticRegisterNativesUHeroInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroInputComponent);
UClass* Z_Construct_UClass_UHeroInputComponent_NoRegister()
{
	return UHeroInputComponent::StaticClass();
}
struct Z_Construct_UClass_UHeroInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/HeroInputComponent.h" },
		{ "ModuleRelativePath", "Public/Input/HeroInputComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHeroInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroInputComponent_Statics::ClassParams = {
	&UHeroInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroInputComponent()
{
	if (!Z_Registration_Info_UClass_UHeroInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroInputComponent.OuterSingleton, Z_Construct_UClass_UHeroInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroInputComponent.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UHeroInputComponent>()
{
	return UHeroInputComponent::StaticClass();
}
UHeroInputComponent::UHeroInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroInputComponent);
UHeroInputComponent::~UHeroInputComponent() {}
// End Class UHeroInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroInputComponent, UHeroInputComponent::StaticClass, TEXT("UHeroInputComponent"), &Z_Registration_Info_UClass_UHeroInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroInputComponent), 913374520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h_1715155417(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
