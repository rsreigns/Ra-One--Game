// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Hero/HeroGameplayAbility.h"
#include "GA_Jump.generated.h"

/**
 * 
 */
UCLASS()
class THEGAME_API UGA_Jump : public UHeroGameplayAbility
{
	GENERATED_BODY()
protected:
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		bool bReplicateEndAbility,
		bool bWasCancelled) override;

	virtual void InitiateThisAbility() override;
	

public:
	UFUNCTION(BlueprintCallable)
	void LaunchPlayer();
	UPROPERTY(EditDefaultsOnly, Category = "Default|Flip")
	UAnimMontage* FrontflipMontage;
	UPROPERTY(EditDefaultsOnly, Category = "Default|Flip")
	UAnimMontage* BackflipMontage;
	UPROPERTY(EditDefaultsOnly, Category = "Default|Flip")
	float LaunchPowerX = 200.f;
	float Temp = LaunchPowerX;
	UPROPERTY(EditDefaultsOnly, Category = "Default|Flip")
	float LaunchPowerZ = 200.f;

	UPROPERTY(BlueprintReadOnly)
	UAnimMontage* MontageToPlay;
	UPROPERTY(BlueprintReadOnly)
	bool bShouldFlip = true;


};
