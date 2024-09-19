// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJamYetiGameMode.h"
#include "GameJamYetiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameJamYetiGameMode::AGameJamYetiGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
