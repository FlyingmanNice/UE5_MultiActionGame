// Copyright Epic Games, Inc. All Rights Reserved.

#include "ALSRefactorGameMode.h"
#include "ALSRefactorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AALSRefactorGameMode::AALSRefactorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
