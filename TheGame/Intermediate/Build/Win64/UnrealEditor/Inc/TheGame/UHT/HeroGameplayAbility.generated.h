// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Abilities/Hero/HeroGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseHeroCharacter;
class UGameAbilitySystemComponent;
#ifdef THEGAME_HeroGameplayAbility_generated_h
#error "HeroGameplayAbility.generated.h already included, missing '#pragma once' in HeroGameplayAbility.h"
#endif
#define THEGAME_HeroGameplayAbility_generated_h

#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerASCFromAI); \
	DECLARE_FUNCTION(execGetHeroCharacterFromAI); \
	DECLARE_FUNCTION(execInitiateThisAbility);


#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroGameplayAbility(); \
	friend struct Z_Construct_UClass_UHeroGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UHeroGameplayAbility, UBaseGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(UHeroGameplayAbility)


#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroGameplayAbility(UHeroGameplayAbility&&); \
	UHeroGameplayAbility(const UHeroGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroGameplayAbility) \
	NO_API virtual ~UHeroGameplayAbility();


#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_13_PROLOG
#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_16_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class UHeroGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Abilities_Hero_HeroGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
