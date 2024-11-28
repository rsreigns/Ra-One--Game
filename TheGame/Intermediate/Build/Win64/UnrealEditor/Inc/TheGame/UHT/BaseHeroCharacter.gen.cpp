// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Character/BaseHeroCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseHeroCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
THEGAME_API UClass* Z_Construct_UClass_ABaseCharacter();
THEGAME_API UClass* Z_Construct_UClass_ABaseHeroCharacter();
THEGAME_API UClass* Z_Construct_UClass_ABaseHeroCharacter_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroInputComponent_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroStartup_DataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Class ABaseHeroCharacter Function CallChangeStance
struct Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics
{
	struct BaseHeroCharacter_eventCallChangeStance_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallChangeStance_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallChangeStance", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::BaseHeroCharacter_eventCallChangeStance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::BaseHeroCharacter_eventCallChangeStance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallChangeStance)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallChangeStance(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallChangeStance

// Begin Class ABaseHeroCharacter Function CallDodge
struct Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics
{
	struct BaseHeroCharacter_eventCallDodge_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallDodge_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallDodge", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::BaseHeroCharacter_eventCallDodge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::BaseHeroCharacter_eventCallDodge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallDodge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallDodge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallDodge)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallDodge(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallDodge

// Begin Class ABaseHeroCharacter Function CallEndCrouch
struct Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics
{
	struct BaseHeroCharacter_eventCallEndCrouch_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallEndCrouch_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallEndCrouch", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::BaseHeroCharacter_eventCallEndCrouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::BaseHeroCharacter_eventCallEndCrouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallEndCrouch)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallEndCrouch(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallEndCrouch

// Begin Class ABaseHeroCharacter Function CallEndPowerUp
struct Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics
{
	struct BaseHeroCharacter_eventCallEndPowerUp_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallEndPowerUp_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallEndPowerUp", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::BaseHeroCharacter_eventCallEndPowerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::BaseHeroCharacter_eventCallEndPowerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallEndPowerUp)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallEndPowerUp(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallEndPowerUp

// Begin Class ABaseHeroCharacter Function CallEndSprint
struct Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics
{
	struct BaseHeroCharacter_eventCallEndSprint_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallEndSprint_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallEndSprint", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::BaseHeroCharacter_eventCallEndSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::BaseHeroCharacter_eventCallEndSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallEndSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallEndSprint(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallEndSprint

// Begin Class ABaseHeroCharacter Function CallHitLeft
struct Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics
{
	struct BaseHeroCharacter_eventCallHitLeft_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallHitLeft_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallHitLeft", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::BaseHeroCharacter_eventCallHitLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::BaseHeroCharacter_eventCallHitLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallHitLeft)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallHitLeft(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallHitLeft

// Begin Class ABaseHeroCharacter Function CallHitRight
struct Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics
{
	struct BaseHeroCharacter_eventCallHitRight_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallHitRight_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallHitRight", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::BaseHeroCharacter_eventCallHitRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::BaseHeroCharacter_eventCallHitRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallHitRight)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallHitRight(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallHitRight

// Begin Class ABaseHeroCharacter Function CallJump
struct Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics
{
	struct BaseHeroCharacter_eventCallJump_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallJump_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallJump", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::BaseHeroCharacter_eventCallJump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::BaseHeroCharacter_eventCallJump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallJump)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallJump(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallJump

// Begin Class ABaseHeroCharacter Function CallStartCrouch
struct Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics
{
	struct BaseHeroCharacter_eventCallStartCrouch_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallStartCrouch_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallStartCrouch", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::BaseHeroCharacter_eventCallStartCrouch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::BaseHeroCharacter_eventCallStartCrouch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallStartCrouch)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallStartCrouch(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallStartCrouch

// Begin Class ABaseHeroCharacter Function CallStartPowerUp
struct Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics
{
	struct BaseHeroCharacter_eventCallStartPowerUp_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallStartPowerUp_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallStartPowerUp", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::BaseHeroCharacter_eventCallStartPowerUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::BaseHeroCharacter_eventCallStartPowerUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallStartPowerUp)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallStartPowerUp(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallStartPowerUp

// Begin Class ABaseHeroCharacter Function CallStartSprint
struct Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics
{
	struct BaseHeroCharacter_eventCallStartSprint_Parms
	{
		FInputActionValue InputActionValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActionValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::NewProp_InputActionValue = { "InputActionValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseHeroCharacter_eventCallStartSprint_Parms, InputActionValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActionValue_MetaData), NewProp_InputActionValue_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::NewProp_InputActionValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseHeroCharacter, nullptr, "CallStartSprint", nullptr, nullptr, Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::BaseHeroCharacter_eventCallStartSprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::BaseHeroCharacter_eventCallStartSprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseHeroCharacter::execCallStartSprint)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_InputActionValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallStartSprint(Z_Param_Out_InputActionValue);
	P_NATIVE_END;
}
// End Class ABaseHeroCharacter Function CallStartSprint

// Begin Class ABaseHeroCharacter
void ABaseHeroCharacter::StaticRegisterNativesABaseHeroCharacter()
{
	UClass* Class = ABaseHeroCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CallChangeStance", &ABaseHeroCharacter::execCallChangeStance },
		{ "CallDodge", &ABaseHeroCharacter::execCallDodge },
		{ "CallEndCrouch", &ABaseHeroCharacter::execCallEndCrouch },
		{ "CallEndPowerUp", &ABaseHeroCharacter::execCallEndPowerUp },
		{ "CallEndSprint", &ABaseHeroCharacter::execCallEndSprint },
		{ "CallHitLeft", &ABaseHeroCharacter::execCallHitLeft },
		{ "CallHitRight", &ABaseHeroCharacter::execCallHitRight },
		{ "CallJump", &ABaseHeroCharacter::execCallJump },
		{ "CallStartCrouch", &ABaseHeroCharacter::execCallStartCrouch },
		{ "CallStartPowerUp", &ABaseHeroCharacter::execCallStartPowerUp },
		{ "CallStartSprint", &ABaseHeroCharacter::execCallStartSprint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseHeroCharacter);
UClass* Z_Construct_UClass_ABaseHeroCharacter_NoRegister()
{
	return ABaseHeroCharacter::StaticClass();
}
struct Z_Construct_UClass_ABaseHeroCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/BaseHeroCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroInputComponent_MetaData[] = {
		{ "Category", "HeroInputComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "BoxOverlapComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroStartupData_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/Character/BaseHeroCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroInputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeroStartupData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallChangeStance, "CallChangeStance" }, // 4110712429
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallDodge, "CallDodge" }, // 1428917187
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallEndCrouch, "CallEndCrouch" }, // 3635101959
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallEndPowerUp, "CallEndPowerUp" }, // 170365611
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallEndSprint, "CallEndSprint" }, // 315888783
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallHitLeft, "CallHitLeft" }, // 2711788653
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallHitRight, "CallHitRight" }, // 2504549724
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallJump, "CallJump" }, // 3482465846
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallStartCrouch, "CallStartCrouch" }, // 133846292
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallStartPowerUp, "CallStartPowerUp" }, // 2164149220
		{ &Z_Construct_UFunction_ABaseHeroCharacter_CallStartSprint, "CallStartSprint" }, // 3685460530
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseHeroCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseHeroCharacter_Statics::NewProp_HeroInputComponent = { "HeroInputComponent", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseHeroCharacter, HeroInputComponent), Z_Construct_UClass_UHeroInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroInputComponent_MetaData), NewProp_HeroInputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseHeroCharacter_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseHeroCharacter, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseHeroCharacter_Statics::NewProp_HeroStartupData = { "HeroStartupData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseHeroCharacter, HeroStartupData), Z_Construct_UClass_UHeroStartup_DataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroStartupData_MetaData), NewProp_HeroStartupData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseHeroCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseHeroCharacter_Statics::NewProp_HeroInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseHeroCharacter_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseHeroCharacter_Statics::NewProp_HeroStartupData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHeroCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseHeroCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHeroCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseHeroCharacter_Statics::ClassParams = {
	&ABaseHeroCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseHeroCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHeroCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseHeroCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseHeroCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseHeroCharacter()
{
	if (!Z_Registration_Info_UClass_ABaseHeroCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseHeroCharacter.OuterSingleton, Z_Construct_UClass_ABaseHeroCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseHeroCharacter.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<ABaseHeroCharacter>()
{
	return ABaseHeroCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseHeroCharacter);
ABaseHeroCharacter::~ABaseHeroCharacter() {}
// End Class ABaseHeroCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseHeroCharacter, ABaseHeroCharacter::StaticClass, TEXT("ABaseHeroCharacter"), &Z_Registration_Info_UClass_ABaseHeroCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseHeroCharacter), 202540179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_2791133176(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
