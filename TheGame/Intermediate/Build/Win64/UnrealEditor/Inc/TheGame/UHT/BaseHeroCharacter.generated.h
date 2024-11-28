// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/BaseHeroCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef THEGAME_BaseHeroCharacter_generated_h
#error "BaseHeroCharacter.generated.h already included, missing '#pragma once' in BaseHeroCharacter.h"
#endif
#define THEGAME_BaseHeroCharacter_generated_h

#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCallDodge); \
	DECLARE_FUNCTION(execCallEndPowerUp); \
	DECLARE_FUNCTION(execCallStartPowerUp); \
	DECLARE_FUNCTION(execCallChangeStance); \
	DECLARE_FUNCTION(execCallEndCrouch); \
	DECLARE_FUNCTION(execCallStartCrouch); \
	DECLARE_FUNCTION(execCallHitRight); \
	DECLARE_FUNCTION(execCallHitLeft); \
	DECLARE_FUNCTION(execCallEndSprint); \
	DECLARE_FUNCTION(execCallStartSprint); \
	DECLARE_FUNCTION(execCallJump);


#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseHeroCharacter(); \
	friend struct Z_Construct_UClass_ABaseHeroCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseHeroCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseHeroCharacter)


#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseHeroCharacter(ABaseHeroCharacter&&); \
	ABaseHeroCharacter(const ABaseHeroCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseHeroCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseHeroCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseHeroCharacter) \
	NO_API virtual ~ABaseHeroCharacter();


#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_18_PROLOG
#define FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_21_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class ABaseHeroCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_Ra_One__Game_TheGame_Source_TheGame_Public_Character_BaseHeroCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
