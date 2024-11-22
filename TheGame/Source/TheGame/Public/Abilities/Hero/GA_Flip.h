// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Hero/HeroGameplayAbility.h"
#include "GA_Flip.generated.h"
class UAnimMontage;
/**
 * 
 */
UCLASS()
class THEGAME_API UGA_Flip : public UHeroGameplayAbility
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly,Category="Default|Flip")
	UAnimMontage* FrontflipMontage;
	UPROPERTY(EditDefaultsOnly, Category = "Default|Flip")
	UAnimMontage* BackflipMontage;
	UPROPERTY(EditDefaultsOnly,Category="Default|Flip")
	float LaunchPowerX=200.f;
	UPROPERTY(EditDefaultsOnly, Category = "Default|Flip")
	float LaunchPowerZ = 200.f;

	UFUNCTION(BlueprintCallable)
	UAnimMontage* FlipCharacter();
	
};
