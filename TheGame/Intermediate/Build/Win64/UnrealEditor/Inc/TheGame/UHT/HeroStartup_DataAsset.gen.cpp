// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/StartupData/HeroStartup_DataAsset.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroStartup_DataAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
THEGAME_API UClass* Z_Construct_UClass_UBaseStartup_DataAsset();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroStartup_DataAsset();
THEGAME_API UClass* Z_Construct_UClass_UHeroStartup_DataAsset_NoRegister();
THEGAME_API UEnum* Z_Construct_UEnum_TheGame_EIMCType();
THEGAME_API UScriptStruct* Z_Construct_UScriptStruct_FActionAbilityTagMapping();
THEGAME_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingType();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Enum EIMCType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIMCType;
static UEnum* EIMCType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIMCType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIMCType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TheGame_EIMCType, (UObject*)Z_Construct_UPackage__Script_TheGame(), TEXT("EIMCType"));
	}
	return Z_Registration_Info_UEnum_EIMCType.OuterSingleton;
}
template<> THEGAME_API UEnum* StaticEnum<EIMCType>()
{
	return EIMCType_StaticEnum();
}
struct Z_Construct_UEnum_TheGame_EIMCType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouch.Name", "EIMCType::Crouch" },
		{ "Default.Name", "EIMCType::Default" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
		{ "Power.Name", "EIMCType::Power" },
		{ "Sprint.Name", "EIMCType::Sprint" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIMCType::Default", (int64)EIMCType::Default },
		{ "EIMCType::Sprint", (int64)EIMCType::Sprint },
		{ "EIMCType::Crouch", (int64)EIMCType::Crouch },
		{ "EIMCType::Power", (int64)EIMCType::Power },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TheGame_EIMCType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TheGame,
	nullptr,
	"EIMCType",
	"EIMCType",
	Z_Construct_UEnum_TheGame_EIMCType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TheGame_EIMCType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TheGame_EIMCType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TheGame_EIMCType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TheGame_EIMCType()
{
	if (!Z_Registration_Info_UEnum_EIMCType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIMCType.InnerSingleton, Z_Construct_UEnum_TheGame_EIMCType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIMCType.InnerSingleton;
}
// End Enum EIMCType

// Begin ScriptStruct FInputMappingType
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputMappingType;
class UScriptStruct* FInputMappingType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputMappingType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingType, (UObject*)Z_Construct_UPackage__Script_TheGame(), TEXT("InputMappingType"));
	}
	return Z_Registration_Info_UScriptStruct_InputMappingType.OuterSingleton;
}
template<> THEGAME_API UScriptStruct* StaticStruct<FInputMappingType>()
{
	return FInputMappingType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputMappingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingType_MetaData[] = {
		{ "Category", "Input-Mapping_Type" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingContext_MetaData[] = {
		{ "Category", "Input-Mapping_Context" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MappingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MappingType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputMappingType_Statics::NewProp_MappingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputMappingType_Statics::NewProp_MappingType = { "MappingType", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingType, MappingType), Z_Construct_UEnum_TheGame_EIMCType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingType_MetaData), NewProp_MappingType_MetaData) }; // 2315656198
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputMappingType_Statics::NewProp_MappingContext = { "MappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingType, MappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingContext_MetaData), NewProp_MappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingType_Statics::NewProp_MappingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingType_Statics::NewProp_MappingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingType_Statics::NewProp_MappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
	nullptr,
	&NewStructOps,
	"InputMappingType",
	Z_Construct_UScriptStruct_FInputMappingType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingType_Statics::PropPointers),
	sizeof(FInputMappingType),
	alignof(FInputMappingType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputMappingType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputMappingType()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputMappingType.InnerSingleton, Z_Construct_UScriptStruct_FInputMappingType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputMappingType.InnerSingleton;
}
// End ScriptStruct FInputMappingType

// Begin ScriptStruct FActionAbilityTagMapping
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActionAbilityTagMapping;
class UScriptStruct* FActionAbilityTagMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActionAbilityTagMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActionAbilityTagMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionAbilityTagMapping, (UObject*)Z_Construct_UPackage__Script_TheGame(), TEXT("ActionAbilityTagMapping"));
	}
	return Z_Registration_Info_UScriptStruct_ActionAbilityTagMapping.OuterSingleton;
}
template<> THEGAME_API UScriptStruct* StaticStruct<FActionAbilityTagMapping>()
{
	return FActionAbilityTagMapping::StaticStruct();
}
struct Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Category", "GameplayTag_Input" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTag_MetaData[] = {
		{ "Category", "GameplayTag_Ability" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeroAbility_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HeroAbility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionAbilityTagMapping>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionAbilityTagMapping, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionAbilityTagMapping, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::NewProp_AbilityTag = { "AbilityTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionAbilityTagMapping, AbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityTag_MetaData), NewProp_AbilityTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::NewProp_HeroAbility = { "HeroAbility", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActionAbilityTagMapping, HeroAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UHeroGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeroAbility_MetaData), NewProp_HeroAbility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::NewProp_AbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::NewProp_HeroAbility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
	nullptr,
	&NewStructOps,
	"ActionAbilityTagMapping",
	Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::PropPointers),
	sizeof(FActionAbilityTagMapping),
	alignof(FActionAbilityTagMapping),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActionAbilityTagMapping()
{
	if (!Z_Registration_Info_UScriptStruct_ActionAbilityTagMapping.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActionAbilityTagMapping.InnerSingleton, Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ActionAbilityTagMapping.InnerSingleton;
}
// End ScriptStruct FActionAbilityTagMapping

// Begin Class UHeroStartup_DataAsset
void UHeroStartup_DataAsset::StaticRegisterNativesUHeroStartup_DataAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroStartup_DataAsset);
UClass* Z_Construct_UClass_UHeroStartup_DataAsset_NoRegister()
{
	return UHeroStartup_DataAsset::StaticClass();
}
struct Z_Construct_UClass_UHeroStartup_DataAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StartupData/HeroStartup_DataAsset.h" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "Mapping-Context" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagMapping_MetaData[] = {
		{ "Category", "ActionAbilityTagMapping" },
		{ "ModuleRelativePath", "Public/StartupData/HeroStartup_DataAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputMapping_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagMapping_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TagMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroStartup_DataAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroStartup_DataAsset_Statics::NewProp_InputMapping_Inner = { "InputMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingType, METADATA_PARAMS(0, nullptr) }; // 4040490915
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroStartup_DataAsset_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroStartup_DataAsset, InputMapping), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) }; // 4040490915
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHeroStartup_DataAsset_Statics::NewProp_TagMapping_Inner = { "TagMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActionAbilityTagMapping, METADATA_PARAMS(0, nullptr) }; // 3522190281
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHeroStartup_DataAsset_Statics::NewProp_TagMapping = { "TagMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHeroStartup_DataAsset, TagMapping), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagMapping_MetaData), NewProp_TagMapping_MetaData) }; // 3522190281
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHeroStartup_DataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStartup_DataAsset_Statics::NewProp_InputMapping_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStartup_DataAsset_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStartup_DataAsset_Statics::NewProp_TagMapping_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHeroStartup_DataAsset_Statics::NewProp_TagMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStartup_DataAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHeroStartup_DataAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseStartup_DataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStartup_DataAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroStartup_DataAsset_Statics::ClassParams = {
	&UHeroStartup_DataAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHeroStartup_DataAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStartup_DataAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHeroStartup_DataAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UHeroStartup_DataAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHeroStartup_DataAsset()
{
	if (!Z_Registration_Info_UClass_UHeroStartup_DataAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroStartup_DataAsset.OuterSingleton, Z_Construct_UClass_UHeroStartup_DataAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHeroStartup_DataAsset.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UHeroStartup_DataAsset>()
{
	return UHeroStartup_DataAsset::StaticClass();
}
UHeroStartup_DataAsset::UHeroStartup_DataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroStartup_DataAsset);
UHeroStartup_DataAsset::~UHeroStartup_DataAsset() {}
// End Class UHeroStartup_DataAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIMCType_StaticEnum, TEXT("EIMCType"), &Z_Registration_Info_UEnum_EIMCType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2315656198U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputMappingType::StaticStruct, Z_Construct_UScriptStruct_FInputMappingType_Statics::NewStructOps, TEXT("InputMappingType"), &Z_Registration_Info_UScriptStruct_InputMappingType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMappingType), 4040490915U) },
		{ FActionAbilityTagMapping::StaticStruct, Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics::NewStructOps, TEXT("ActionAbilityTagMapping"), &Z_Registration_Info_UScriptStruct_ActionAbilityTagMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActionAbilityTagMapping), 3522190281U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHeroStartup_DataAsset, UHeroStartup_DataAsset::StaticClass, TEXT("UHeroStartup_DataAsset"), &Z_Registration_Info_UClass_UHeroStartup_DataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroStartup_DataAsset), 3899548258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_259745355(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
