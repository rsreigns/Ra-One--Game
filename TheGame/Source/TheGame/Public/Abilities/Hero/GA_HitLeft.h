// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Hero/HeroGameplayAbility.h"
#include "GA_HitLeft.generated.h"
class UAnimMontage;

UENUM(BlueprintType)
enum class EMontageType : uint8
{
	Default,
	Sprinting,
	Crouching,
	PowerUp
};
USTRUCT(BlueprintType)
struct FMontageTypeMap
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, Category = "Default|Hit")
	EMontageType MontageType;
	UPROPERTY(EditDefaultsOnly, Category = "Default|Hit")
	TArray<UAnimMontage*> PunchMontages;
	UPROPERTY(EditDefaultsOnly, Category = "Default|Hit")
	TArray<UAnimMontage*> KickMontages;

};
UCLASS()
class THEGAME_API UGA_HitLeft : public UHeroGameplayAbility
{
	GENERATED_BODY()
protected:
	virtual void InitiateThisAbility() override;
	void FindHitMontages(EMontageType MType);

public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Default|Hit")
	TArray<FMontageTypeMap> MontageMap;

	UPROPERTY(BlueprintReadOnly)
	TArray<UAnimMontage*> MontagesToPlay;


};
