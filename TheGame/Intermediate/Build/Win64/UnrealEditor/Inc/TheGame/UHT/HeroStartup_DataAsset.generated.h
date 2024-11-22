// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StartupData/HeroStartup_DataAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGAME_HeroStartup_DataAsset_generated_h
#error "HeroStartup_DataAsset.generated.h already included, missing '#pragma once' in HeroStartup_DataAsset.h"
#endif
#define THEGAME_HeroStartup_DataAsset_generated_h

#define FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputMappingType_Statics; \
	THEGAME_API static class UScriptStruct* StaticStruct();


template<> THEGAME_API UScriptStruct* StaticStruct<struct FInputMappingType>();

#define FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionAbilityTagMapping_Statics; \
	THEGAME_API static class UScriptStruct* StaticStruct();


template<> THEGAME_API UScriptStruct* StaticStruct<struct FActionAbilityTagMapping>();

#define FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroStartup_DataAsset(); \
	friend struct Z_Construct_UClass_UHeroStartup_DataAsset_Statics; \
public: \
	DECLARE_CLASS(UHeroStartup_DataAsset, UBaseStartup_DataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(UHeroStartup_DataAsset)


#define FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroStartup_DataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroStartup_DataAsset(UHeroStartup_DataAsset&&); \
	UHeroStartup_DataAsset(const UHeroStartup_DataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroStartup_DataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroStartup_DataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroStartup_DataAsset) \
	NO_API virtual ~UHeroStartup_DataAsset();


#define FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_57_PROLOG
#define FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_60_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class UHeroStartup_DataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_TheGame_Source_TheGame_Public_StartupData_HeroStartup_DataAsset_h


#define FOREACH_ENUM_EIMCTYPE(op) \
	op(EIMCType::Default) \
	op(EIMCType::Sprint) \
	op(EIMCType::Crouch) \
	op(EIMCType::Power) 

enum class EIMCType : uint8;
template<> struct TIsUEnumClass<EIMCType> { enum { Value = true }; };
template<> THEGAME_API UEnum* StaticEnum<EIMCType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
