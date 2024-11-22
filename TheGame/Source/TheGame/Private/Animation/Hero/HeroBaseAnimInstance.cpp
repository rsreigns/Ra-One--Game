// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/Hero/HeroBaseAnimInstance.h"
#include "Character/BaseHeroCharacter.h"


void UHeroBaseAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	OwningHeroChar = Cast<ABaseHeroCharacter>(TryGetPawnOwner());
}

void UHeroBaseAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);
}
