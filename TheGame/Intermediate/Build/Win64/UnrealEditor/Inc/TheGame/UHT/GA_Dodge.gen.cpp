// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheGame/Public/Abilities/Hero/GA_Dodge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGA_Dodge() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UGA_Dodge();
THEGAME_API UClass* Z_Construct_UClass_UGA_Dodge_NoRegister();
THEGAME_API UClass* Z_Construct_UClass_UHeroGameplayAbility();
THEGAME_API UEnum* Z_Construct_UEnum_TheGame_EDodgeDirection();
THEGAME_API UScriptStruct* Z_Construct_UScriptStruct_FDodgeDirectionMap();
UPackage* Z_Construct_UPackage__Script_TheGame();
// End Cross Module References

// Begin Enum EDodgeDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDodgeDirection;
static UEnum* EDodgeDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDodgeDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDodgeDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TheGame_EDodgeDirection, (UObject*)Z_Construct_UPackage__Script_TheGame(), TEXT("EDodgeDirection"));
	}
	return Z_Registration_Info_UEnum_EDodgeDirection.OuterSingleton;
}
template<> THEGAME_API UEnum* StaticEnum<EDodgeDirection>()
{
	return EDodgeDirection_StaticEnum();
}
struct Z_Construct_UEnum_TheGame_EDodgeDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.Name", "EDodgeDirection::Backward" },
		{ "BlueprintType", "true" },
		{ "Forward.Name", "EDodgeDirection::Forward" },
		{ "Left.Name", "EDodgeDirection::Left" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Dodge.h" },
		{ "Right.Name", "EDodgeDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDodgeDirection::Forward", (int64)EDodgeDirection::Forward },
		{ "EDodgeDirection::Backward", (int64)EDodgeDirection::Backward },
		{ "EDodgeDirection::Left", (int64)EDodgeDirection::Left },
		{ "EDodgeDirection::Right", (int64)EDodgeDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TheGame_EDodgeDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TheGame,
	nullptr,
	"EDodgeDirection",
	"EDodgeDirection",
	Z_Construct_UEnum_TheGame_EDodgeDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TheGame_EDodgeDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TheGame_EDodgeDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TheGame_EDodgeDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TheGame_EDodgeDirection()
{
	if (!Z_Registration_Info_UEnum_EDodgeDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDodgeDirection.InnerSingleton, Z_Construct_UEnum_TheGame_EDodgeDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDodgeDirection.InnerSingleton;
}
// End Enum EDodgeDirection

// Begin ScriptStruct FDodgeDirectionMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DodgeDirectionMap;
class UScriptStruct* FDodgeDirectionMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DodgeDirectionMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DodgeDirectionMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDodgeDirectionMap, (UObject*)Z_Construct_UPackage__Script_TheGame(), TEXT("DodgeDirectionMap"));
	}
	return Z_Registration_Info_UScriptStruct_DodgeDirectionMap.OuterSingleton;
}
template<> THEGAME_API UScriptStruct* StaticStruct<FDodgeDirectionMap>()
{
	return FDodgeDirectionMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Dodge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeDirection_MetaData[] = {
		{ "Category", "Default|Dodge" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Dodge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DodgeMontage_MetaData[] = {
		{ "Category", "Default|Dodge" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Dodge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DodgeDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DodgeDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DodgeMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDodgeDirectionMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::NewProp_DodgeDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::NewProp_DodgeDirection = { "DodgeDirection", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDodgeDirectionMap, DodgeDirection), Z_Construct_UEnum_TheGame_EDodgeDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeDirection_MetaData), NewProp_DodgeDirection_MetaData) }; // 2720612110
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::NewProp_DodgeMontage = { "DodgeMontage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDodgeDirectionMap, DodgeMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DodgeMontage_MetaData), NewProp_DodgeMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::NewProp_DodgeDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::NewProp_DodgeDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::NewProp_DodgeMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
	nullptr,
	&NewStructOps,
	"DodgeDirectionMap",
	Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::PropPointers),
	sizeof(FDodgeDirectionMap),
	alignof(FDodgeDirectionMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDodgeDirectionMap()
{
	if (!Z_Registration_Info_UScriptStruct_DodgeDirectionMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DodgeDirectionMap.InnerSingleton, Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DodgeDirectionMap.InnerSingleton;
}
// End ScriptStruct FDodgeDirectionMap

// Begin Class UGA_Dodge
void UGA_Dodge::StaticRegisterNativesUGA_Dodge()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGA_Dodge);
UClass* Z_Construct_UClass_UGA_Dodge_NoRegister()
{
	return UGA_Dodge::StaticClass();
}
struct Z_Construct_UClass_UGA_Dodge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/Hero/GA_Dodge.h" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Dodge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalMontages_MetaData[] = {
		{ "Category", "Default|Dodge" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Dodge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageToPlay_MetaData[] = {
		{ "Category", "GA_Dodge" },
		{ "ModuleRelativePath", "Public/Abilities/Hero/GA_Dodge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionalMontages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectionalMontages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGA_Dodge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGA_Dodge_Statics::NewProp_DirectionalMontages_Inner = { "DirectionalMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDodgeDirectionMap, METADATA_PARAMS(0, nullptr) }; // 2756312429
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGA_Dodge_Statics::NewProp_DirectionalMontages = { "DirectionalMontages", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Dodge, DirectionalMontages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionalMontages_MetaData), NewProp_DirectionalMontages_MetaData) }; // 2756312429
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGA_Dodge_Statics::NewProp_MontageToPlay = { "MontageToPlay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGA_Dodge, MontageToPlay), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageToPlay_MetaData), NewProp_MontageToPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGA_Dodge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Dodge_Statics::NewProp_DirectionalMontages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Dodge_Statics::NewProp_DirectionalMontages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGA_Dodge_Statics::NewProp_MontageToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Dodge_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGA_Dodge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UHeroGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_TheGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Dodge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGA_Dodge_Statics::ClassParams = {
	&UGA_Dodge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGA_Dodge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Dodge_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGA_Dodge_Statics::Class_MetaDataParams), Z_Construct_UClass_UGA_Dodge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGA_Dodge()
{
	if (!Z_Registration_Info_UClass_UGA_Dodge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGA_Dodge.OuterSingleton, Z_Construct_UClass_UGA_Dodge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGA_Dodge.OuterSingleton;
}
template<> THEGAME_API UClass* StaticClass<UGA_Dodge>()
{
	return UGA_Dodge::StaticClass();
}
UGA_Dodge::UGA_Dodge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGA_Dodge);
UGA_Dodge::~UGA_Dodge() {}
// End Class UGA_Dodge

// Begin Registration
struct Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDodgeDirection_StaticEnum, TEXT("EDodgeDirection"), &Z_Registration_Info_UEnum_EDodgeDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2720612110U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDodgeDirectionMap::StaticStruct, Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics::NewStructOps, TEXT("DodgeDirectionMap"), &Z_Registration_Info_UScriptStruct_DodgeDirectionMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDodgeDirectionMap), 2756312429U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGA_Dodge, UGA_Dodge::StaticClass, TEXT("UGA_Dodge"), &Z_Registration_Info_UClass_UGA_Dodge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGA_Dodge), 92039874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_874587509(TEXT("/Script/TheGame"),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
