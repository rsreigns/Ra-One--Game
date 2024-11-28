// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Animation/Villain/VillainBaseAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVillainBaseAnimInstance() {}

// Begin Cross Module References
THEGAME_API UClass* Z_Construct_UClass_UBaseAnimInstance();
THEGAME_API UClass* Z_Construct_UClass_UVillainBaseAnimInstance();
THEGAME_API UClass* Z_Construct_UClass_UVillainBaseAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UVillainBaseAnimInstance
void UVillainBaseAnimInstance::StaticRegisterNativesUVillainBaseAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVillainBaseAnimInstance);
UClass* Z_Construct_UClass_UVillainBaseAnimInstance_NoRegister()
{
	return UVillainBaseAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UVillainBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/Villain/VillainBaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/Villain/VillainBaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVillainBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVillainBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVillainBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVillainBaseAnimInstance_Statics::ClassParams = {
	&UVillainBaseAnimInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVillainBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UVillainBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVillainBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UVillainBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVillainBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UVillainBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVillainBaseAnimInstance.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UVillainBaseAnimInstance>()
{
	return UVillainBaseAnimInstance::StaticClass();
}
UVillainBaseAnimInstance::UVillainBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVillainBaseAnimInstance);
UVillainBaseAnimInstance::~UVillainBaseAnimInstance() {}
// End Class UVillainBaseAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Animation_Villain_VillainBaseAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVillainBaseAnimInstance, UVillainBaseAnimInstance::StaticClass, TEXT("UVillainBaseAnimInstance"), &Z_Registration_Info_UClass_UVillainBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVillainBaseAnimInstance), 3773071335U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Animation_Villain_VillainBaseAnimInstance_h_2668510461(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Animation_Villain_VillainBaseAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Animation_Villain_VillainBaseAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
