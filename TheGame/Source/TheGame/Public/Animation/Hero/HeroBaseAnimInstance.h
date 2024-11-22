// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/BaseAnimInstance.h"
#include "HeroBaseAnimInstance.generated.h"
class ABaseHeroCharacter;
class UCharacterMovementComponent;
/**
 * 
 */
UCLASS()
class THEGAME_API UHeroBaseAnimInstance : public UBaseAnimInstance
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadOnly,VisibleAnywhere,Category="Player")
	ABaseHeroCharacter* OwningHeroChar;


public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;
	
};
