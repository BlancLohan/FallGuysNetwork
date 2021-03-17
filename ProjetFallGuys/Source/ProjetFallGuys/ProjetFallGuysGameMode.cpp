// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjetFallGuysGameMode.h"
#include "ProjetFallGuysCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjetFallGuysGameMode::AProjetFallGuysGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
