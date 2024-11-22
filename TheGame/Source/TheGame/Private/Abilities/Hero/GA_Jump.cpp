// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Hero/GA_Jump.h"
#include "Character/BaseHeroCharacter.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"
#include "AllGameplayTags.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "DebugHelper.h"



void UGA_Jump::InitiateThisAbility()
{
	Super::InitiateThisAbility();
	ABaseHeroCharacter* PlayerChar = GetHeroCharacterFromAI();
	if (PlayerChar->GetCharacterMovement()->IsFalling())
	{
		return;
	}
	if (PlayerChar->GetAbilitySystemComponent()->HasMatchingGameplayTag
	(OurGameplayTags::Player_Status_Sprinting))
	{
		bShouldFlip = true;
		FVector CamRot(PlayerChar->GetCameraComponent()->GetForwardVector().X, 0.f, 0.f);
		if (FVector::DotProduct(PlayerChar->GetCharacterMovement()->GetLastInputVector(), CamRot) > 0)
		{
			Temp = LaunchPowerX;
			MontageToPlay = FrontflipMontage;
		}
		else
		{
			Temp = -LaunchPowerX;
			MontageToPlay = BackflipMontage;
		}
	}
	else
	{
		bShouldFlip = false;
		PlayerChar->Jump();
	}

	return;
}

void UGA_Jump::LaunchPlayer()
{
	ABaseHeroCharacter* PlayerChar = GetHeroCharacterFromAI();

	FVector LaunchVector = PlayerChar->GetActorForwardVector() * Temp + FVector::UpVector * LaunchPowerZ;
	PlayerChar->LaunchCharacter(LaunchVector, true, true);
}


void UGA_Jump::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	MontageToPlay = nullptr;
	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

