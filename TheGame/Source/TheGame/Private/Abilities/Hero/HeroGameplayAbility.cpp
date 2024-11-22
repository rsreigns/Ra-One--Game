// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities/Hero/HeroGameplayAbility.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"
#include "Character/BaseHeroCharacter.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"

#include "DebugHelper.h"

void UHeroGameplayAbility::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec)
{
    HeroCharacter = Cast<ABaseHeroCharacter>(GetAvatarActorFromActorInfo());
}

void UHeroGameplayAbility::InitiateThisAbility()
{
    ABaseHeroCharacter* HeroChar = GetHeroCharacterFromAI();
    if (bHasAbilityStatus)
    {
        AddAbilityStatus();
    }
}

void UHeroGameplayAbility::AddAbilityStatus()
{
    if (bAddStatus)
    {
        GetPlayerASCFromAI()->AddLooseGameplayTag(AbilityStatus);
    }
    else GetPlayerASCFromAI()->RemoveLooseGameplayTag(AbilityStatus);

}

ABaseHeroCharacter* UHeroGameplayAbility::GetHeroCharacterFromAI()
{
    if (!HeroCharacter) HeroCharacter = Cast<ABaseHeroCharacter>(GetAvatarActorFromActorInfo());
    return HeroCharacter;
}

UGameAbilitySystemComponent* UHeroGameplayAbility::GetPlayerASCFromAI()
{
    if (!PlayerASC) PlayerASC = Cast<UGameAbilitySystemComponent>(GetHeroCharacterFromAI()->GetAbilitySystemComponent());
    return PlayerASC;
}
