// Copyright Epic Games, Inc. All Rights Reserved.

#include "YAKGameMode.h"
#include "YAKCharacter.h"
#include "UObject/ConstructorHelpers.h"

AYAKGameMode::AYAKGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
