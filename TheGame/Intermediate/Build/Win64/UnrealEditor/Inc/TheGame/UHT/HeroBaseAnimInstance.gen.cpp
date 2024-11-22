// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Animation/Hero/HeroBaseAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroBaseAnimInstance() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_ABaseHeroCharacter_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UBaseAnimInstance();
THEGAME_API UClass* Z_Construct_UClass_UHeroBaseAnimInstance();
THEGAME_API UClass* Z_Construct_UClass_UHeroBaseAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UHeroBaseAnimInstance
void UHeroBaseAnimInstance::StaticRegisterNativesUHeroBaseAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroBaseAnimInstance);
UClass* Z_Construct_UClass_UHeroBaseAnimInstance_NoRegister()
{
	return UHeroBaseAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UHeroBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/Hero/HeroBaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/Hero/HeroBaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningHeroChar_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Animation/Hero/HeroBaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningHeroChar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHeroBaseAnimInstance_Statics::NewProp_OwningHeroChar = { "OwningHeroChar", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroBaseAnimInstance, OwningHeroChar), Z_Construct_UClass_ABaseHeroCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningHeroChar_MetaData), NewProp_OwningHeroChar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroBaseAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroBaseAnimInstance_Statics::NewProp_OwningHeroChar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroBaseAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroBaseAnimInstance_Statics::ClassParams = {
	&UHeroBaseAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHeroBaseAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroBaseAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UHeroBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UHeroBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroBaseAnimInstance.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UHeroBaseAnimInstance>()
{
	return UHeroBaseAnimInstance::StaticClass();
}
UHeroBaseAnimInstance::UHeroBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroBaseAnimInstance);
UHeroBaseAnimInstance::~UHeroBaseAnimInstance() {}
// End Class UHeroBaseAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Animation_Hero_HeroBaseAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroBaseAnimInstance, UHeroBaseAnimInstance::StaticClass, TEXT("UHeroBaseAnimInstance"), &Z_Registration_Info_UClass_UHeroBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroBaseAnimInstance), 573507649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Animation_Hero_HeroBaseAnimInstance_h_843465644(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Animation_Hero_HeroBaseAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Animation_Hero_HeroBaseAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
