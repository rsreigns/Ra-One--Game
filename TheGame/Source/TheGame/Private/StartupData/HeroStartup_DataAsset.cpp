#include "StartupData/HeroStartup_DataAsset.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"
#include "Abilities/Hero/HeroGameplayAbility.h"
#include "InputMappingContext.h"

UInputAction* UHeroStartup_DataAsset::GetInputActionFromTag(FGameplayTag TagToLook)
{
    if (TagMapping.IsEmpty() || !TagToLook.IsValid()) return nullptr;

    for (FActionAbilityTagMapping& Map : TagMapping)
    {
        if (Map.InputTag == TagToLook)
        {
            return Map.InputAction;
        }
    }

    return nullptr;
}


FGameplayTag UHeroStartup_DataAsset::GetAbilityTagFromInputTag(FGameplayTag InInputTag)
{
    for (FActionAbilityTagMapping& Map : TagMapping)
    {
        if (Map.InputTag == InInputTag)
        {
            return  Map.AbilityTag;
        }
    }
    return FGameplayTag();
}

void UHeroStartup_DataAsset::GiveAbilitiesToPlayerASC(UGameAbilitySystemComponent* HeroASC, int32 ApplyLevel)
{
    for (FActionAbilityTagMapping& Map : TagMapping)
    {
        if (!Map.AbilityTag.IsValid()) continue;

        FGameplayAbilitySpec AbilitySpec(Map.HeroAbility);

        AbilitySpec.SourceObject = HeroASC->GetAvatarActor();
        AbilitySpec.Level = ApplyLevel;
        AbilitySpec.DynamicAbilityTags.AddTag(Map.AbilityTag);
        HeroASC->GiveAbility(AbilitySpec);
    }
}

UInputMappingContext* UHeroStartup_DataAsset::GetMappingFromType(EIMCType MappingType)
{
    for (FInputMappingType& Map : InputMapping)
    {
        if (Map.MappingType == MappingType)
        {
            return Map.MappingContext;
        }
    }
    return nullptr;
}
