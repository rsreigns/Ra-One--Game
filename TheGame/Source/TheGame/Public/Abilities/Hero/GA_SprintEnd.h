// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Hero/HeroGameplayAbility.h"
#include "GA_SprintEnd.generated.h"

/**
 * 
 */
UCLASS()
class THEGAME_API UGA_SprintEnd : public UHeroGameplayAbility
{
	GENERATED_BODY()
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default|Sprint")
	float WalkSpeed = 250.f;


	virtual void InitiateThisAbility() override;
};
