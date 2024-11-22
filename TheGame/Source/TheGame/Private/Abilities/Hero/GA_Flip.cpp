// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Hero/GA_Flip.h"
#include "Character/BaseHeroCharacter.h"
#include "Camera/CameraComponent.h"
#include "DebugHelper.h"
UAnimMontage* UGA_Flip::FlipCharacter()
{
	ABaseHeroCharacter* PlayerChar = GetHeroCharacterFromAI();
	FVector CamRot (PlayerChar->GetCameraComponent()->GetForwardVector().X, 0.f,0.f);
	

	if (FVector::DotProduct(PlayerChar->GetVelocity(),CamRot) > 0)
	{
		FVector LaunchVector = PlayerChar->GetActorForwardVector() * LaunchPowerX + FVector::UpVector * LaunchPowerZ;
		PlayerChar->LaunchCharacter(LaunchVector, true, true);
		return FrontflipMontage;
	}
	else
	{
		FVector LaunchVector = PlayerChar->GetActorForwardVector() * -LaunchPowerX + FVector::UpVector * LaunchPowerZ;
		PlayerChar->LaunchCharacter(LaunchVector, true, true);
		return BackflipMontage;
	}

}
