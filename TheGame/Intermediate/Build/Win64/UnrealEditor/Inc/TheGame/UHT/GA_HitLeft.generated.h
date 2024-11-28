// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Hero/GA_HitLeft.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGAME_GA_HitLeft_generated_h
#error "GA_HitLeft.generated.h already included, missing '#pragma once' in GA_HitLeft.h"
#endif
#define THEGAME_GA_HitLeft_generated_h

#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMontageTypeMap_Statics; \
	THEGAME_API static class UScriptStruct* StaticStruct();


template<> THEGAME_API UScriptStruct* StaticStruct<struct FMontageTypeMap>();

#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_HitLeft(); \
	friend struct Z_Construct_UClass_UGA_HitLeft_Statics; \
public: \
	DECLARE_CLASS(UGA_HitLeft, UHeroGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(UGA_HitLeft)


#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_HitLeft(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGA_HitLeft(UGA_HitLeft&&); \
	UGA_HitLeft(const UGA_HitLeft&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_HitLeft); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_HitLeft); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGA_HitLeft) \
	NO_API virtual ~UGA_HitLeft();


#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_31_PROLOG
#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_34_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class UGA_HitLeft>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_GA_HitLeft_h


#define FOREACH_ENUM_EMONTAGETYPE(op) \
	op(EMontageType::Default) \
	op(EMontageType::Sprinting) \
	op(EMontageType::Crouching) \
	op(EMontageType::PowerUp) 

enum class EMontageType : uint8;
template<> struct TIsUEnumClass<EMontageType> { enum { Value = true }; };
template<> THEGAME_API UEnum* StaticEnum<EMontageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
