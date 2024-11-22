// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Hero/GA_Look.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGAME_GA_Look_generated_h
#error "GA_Look.generated.h already included, missing '#pragma once' in GA_Look.h"
#endif
#define THEGAME_GA_Look_generated_h

#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Look_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGA_Look(); \
	friend struct Z_Construct_UClass_UGA_Look_Statics; \
public: \
	DECLARE_CLASS(UGA_Look, UHeroGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(UGA_Look)


#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Look_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGA_Look(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGA_Look(UGA_Look&&); \
	UGA_Look(const UGA_Look&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGA_Look); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGA_Look); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGA_Look) \
	NO_API virtual ~UGA_Look();


#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Look_h_12_PROLOG
#define FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Look_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Look_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Look_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class UGA_Look>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_TheGame_Source_TheGame_Public_Abilities_Hero_GA_Look_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
