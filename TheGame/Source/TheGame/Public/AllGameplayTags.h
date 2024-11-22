// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NativeGameplayTags.h"

namespace OurGameplayTags
{
	// Input Tags
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_Move)               // WASD
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_Look)               // Mouse XY
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_Jump)               //Space
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_Flip)               // Space
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_Sprint)             // L Shift
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_Crouch)             // L Ctrl
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_Dodge)              // L Alt
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_HitLeft)            // LMB
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_HitRight)           // RMB
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_PowerUp)            // R
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Input_ChangeStance)       // 1

	//Ability Tags
	/**                       Default                           */
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Move)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Look)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Jump)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_SprintStart)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_SprintEnd)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_CrouchStart)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_CrouchEnd)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Dodge)      
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_HitLeft)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_HitRight)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_PowerUpStart)
		THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_PowerUpEnd)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_ChangeStance)   


		//Status
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_Crouching)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_Sprinting)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_PowerUp)
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Status_KickStance)

		// Event
	THEGAME_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Jump)


}