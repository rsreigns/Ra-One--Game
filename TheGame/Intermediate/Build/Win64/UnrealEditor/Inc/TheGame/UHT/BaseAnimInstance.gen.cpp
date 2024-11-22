// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Animation/BaseAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UBaseAnimInstance();
THEGAME_API UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UBaseAnimInstance
void UBaseAnimInstance::StaticRegisterNativesUBaseAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAnimInstance);
UClass* Z_Construct_UClass_UBaseAnimInstance_NoRegister()
{
	return UBaseAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UBaseAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/BaseAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningChar_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningCharMovementComponent_MetaData[] = {
		{ "Category", "Player" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZVelocity_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Public/Animation/BaseAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningChar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningCharMovementComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZVelocity;
	static void NewProp_bIsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_OwningChar = { "OwningChar", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAnimInstance, OwningChar), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningChar_MetaData), NewProp_OwningChar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_OwningCharMovementComponent = { "OwningCharMovementComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAnimInstance, OwningCharMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningCharMovementComponent_MetaData), NewProp_OwningCharMovementComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAnimInstance, Direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_ZVelocity = { "ZVelocity", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseAnimInstance, ZVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZVelocity_MetaData), NewProp_ZVelocity_MetaData) };
void Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
{
	((UBaseAnimInstance*)Obj)->bIsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseAnimInstance), &Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFalling_MetaData), NewProp_bIsFalling_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_OwningChar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_OwningCharMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_ZVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseAnimInstance_Statics::NewProp_bIsFalling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams = {
	&UBaseAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAnimInstance()
{
	if (!Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton, Z_Construct_UClass_UBaseAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAnimInstance.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UBaseAnimInstance>()
{
	return UBaseAnimInstance::StaticClass();
}
UBaseAnimInstance::UBaseAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAnimInstance);
UBaseAnimInstance::~UBaseAnimInstance() {}
// End Class UBaseAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Animation_BaseAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAnimInstance, UBaseAnimInstance::StaticClass, TEXT("UBaseAnimInstance"), &Z_Registration_Info_UClass_UBaseAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAnimInstance), 1349852246U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Animation_BaseAnimInstance_h_1446950574(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Animation_BaseAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Animation_BaseAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
