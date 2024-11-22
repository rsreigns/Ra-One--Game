// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Hero/HeroGameplayAbility.h"
#include "GA_Dodge.generated.h"

UENUM(BlueprintType)
enum class EDodgeDirection : uint8
{
	Forward,
	Backward,
	Left,
	Right
};

USTRUCT(BlueprintType)
struct FDodgeDirectionMap
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category = "Default|Dodge")
	EDodgeDirection DodgeDirection;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default|Dodge")
	UAnimMontage* DodgeMontage;

};

UCLASS()
class THEGAME_API UGA_Dodge : public UHeroGameplayAbility
{
	GENERATED_BODY()
protected:
	virtual void InitiateThisAbility() override;
	EDodgeDirection FindMontageToPlay();

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Default|Dodge")
	TArray<FDodgeDirectionMap> DirectionalMontages;

	UPROPERTY(BlueprintReadOnly)
	UAnimMontage* MontageToPlay;
};
