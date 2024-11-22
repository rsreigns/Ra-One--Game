// Fill out your copyright notice in the Description page of Project Settings.


#include "AllGameplayTags.h"

namespace OurGameplayTags
{
	//             Input Key Tags
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Move, "Player.Input.Move")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Look, "Player.Input.Look")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Jump, "Player.Input.Jump")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Flip, "Player.Input.Flip")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Sprint, "Player.Input.Sprint")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Crouch, "Player.Input.Crouch")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_Dodge, "Player.Input.Dodge")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_HitLeft, "Player.Input.HitLeft")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_HitRight, "Player.Input.HitRight")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_PowerUp, "Player.Input.PowerUp")
	UE_DEFINE_GAMEPLAY_TAG(Player_Input_ChangeStance, "Player.Input.ChangeStance")

	// Ability Tags
	//                    Default binding abilities
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Move, "Player.Ability.Move")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Look, "Player.Ability.Look")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Jump, "Player.Ability.Jump")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_SprintStart, "Player.Ability.SprintStart")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_SprintEnd, "Player.Ability.SprintEnd")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_CrouchStart, "Player.Ability.CrouchStart")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_CrouchEnd, "Player.Ability.CrouchEnd")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Dodge, "Player.Ability.Dodge")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_HitLeft, "Player.Ability.HitLeft")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_HitRight, "Player.Ability.HitRight")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_PowerUpStart, "Player.Ability.PowerUpStart")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_PowerUpEnd, "Player.Ability.PowerUpEnd")
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_ChangeStance, "Player.Ability.ChangeStance")

		// Status
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Crouching, "Player.Status.Crouching")
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_Sprinting, "Player.Status.Sprinting")
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_PowerUp, "Player.Status.PowerUp")
	UE_DEFINE_GAMEPLAY_TAG(Player_Status_KickStance, "Player.Status.kickStance")


		//Event 
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Jump, "Player.Event.Jump")


	

}