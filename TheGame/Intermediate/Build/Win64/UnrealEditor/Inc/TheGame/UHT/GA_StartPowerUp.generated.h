// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Hero/GA_StartPowerUp.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGAME_GA_StartPowerUp_generated_h
#error "GA_StartPowerUp.generated.h already included, missing '#pragma once' in GA_StartPowerUp.h"
#endif
#define THEGAME_GA_StartPowerUp_generated_h

#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_StartPowerUp(); \
	friend struct Z_Construct_UClass_UGA_StartPowerUp_Statics; \
public: \
	DECLARE_CLASS(UGA_StartPowerUp, UHeroGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(UGA_StartPowerUp)


#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_StartPowerUp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGA_StartPowerUp(UGA_StartPowerUp&&); \
	UGA_StartPowerUp(const UGA_StartPowerUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_StartPowerUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_StartPowerUp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGA_StartPowerUp) \
	NO_API virtual ~UGA_StartPowerUp();


#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h_12_PROLOG
#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class UGA_StartPowerUp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_StartPowerUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
