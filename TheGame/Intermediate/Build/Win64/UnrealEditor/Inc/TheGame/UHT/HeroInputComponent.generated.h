// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/HeroInputComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef THEGAME_HeroInputComponent_generated_h
#error "HeroInputComponent.generated.h already included, missing '#pragma once' in HeroInputComponent.h"
#endif
#define THEGAME_HeroInputComponent_generated_h

#define FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHeroInputComponent(); \
	friend struct Z_Construct_UClass_UHeroInputComponent_Statics; \
public: \
	DECLARE_CLASS(UHeroInputComponent, UEnhancedInputComponent, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheGame"), NO_API) \
	DECLARE_SERIALIZER(UHeroInputComponent)


#define FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHeroInputComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHeroInputComponent(UHeroInputComponent&&); \
	UHeroInputComponent(const UHeroInputComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHeroInputComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroInputComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroInputComponent) \
	NO_API virtual ~UHeroInputComponent();


#define FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h_14_PROLOG
#define FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEGAME_API UClass* StaticClass<class UHeroInputComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_project_TheGame_Source_TheGame_Public_Input_HeroInputComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
