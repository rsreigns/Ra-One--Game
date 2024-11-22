// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "BaseCharacter.generated.h"
class UCameraComponent;
class USpringArmComponent;
class UGameAbilitySystemComponent;
UCLASS()
class THEGAME_API ABaseCharacter : public ACharacter ,public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();
	//~ Begin IAbilitySystem Interface.
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const  override;
	//~ End IAbilitySystem Interface
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PossessedBy(AController* NewController) override;



	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category="Components")
	UCameraComponent* CameraComponent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	USpringArmComponent* SpringArmComponent;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	UGameAbilitySystemComponent* AbilitySystemComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	FORCEINLINE UGameAbilitySystemComponent* GetAbilitySystemComponent() { return AbilitySystemComponent; }
	FORCEINLINE UCameraComponent* GetCameraComponent() { return CameraComponent; }
};
