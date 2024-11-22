// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StartupData/BaseStartup_DataAsset.h"
#include "GameplayTagContainer.h"
#include "HeroStartup_DataAsset.generated.h"

class UHeroGameplayAbility;
class UInputMappingContext;
class UInputAction;
class UGameAbilitySystemComponent;
UENUM(BlueprintType)
enum class EIMCType : uint8
{
	Default,
	Sprint,
	Crouch,
	Power
};
USTRUCT(BlueprintType)
struct  FInputMappingType
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input-Mapping_Type")
	EIMCType MappingType = EIMCType::Default;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input-Mapping_Context")
	UInputMappingContext* MappingContext;

};
USTRUCT(BlueprintType)
struct  FActionAbilityTagMapping
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="GameplayTag_Input")
	FGameplayTag InputTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputAction")
	UInputAction* InputAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "GameplayTag_Ability")
	FGameplayTag AbilityTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Ability")
	TSubclassOf<UHeroGameplayAbility> HeroAbility;
};


/**
 * 
 */


UCLASS()
class THEGAME_API UHeroStartup_DataAsset : public UBaseStartup_DataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mapping-Context")
	TArray<FInputMappingType> InputMapping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActionAbilityTagMapping")
	TArray<FActionAbilityTagMapping> TagMapping;

	UInputAction* GetInputActionFromTag(FGameplayTag TagToLook);

	TSubclassOf<UHeroGameplayAbility> GetAbilityOfTag(FGameplayTag TagToLook);

	FGameplayTag GetAbilityTagFromInputTag(FGameplayTag InInputTag);

	void GiveAbilitiesToPlayerASC(UGameAbilitySystemComponent* HeroASC, int32 ApplyLevel=1);
	UInputMappingContext* GetMappingFromType(EIMCType MappingType);
};
