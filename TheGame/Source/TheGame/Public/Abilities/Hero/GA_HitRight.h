// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Hero/HeroGameplayAbility.h"
#include "GA_HitRight.generated.h"

/**
 * 
 */
UCLASS()
class THEGAME_API UGA_HitRight : public UHeroGameplayAbility
{
	GENERATED_BODY()
public:
	void PlayerHitEnemy();
};
