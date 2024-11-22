// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Hero/HeroGameplayAbility.h"
#include "GA_SprintStart.generated.h"
/**
 * 
 */
UCLASS()
class THEGAME_API UGA_SprintStart : public UHeroGameplayAbility
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="Default|Sprint")
	float SprintVelocity= 500.f;


	virtual void InitiateThisAbility() override;
};
