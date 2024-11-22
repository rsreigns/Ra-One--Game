// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/BaseCharacter.h"
#include "BaseHeroCharacter.generated.h"
class UMotionWarpingComponent;
class UHeroInputComponent;
class UHeroStartup_DataAsset;
struct FInputActionValue;
class UInputMappingContext;
class UEnhancedInputLocalPlayerSubsystem;
class UBoxComponent;
/**
 * 
 */
UCLASS()
class THEGAME_API ABaseHeroCharacter : public ABaseCharacter
{
	GENERATED_BODY()
public:
	ABaseHeroCharacter();

	virtual void PossessedBy(AController* NewController) override;

#pragma region Input
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="HeroInputComponent")
	UHeroInputComponent* HeroInputComponent;

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly,Category="BoxOverlapComponent")
	UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category= "Data")
	UHeroStartup_DataAsset* HeroStartupData;

	UEnhancedInputLocalPlayerSubsystem* Subsystem;

	void AddMappingContext(UInputMappingContext* Context, int32 Priority);
	void RemoveMappingContext(UInputMappingContext* Context);

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void HandleMoveInput(const FInputActionValue& InputActionValue);
	void HandleLookInput(const FInputActionValue& InputActionValue);
	UFUNCTION()
	void CallJump(const FInputActionValue& InputActionValue);
	UFUNCTION()
	void CallStartSprint(const FInputActionValue& InputActionValue);
	UFUNCTION()
	void CallEndSprint(const FInputActionValue& InputActionValue);

	UFUNCTION()
	void CallHitLeft(const FInputActionValue& InputActionValue);
	UFUNCTION()
	void CallHitRight(const FInputActionValue& InputActionValue);

	UFUNCTION()
	void CallStartCrouch(const FInputActionValue& InputActionValue);
	UFUNCTION()
	void CallEndCrouch(const FInputActionValue& InputActionValue);

	UFUNCTION()
	void CallChangeStance(const FInputActionValue& InputActionValue);

	UFUNCTION()
	void CallStartPowerUp(const FInputActionValue& InputActionValue);
	UFUNCTION()
	void CallEndPowerUp(const FInputActionValue& InputActionValue);

	UFUNCTION()
	void CallDodge(const FInputActionValue& InputActionValue);


#pragma endregion
	
};
