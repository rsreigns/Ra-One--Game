// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Hero/GA_Dodge.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGAME_GA_Dodge_generated_h
#error "GA_Dodge.generated.h already included, missing '#pragma once' in GA_Dodge.h"
#endif
#define THEGAME_GA_Dodge_generated_h

#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDodgeDirectionMap_Statics; \
	THEGAME_API static class UScriptStruct* StaticStruct();


template<> THEGAME_API UScriptStruct* StaticStruct<struct FDodgeDirectionMap>();

#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_Dodge(); \
	friend struct Z_Construct_UClass_UGA_Dodge_Statics; \
public: \
	DECLARE_CLASS(UGA_Dodge, UHeroGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(UGA_Dodge)


#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_Dodge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGA_Dodge(UGA_Dodge&&); \
	UGA_Dodge(const UGA_Dodge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_Dodge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_Dodge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGA_Dodge) \
	NO_API virtual ~UGA_Dodge();


#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_30_PROLOG
#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_33_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class UGA_Dodge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Dodge_h


#define FOREACH_ENUM_EDODGEDIRECTION(op) \
	op(EDodgeDirection::Forward) \
	op(EDodgeDirection::Backward) \
	op(EDodgeDirection::Left) \
	op(EDodgeDirection::Right) 

enum class EDodgeDirection : uint8;
template<> struct TIsUEnumClass<EDodgeDirection> { enum { Value = true }; };
template<> THEGAME_API UEnum* StaticEnum<EDodgeDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
