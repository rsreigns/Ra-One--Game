// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "StartupData/HeroStartup_DataAsset.h"
#include "AllGameplayTags.h"
#include "HeroInputComponent.generated.h"

class UHeroStartup_DataAsset;
class UInputAction;

UCLASS()
class THEGAME_API UHeroInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
public:
	template<class UserObject, typename CallbackFunc>
	void BindAbilityInputAction(UInputAction* ActionInput, ETriggerEvent Trigger, UserObject* ContextObject, CallbackFunc InputFunc);
};

template<class UserObject, typename CallbackFunc>
inline void UHeroInputComponent::BindAbilityInputAction(UInputAction* ActionInput, ETriggerEvent Trigger, UserObject* ContextObject, CallbackFunc InputFunc)
{
	BindAction(ActionInput, Trigger, ContextObject, InputFunc);
}
