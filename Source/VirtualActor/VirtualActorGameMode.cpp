// Copyright Epic Games, Inc. All Rights Reserved.

#include "VirtualActorGameMode.h"
#include "VirtualActorHUD.h"
#include "VirtualActorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVirtualActorGameMode::AVirtualActorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVirtualActorHUD::StaticClass();
}
