// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGAME_BaseGameplayAbility_generated_h
#error "BaseGameplayAbility.generated.h already included, missing '#pragma once' in BaseGameplayAbility.h"
#endif
#define THEGAME_BaseGameplayAbility_generated_h

#define FID_unreal_project_TheGame_Source_TheGame_Public_BaseGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGameplayAbility(); \
	friend struct Z_Construct_UClass_UBaseGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UBaseGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(UBaseGameplayAbility)


#define FID_unreal_project_TheGame_Source_TheGame_Public_BaseGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGameplayAbility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseGameplayAbility(UBaseGameplayAbility&&); \
	UBaseGameplayAbility(const UBaseGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGameplayAbility) \
	NO_API virtual ~UBaseGameplayAbility();


#define FID_unreal_project_TheGame_Source_TheGame_Public_BaseGameplayAbility_h_12_PROLOG
#define FID_unreal_project_TheGame_Source_TheGame_Public_BaseGameplayAbility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_TheGame_Source_TheGame_Public_BaseGameplayAbility_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_TheGame_Source_TheGame_Public_BaseGameplayAbility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class UBaseGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_TheGame_Source_TheGame_Public_BaseGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
