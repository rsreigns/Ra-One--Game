// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/GameAbilitySystemComponent.h"
#include "AllGameplayTags.h"
#include "DebugHelper.h"

void UGameAbilitySystemComponent::ActivateGivenAbility(FGameplayTag AbilityTag)
{
	if (!AbilityTag.IsValid())
	{
		return;
	}
	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{

		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(AbilityTag))
		{
			continue;
		}
		if (AbilitySpec.DynamicAbilityTags.HasTagExact(AbilityTag))
		{
			TryActivateAbility(AbilitySpec.Handle);
		}

		
	}
}

