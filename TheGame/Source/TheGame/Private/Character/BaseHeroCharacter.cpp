// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/BaseHeroCharacter.h"
#include "AllGameplayTags.h"
#include "Input/HeroInputComponent.h"
#include "StartupData/HeroStartup_DataAsset.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Camera/CameraComponent.h"
#include "AbilitySystem/GameAbilitySystemComponent.h"
#include "InputMappingContext.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/BoxComponent.h"

#include "DebugHelper.h"


ABaseHeroCharacter::ABaseHeroCharacter()
{
	HeroInputComponent = CreateDefaultSubobject<UHeroInputComponent>(TEXT("HeroInputComponent"));
}

void ABaseHeroCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

void ABaseHeroCharacter::AddMappingContext(UInputMappingContext* Context, int32 Priority)
{
	Subsystem->AddMappingContext(Context, Priority);
}

void ABaseHeroCharacter::RemoveMappingContext(UInputMappingContext* Context)
{
	Subsystem->RemoveMappingContext(Context);
}

void ABaseHeroCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	APlayerController* PlayerController= Cast<APlayerController>(GetController());
	Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
	if (Subsystem)
	{
		if (HeroStartupData)
		{
			Subsystem->AddMappingContext(HeroStartupData->GetMappingFromType(EIMCType::Default), 0);
			HeroStartupData->GiveAbilitiesToPlayerASC(GetAbilitySystemComponent());
			HeroInputComponent->BindAction
			(HeroStartupData->GetInputActionFromTag(OurGameplayTags::Player_Input_Move),
				ETriggerEvent::Triggered,
				this,
				&ThisClass::HandleMoveInput);
			HeroInputComponent->BindAction
			(HeroStartupData->GetInputActionFromTag(OurGameplayTags::Player_Input_Look),
				ETriggerEvent::Triggered,
				this,
				&ThisClass::HandleLookInput);
			//                                    Ability Binding
			//Defaults
			UInputAction* JumpAction = HeroStartupData->GetInputActionFromTag(OurGameplayTags::Player_Input_Jump);
			HeroInputComponent->BindAbilityInputAction(JumpAction,ETriggerEvent::Started, this,&ThisClass::CallJump);

			UInputAction* HitLeftAction = HeroStartupData->GetInputActionFromTag(OurGameplayTags::Player_Input_HitLeft);
			HeroInputComponent->BindAbilityInputAction(HitLeftAction, ETriggerEvent::Started, this, &ThisClass::CallHitLeft);
			UInputAction* HitRightAction = HeroStartupData->GetInputActionFromTag(OurGameplayTags::Player_Input_HitRight);
			HeroInputComponent->BindAbilityInputAction(HitRightAction, ETriggerEvent::Started, this, &ThisClass::CallHitRight);

			UInputAction* SprintAction = HeroStartupData->GetInputActionFromTag(OurGameplayTags::Player_Input_Sprint);
			HeroInputComponent->BindAbilityInputAction(SprintAction, ETriggerEvent::Started, this, &ThisClass::CallStartSprint);
			HeroInputComponent->BindAbilityInputAction(SprintAction, ETriggerEvent::Completed, this, &ThisClass::CallEndSprint);

			UInputAction* CrouchAction = HeroStartupData->GetInputActionFromTag(OurGameplayTags::Player_Input_Crouch);
			HeroInputComponent->BindAbilityInputAction(CrouchAction, ETriggerEvent::Started, this, &ThisClass::CallStartCrouch);
			HeroInputComponent->BindAbilityInputAction(CrouchAction, ETriggerEvent::Completed, this, &ThisClass::CallEndCrouch);

			UInputAction* ChangeStanceAction = HeroStartupData->GetInputActionFromTag(OurGameplayTags::Player_Input_ChangeStance);
			HeroInputComponent->BindAbilityInputAction(ChangeStanceAction, ETriggerEvent::Started, this, &ThisClass::CallChangeStance);

			UInputAction* PowerUpAction = HeroStartupData->GetInputActionFromTag(OurGameplayTags::Player_Input_PowerUp);
			HeroInputComponent->BindAbilityInputAction(PowerUpAction, ETriggerEvent::Started, this, &ThisClass::CallStartPowerUp);
			HeroInputComponent->BindAbilityInputAction(PowerUpAction, ETriggerEvent::Completed, this, &ThisClass::CallEndPowerUp);

			UInputAction* DodgeAction = HeroStartupData->GetInputActionFromTag(OurGameplayTags::Player_Input_Dodge);
			HeroInputComponent->BindAbilityInputAction(DodgeAction, ETriggerEvent::Started, this, &ThisClass::CallDodge);
		}
	}
}

void ABaseHeroCharacter::HandleMoveInput(const FInputActionValue& InputActionValue)
{
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	const FRotator MovementRotation(0.f, Controller->GetControlRotation().Yaw, 0.f);
	if (MovementVector.Y != 0)
	{
		const FVector ForwardVector = MovementRotation.RotateVector(FVector::ForwardVector);
		AddMovementInput(ForwardVector, MovementVector.Y);
		if (MovementVector.Y > 0)
		{
			if (GetCharacterMovement()->bOrientRotationToMovement == false) GetCharacterMovement()->bOrientRotationToMovement = true;
		}
		else GetCharacterMovement()->bOrientRotationToMovement = false;
	}
	else if (MovementVector.Y == 0 && GetCharacterMovement()->bOrientRotationToMovement == true)
	{
		GetCharacterMovement()->bOrientRotationToMovement = false;
	}
	


	if (MovementVector.X != 0)
	{
		const FVector RightVector = MovementRotation.RotateVector(FVector::RightVector);
		AddMovementInput(RightVector, MovementVector.X);
	}
}

void ABaseHeroCharacter::HandleLookInput(const FInputActionValue& InputActionValue)
{
	const FVector2D LookInput = InputActionValue.Get<FVector2D>();
	AddControllerYawInput(LookInput.X);
	AddControllerPitchInput(LookInput.Y);
}

void ABaseHeroCharacter::CallJump(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_Jump);
}

void ABaseHeroCharacter::CallStartSprint(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_SprintStart);
}

void ABaseHeroCharacter::CallEndSprint(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_SprintEnd);
}

void ABaseHeroCharacter::CallHitLeft(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_HitLeft);
}

void ABaseHeroCharacter::CallHitRight(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_HitRight);
}

void ABaseHeroCharacter::CallStartCrouch(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_CrouchStart);
}

void ABaseHeroCharacter::CallEndCrouch(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_CrouchEnd);
}

void ABaseHeroCharacter::CallChangeStance(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_ChangeStance);
}


void ABaseHeroCharacter::CallStartPowerUp(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_PowerUpStart);
}

void ABaseHeroCharacter::CallEndPowerUp(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_PowerUpEnd);
}

void ABaseHeroCharacter::CallDodge(const FInputActionValue& InputActionValue)
{
	GetAbilitySystemComponent()->ActivateGivenAbility(OurGameplayTags::Player_Ability_Dodge);
}
