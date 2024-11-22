// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_Jump.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Jump() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UGA_Jump();
THEGAME_API UClass* Z_Construct_UClass_UGA_Jump_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UGA_Jump Function LaunchPlayer
struct Z_Construct_UFunction_UGA_Jump_LaunchPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Jump.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_Jump_LaunchPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_Jump, nullptr, "LaunchPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Jump_LaunchPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_Jump_LaunchPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGA_Jump_LaunchPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_Jump_LaunchPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_Jump::execLaunchPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LaunchPlayer();
	P_NATIVE_END;
}
// End Class UGA_Jump Function LaunchPlayer

// Begin Class UGA_Jump
void UGA_Jump::StaticRegisterNativesUGA_Jump()
{
	UClass* Class = UGA_Jump::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LaunchPlayer", &UGA_Jump::execLaunchPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Jump);
UClass* Z_Construct_UClass_UGA_Jump_NoRegister()
{
	return UGA_Jump::StaticClass();
}
struct Z_Construct_UClass_UGA_Jump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Hero/GA_Jump.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Jump.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontflipMontage_MetaData[] = {
		{ "Category", "Default|Flip" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Jump.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackflipMontage_MetaData[] = {
		{ "Category", "Default|Flip" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Jump.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchPowerX_MetaData[] = {
		{ "Category", "Default|Flip" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Jump.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchPowerZ_MetaData[] = {
		{ "Category", "Default|Flip" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Jump.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[] = {
		{ "Category", "GA_Jump" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Jump.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFlip_MetaData[] = {
		{ "Category", "GA_Jump" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Jump.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontflipMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackflipMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchPowerX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchPowerZ;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static void NewProp_bShouldFlip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFlip;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_Jump_LaunchPlayer, "LaunchPlayer" }, // 2325909834
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Jump>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_Jump_Statics::NewProp_FrontflipMontage = { "FrontflipMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Jump, FrontflipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontflipMontage_MetaData), NewProp_FrontflipMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_Jump_Statics::NewProp_BackflipMontage = { "BackflipMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Jump, BackflipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackflipMontage_MetaData), NewProp_BackflipMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_Jump_Statics::NewProp_LaunchPowerX = { "LaunchPowerX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Jump, LaunchPowerX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchPowerX_MetaData), NewProp_LaunchPowerX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_Jump_Statics::NewProp_LaunchPowerZ = { "LaunchPowerZ", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Jump, LaunchPowerZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchPowerZ_MetaData), NewProp_LaunchPowerZ_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_Jump_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Jump, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageToPlay_MetaData), NewProp_MontageToPlay_MetaData) };
void Z_Construct_UClass_UGA_Jump_Statics::NewProp_bShouldFlip_SetBit(void* Obj)
{
	((UGA_Jump*)Obj)->bShouldFlip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGA_Jump_Statics::NewProp_bShouldFlip = { "bShouldFlip", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGA_Jump), &Z_Construct_UClass_UGA_Jump_Statics::NewProp_bShouldFlip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldFlip_MetaData), NewProp_bShouldFlip_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_Jump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Jump_Statics::NewProp_FrontflipMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Jump_Statics::NewProp_BackflipMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Jump_Statics::NewProp_LaunchPowerX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Jump_Statics::NewProp_LaunchPowerZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Jump_Statics::NewProp_MontageToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Jump_Statics::NewProp_bShouldFlip,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Jump_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_Jump_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Jump_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Jump_Statics::ClassParams = {
	&UGA_Jump::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGA_Jump_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Jump_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Jump_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Jump_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_Jump()
{
	if (!Z_Registration_Info_UClass_UGA_Jump.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Jump.OuterSingleton, Z_Construct_UClass_UGA_Jump_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_Jump.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_Jump>()
{
	return UGA_Jump::StaticClass();
}
UGA_Jump::UGA_Jump(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Jump);
UGA_Jump::~UGA_Jump() {}
// End Class UGA_Jump

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Jump_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Jump, UGA_Jump::StaticClass, TEXT("UGA_Jump"), &Z_Registration_Info_UClass_UGA_Jump, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Jump), 1793141051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Jump_h_3754958247(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Jump_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Jump_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
