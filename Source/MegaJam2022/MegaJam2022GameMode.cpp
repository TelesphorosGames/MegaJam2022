// Copyright Epic Games, Inc. All Rights Reserved.

#include "MegaJam2022GameMode.h"
#include "MegaJam2022Character.h"
#include "UObject/ConstructorHelpers.h"

AMegaJam2022GameMode::AMegaJam2022GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	bInvertYAxis = {false};
}
