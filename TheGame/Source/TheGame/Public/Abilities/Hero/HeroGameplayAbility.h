// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameplayAbility.h"
#include "HeroGameplayAbility.generated.h"
class ABaseHeroCharacter;
class UGameAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class THEGAME_API UHeroGameplayAbility : public UBaseGameplayAbility
{
	GENERATED_BODY()
private:
	ABaseHeroCharacter* HeroCharacter;

protected:
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	UFUNCTION(BlueprintCallable)
	virtual void InitiateThisAbility();
	void AddAbilityStatus();

	UGameAbilitySystemComponent* PlayerASC;
public:
	
	UFUNCTION(BlueprintPure,BlueprintCallable)
	ABaseHeroCharacter* GetHeroCharacterFromAI();

	UFUNCTION(BlueprintPure, BlueprintCallable)
	UGameAbilitySystemComponent* GetPlayerASCFromAI();

	UPROPERTY(EditDefaultsOnly,Category="Default|Ability")
	bool bHasAbilityStatus=false;
	UPROPERTY(EditDefaultsOnly, Category = "Default|Ability", meta = (EditCondition = "bHasAbilityStatus"))
	bool bAddStatus;
	UPROPERTY(EditDefaultsOnly, Category = "Default|Ability", meta = (EditCondition = "bHasAbilityStatus"))
	FGameplayTag AbilityStatus;



};
