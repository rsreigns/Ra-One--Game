// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Hero/GA_HitLeft.h"
#include "Character/BaseHeroCharacter.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"
#include "AllGameplayTags.h"

void UGA_HitLeft::InitiateThisAbility()
{
	Super::InitiateThisAbility();
	ABaseHeroCharacter* HeroChar = GetHeroCharacterFromAI();
	EMontageType MontageType = EMontageType::Default;

	if (HeroChar->GetAbilitySystemComponent()->HasMatchingGameplayTag
	(OurGameplayTags::Player_Status_Sprinting))
	{
		MontageType = EMontageType::Sprinting;
	}
	else if (HeroChar->GetAbilitySystemComponent()->HasMatchingGameplayTag
	(OurGameplayTags::Player_Status_Crouching))
	{
		MontageType = EMontageType::Crouching;
	}
	else if (HeroChar->GetAbilitySystemComponent()->HasMatchingGameplayTag
	(OurGameplayTags::Player_Status_PowerUp))
	{
		MontageType = EMontageType::PowerUp;
	}

	FindHitMontages(MontageType);


}

void UGA_HitLeft::FindHitMontages(EMontageType MType)
{
	for (const FMontageTypeMap& Map : MontageMap)
	{
		if (Map.MontageType != MType) continue;
		if (GetHeroCharacterFromAI()->GetAbilitySystemComponent()->HasMatchingGameplayTag
		(OurGameplayTags::Player_Status_KickStance))
		{
			MontagesToPlay = Map.KickMontages;
		}
		else  MontagesToPlay = Map.PunchMontages;
	}
}


