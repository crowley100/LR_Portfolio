// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PP1GameMode.h"
#include "PP1HUD.h"
#include "PP1Character.h"
#include "UObject/ConstructorHelpers.h"

APP1GameMode::APP1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APP1HUD::StaticClass();
}
