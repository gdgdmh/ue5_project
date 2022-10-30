// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectGameMode.h"
#include "ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectGameMode::AProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	// BP_PlayerÇê›íË
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Project/Player/BP_Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
