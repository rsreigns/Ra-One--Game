// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameAbilitySystemComponent.generated.h"

/**
 * 
 */
UCLASS()
class THEGAME_API UGameAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
public:
	void ActivateGivenAbility(FGameplayTag AbilityTag);

};
