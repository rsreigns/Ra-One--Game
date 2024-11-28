// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_Flip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Flip() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UGA_Flip();
THEGAME_API UClass* Z_Construct_UClass_UGA_Flip_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UGA_Flip Function FlipCharacter
struct Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics
{
	struct GA_Flip_eventFlipCharacter_Parms
	{
		UAnimMontage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Flip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GA_Flip_eventFlipCharacter_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGA_Flip, nullptr, "FlipCharacter", nullptr, nullptr, Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::GA_Flip_eventFlipCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::GA_Flip_eventFlipCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGA_Flip_FlipCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGA_Flip_FlipCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGA_Flip::execFlipCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=P_THIS->FlipCharacter();
	P_NATIVE_END;
}
// End Class UGA_Flip Function FlipCharacter

// Begin Class UGA_Flip
void UGA_Flip::StaticRegisterNativesUGA_Flip()
{
	UClass* Class = UGA_Flip::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FlipCharacter", &UGA_Flip::execFlipCharacter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Flip);
UClass* Z_Construct_UClass_UGA_Flip_NoRegister()
{
	return UGA_Flip::StaticClass();
}
struct Z_Construct_UClass_UGA_Flip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Hero/GA_Flip.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Flip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontflipMontage_MetaData[] = {
		{ "Category", "Default|Flip" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Flip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackflipMontage_MetaData[] = {
		{ "Category", "Default|Flip" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Flip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchPowerX_MetaData[] = {
		{ "Category", "Default|Flip" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Flip.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LaunchPowerZ_MetaData[] = {
		{ "Category", "Default|Flip" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Flip.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontflipMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackflipMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchPowerX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LaunchPowerZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGA_Flip_FlipCharacter, "FlipCharacter" }, // 3459237055
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Flip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_Flip_Statics::NewProp_FrontflipMontage = { "FrontflipMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Flip, FrontflipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontflipMontage_MetaData), NewProp_FrontflipMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_Flip_Statics::NewProp_BackflipMontage = { "BackflipMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Flip, BackflipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackflipMontage_MetaData), NewProp_BackflipMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_Flip_Statics::NewProp_LaunchPowerX = { "LaunchPowerX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Flip, LaunchPowerX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchPowerX_MetaData), NewProp_LaunchPowerX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGA_Flip_Statics::NewProp_LaunchPowerZ = { "LaunchPowerZ", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Flip, LaunchPowerZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LaunchPowerZ_MetaData), NewProp_LaunchPowerZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_Flip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Flip_Statics::NewProp_FrontflipMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Flip_Statics::NewProp_BackflipMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Flip_Statics::NewProp_LaunchPowerX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Flip_Statics::NewProp_LaunchPowerZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Flip_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_Flip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Flip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Flip_Statics::ClassParams = {
	&UGA_Flip::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGA_Flip_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Flip_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Flip_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Flip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_Flip()
{
	if (!Z_Registration_Info_UClass_UGA_Flip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Flip.OuterSingleton, Z_Construct_UClass_UGA_Flip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_Flip.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_Flip>()
{
	return UGA_Flip::StaticClass();
}
UGA_Flip::UGA_Flip(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Flip);
UGA_Flip::~UGA_Flip() {}
// End Class UGA_Flip

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Flip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Flip, UGA_Flip::StaticClass, TEXT("UGA_Flip"), &Z_Registration_Info_UClass_UGA_Flip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Flip), 589672399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Flip_h_105469448(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Flip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Flip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
