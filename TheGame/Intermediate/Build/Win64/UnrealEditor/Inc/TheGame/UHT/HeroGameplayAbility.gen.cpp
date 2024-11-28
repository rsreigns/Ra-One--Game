// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/HeroGameplayAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroGameplayAbility() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
THEGAME_API UClass* Z_Construct_UClass_ABaseHeroCharacter_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
THEGAME_API UClass* Z_Construct_UClass_UGameAbilitySystemComponent_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class UHeroGameplayAbility Function GetHeroCharacterFromAI
struct Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics
{
	struct HeroGameplayAbility_eventGetHeroCharacterFromAI_Parms
	{
		ABaseHeroCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Hero/HeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroGameplayAbility_eventGetHeroCharacterFromAI_Parms, ReturnValue), Z_Construct_UClass_ABaseHeroCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility, nullptr, "GetHeroCharacterFromAI", nullptr, nullptr, Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::HeroGameplayAbility_eventGetHeroCharacterFromAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::HeroGameplayAbility_eventGetHeroCharacterFromAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility::execGetHeroCharacterFromAI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ABaseHeroCharacter**)Z_Param__Result=P_THIS->GetHeroCharacterFromAI();
	P_NATIVE_END;
}
// End Class UHeroGameplayAbility Function GetHeroCharacterFromAI

// Begin Class UHeroGameplayAbility Function GetPlayerASCFromAI
struct Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics
{
	struct HeroGameplayAbility_eventGetPlayerASCFromAI_Parms
	{
		UGameAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Hero/HeroGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HeroGameplayAbility_eventGetPlayerASCFromAI_Parms, ReturnValue), Z_Construct_UClass_UGameAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility, nullptr, "GetPlayerASCFromAI", nullptr, nullptr, Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::HeroGameplayAbility_eventGetPlayerASCFromAI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::HeroGameplayAbility_eventGetPlayerASCFromAI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility::execGetPlayerASCFromAI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGameAbilitySystemComponent**)Z_Param__Result=P_THIS->GetPlayerASCFromAI();
	P_NATIVE_END;
}
// End Class UHeroGameplayAbility Function GetPlayerASCFromAI

// Begin Class UHeroGameplayAbility Function InitiateThisAbility
struct Z_Construct_UFunction_UHeroGameplayAbility_InitiateThisAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Hero/HeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroGameplayAbility_InitiateThisAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroGameplayAbility, nullptr, "InitiateThisAbility", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroGameplayAbility_InitiateThisAbility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHeroGameplayAbility_InitiateThisAbility_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHeroGameplayAbility_InitiateThisAbility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroGameplayAbility_InitiateThisAbility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHeroGameplayAbility::execInitiateThisAbility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitiateThisAbility();
	P_NATIVE_END;
}
// End Class UHeroGameplayAbility Function InitiateThisAbility

// Begin Class UHeroGameplayAbility
void UHeroGameplayAbility::StaticRegisterNativesUHeroGameplayAbility()
{
	UClass* Class = UHeroGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHeroCharacterFromAI", &UHeroGameplayAbility::execGetHeroCharacterFromAI },
		{ "GetPlayerASCFromAI", &UHeroGameplayAbility::execGetPlayerASCFromAI },
		{ "InitiateThisAbility", &UHeroGameplayAbility::execInitiateThisAbility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroGameplayAbility);
UClass* Z_Construct_UClass_UHeroGameplayAbility_NoRegister()
{
	return UHeroGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UHeroGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/Hero/HeroGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/HeroGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasAbilityStatus_MetaData[] = {
		{ "Category", "Default|Ability" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/HeroGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddStatus_MetaData[] = {
		{ "Category", "Default|Ability" },
		{ "EditCondition", "bHasAbilityStatus" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/HeroGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityStatus_MetaData[] = {
		{ "Category", "Default|Ability" },
		{ "EditCondition", "bHasAbilityStatus" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/HeroGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bHasAbilityStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAbilityStatus;
	static void NewProp_bAddStatus_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroGameplayAbility_GetHeroCharacterFromAI, "GetHeroCharacterFromAI" }, // 3036091799
		{ &Z_Construct_UFunction_UHeroGameplayAbility_GetPlayerASCFromAI, "GetPlayerASCFromAI" }, // 2729971952
		{ &Z_Construct_UFunction_UHeroGameplayAbility_InitiateThisAbility, "InitiateThisAbility" }, // 1092251737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bHasAbilityStatus_SetBit(void* Obj)
{
	((UHeroGameplayAbility*)Obj)->bHasAbilityStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bHasAbilityStatus = { "bHasAbilityStatus", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroGameplayAbility), &Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bHasAbilityStatus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasAbilityStatus_MetaData), NewProp_bHasAbilityStatus_MetaData) };
void Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAddStatus_SetBit(void* Obj)
{
	((UHeroGameplayAbility*)Obj)->bAddStatus = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAddStatus = { "bAddStatus", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHeroGameplayAbility), &Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAddStatus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddStatus_MetaData), NewProp_bAddStatus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_AbilityStatus = { "AbilityStatus", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroGameplayAbility, AbilityStatus), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityStatus_MetaData), NewProp_AbilityStatus_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bHasAbilityStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_bAddStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroGameplayAbility_Statics::NewProp_AbilityStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroGameplayAbility_Statics::ClassParams = {
	&UHeroGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHeroGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UHeroGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroGameplayAbility.OuterSingleton, Z_Construct_UClass_UHeroGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroGameplayAbility.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UHeroGameplayAbility>()
{
	return UHeroGameplayAbility::StaticClass();
}
UHeroGameplayAbility::UHeroGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroGameplayAbility);
UHeroGameplayAbility::~UHeroGameplayAbility() {}
// End Class UHeroGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroGameplayAbility, UHeroGameplayAbility::StaticClass, TEXT("UHeroGameplayAbility"), &Z_Registration_Info_UClass_UHeroGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroGameplayAbility), 3689919675U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_2791691188(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
