// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_HitLeft.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_HitLeft() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UGA_HitLeft();
THEGAME_API UClass* Z_Construct_UClass_UGA_HitLeft_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
THEGAME_API UEnum* Z_Construct_UEnum_TheGame_EMontageType();
THEGAME_API UScriptStruct* Z_Construct_UScriptStruct_FMontageTypeMap();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Enum EMontageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMontageType;
static UEnum* EMontageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMontageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMontageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TheGame_EMontageType, (UObject*)Z_Construct_UPackage__Script_TheGame(), TEXT("EMontageType"));
	}
	return Z_Registration_Info_UEnum_EMontageType.OuterSingleton;
}
template<> THEGAME_API UEnum* StaticEnum<EMontageType>()
{
	return EMontageType_StaticEnum();
}
struct Z_Construct_UEnum_TheGame_EMontageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouching.Name", "EMontageType::Crouching" },
		{ "Default.Name", "EMontageType::Default" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_HitLeft.h" },
		{ "PowerUp.Name", "EMontageType::PowerUp" },
		{ "Sprinting.Name", "EMontageType::Sprinting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMontageType::Default", (int64)EMontageType::Default },
		{ "EMontageType::Sprinting", (int64)EMontageType::Sprinting },
		{ "EMontageType::Crouching", (int64)EMontageType::Crouching },
		{ "EMontageType::PowerUp", (int64)EMontageType::PowerUp },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TheGame_EMontageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TheGame,
	nullptr,
	"EMontageType",
	"EMontageType",
	Z_Construct_UEnum_TheGame_EMontageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TheGame_EMontageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TheGame_EMontageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TheGame_EMontageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TheGame_EMontageType()
{
	if (!Z_Registration_Info_UEnum_EMontageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMontageType.InnerSingleton, Z_Construct_UEnum_TheGame_EMontageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMontageType.InnerSingleton;
}
// End Enum EMontageType

// Begin ScriptStruct FMontageTypeMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MontageTypeMap;
class UScriptStruct* FMontageTypeMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MontageTypeMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MontageTypeMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMontageTypeMap, (UObject*)Z_Construct_UPackage__Script_TheGame(), TEXT("MontageTypeMap"));
	}
	return Z_Registration_Info_UScriptStruct_MontageTypeMap.OuterSingleton;
}
template<> THEGAME_API UScriptStruct* StaticStruct<FMontageTypeMap>()
{
	return FMontageTypeMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMontageTypeMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_HitLeft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageType_MetaData[] = {
		{ "Category", "Default|Hit" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_HitLeft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PunchMontages_MetaData[] = {
		{ "Category", "Default|Hit" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_HitLeft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KickMontages_MetaData[] = {
		{ "Category", "Default|Hit" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_HitLeft.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MontageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MontageType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PunchMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PunchMontages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KickMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KickMontages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMontageTypeMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_MontageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_MontageType = { "MontageType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMontageTypeMap, MontageType), Z_Construct_UEnum_TheGame_EMontageType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageType_MetaData), NewProp_MontageType_MetaData) }; // 2108440288
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_PunchMontages_Inner = { "PunchMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_PunchMontages = { "PunchMontages", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMontageTypeMap, PunchMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PunchMontages_MetaData), NewProp_PunchMontages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_KickMontages_Inner = { "KickMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_KickMontages = { "KickMontages", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMontageTypeMap, KickMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KickMontages_MetaData), NewProp_KickMontages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMontageTypeMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_MontageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_MontageType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_PunchMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_PunchMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_KickMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewProp_KickMontages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageTypeMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMontageTypeMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
	nullptr,
	&NewStructOps,
	"MontageTypeMap",
	Z_Construct_UScriptStruct_FMontageTypeMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageTypeMap_Statics::PropPointers),
	sizeof(FMontageTypeMap),
	alignof(FMontageTypeMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageTypeMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMontageTypeMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMontageTypeMap()
{
	if (!Z_Registration_Info_UScriptStruct_MontageTypeMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MontageTypeMap.InnerSingleton, Z_Construct_UScriptStruct_FMontageTypeMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MontageTypeMap.InnerSingleton;
}
// End ScriptStruct FMontageTypeMap

// Begin Class UGA_HitLeft
void UGA_HitLeft::StaticRegisterNativesUGA_HitLeft()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_HitLeft);
UClass* Z_Construct_UClass_UGA_HitLeft_NoRegister()
{
	return UGA_HitLeft::StaticClass();
}
struct Z_Construct_UClass_UGA_HitLeft_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Hero/GA_HitLeft.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_HitLeft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageMap_MetaData[] = {
		{ "Category", "Default|Hit" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_HitLeft.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontagesToPlay_MetaData[] = {
		{ "Category", "GA_HitLeft" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_HitLeft.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MontageMap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MontageMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontagesToPlay_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MontagesToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_HitLeft>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGA_HitLeft_Statics::NewProp_MontageMap_Inner = { "MontageMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMontageTypeMap, METADATA_PARAMS(0, nullptr) }; // 1890537187
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGA_HitLeft_Statics::NewProp_MontageMap = { "MontageMap", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_HitLeft, MontageMap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageMap_MetaData), NewProp_MontageMap_MetaData) }; // 1890537187
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_HitLeft_Statics::NewProp_MontagesToPlay_Inner = { "MontagesToPlay", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGA_HitLeft_Statics::NewProp_MontagesToPlay = { "MontagesToPlay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_HitLeft, MontagesToPlay), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontagesToPlay_MetaData), NewProp_MontagesToPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_HitLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_HitLeft_Statics::NewProp_MontageMap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_HitLeft_Statics::NewProp_MontageMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_HitLeft_Statics::NewProp_MontagesToPlay_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_HitLeft_Statics::NewProp_MontagesToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_HitLeft_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_HitLeft_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_HitLeft_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_HitLeft_Statics::ClassParams = {
	&UGA_HitLeft::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGA_HitLeft_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_HitLeft_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_HitLeft_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_HitLeft_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_HitLeft()
{
	if (!Z_Registration_Info_UClass_UGA_HitLeft.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_HitLeft.OuterSingleton, Z_Construct_UClass_UGA_HitLeft_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_HitLeft.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_HitLeft>()
{
	return UGA_HitLeft::StaticClass();
}
UGA_HitLeft::UGA_HitLeft(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_HitLeft);
UGA_HitLeft::~UGA_HitLeft() {}
// End Class UGA_HitLeft

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMontageType_StaticEnum, TEXT("EMontageType"), &Z_Registration_Info_UEnum_EMontageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2108440288U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMontageTypeMap::StaticStruct, Z_Construct_UScriptStruct_FMontageTypeMap_Statics::NewStructOps, TEXT("MontageTypeMap"), &Z_Registration_Info_UScriptStruct_MontageTypeMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMontageTypeMap), 1890537187U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_HitLeft, UGA_HitLeft::StaticClass, TEXT("UGA_HitLeft"), &Z_Registration_Info_UClass_UGA_HitLeft, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_HitLeft), 4180211619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_514198055(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
