// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Hero/GA_Dodge.h"
#include "Character/BaseHeroCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "DebugHelper.h"

void UGA_Dodge::InitiateThisAbility()
{
	Super::InitiateThisAbility();

	EDodgeDirection FoundDirection = FindMontageToPlay();
	Debug::PrintString(UEnum::GetValueAsString(FoundDirection));
	for (const FDodgeDirectionMap& Map : DirectionalMontages)
	{
		if (DirectionalMontages.IsEmpty()) return;
		if (Map.DodgeDirection == FoundDirection)
		{
			MontageToPlay = Map.DodgeMontage;
		}
	}
}

EDodgeDirection UGA_Dodge::FindMontageToPlay()
{
	ABaseHeroCharacter* PlayerChar = GetHeroCharacterFromAI();
	float ForwardDot = FVector::DotProduct
	(PlayerChar->GetCharacterMovement()->GetLastInputVector(), PlayerChar->GetActorForwardVector());

	if (ForwardDot == 1) return EDodgeDirection::Forward;
	else if (ForwardDot == -1) return EDodgeDirection::Backward;

	float RightDot = FVector::DotProduct
	(PlayerChar->GetCharacterMovement()->GetLastInputVector(), PlayerChar->GetActorRightVector());

	if (RightDot == 1) return EDodgeDirection::Right;
	else if (RightDot == -1) return EDodgeDirection::Left;

	if (ForwardDot < 0) return EDodgeDirection::Backward;

	else return EDodgeDirection::Forward;
}
