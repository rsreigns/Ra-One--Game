// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Hero/GA_SprintStart.h"
#include "Character/BaseHeroCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"



void UGA_SprintStart::InitiateThisAbility()
{
	Super::InitiateThisAbility();
	ABaseHeroCharacter* PlayerChar = GetHeroCharacterFromAI();
	PlayerChar->GetCharacterMovement()->MaxWalkSpeed = SprintVelocity;

}
