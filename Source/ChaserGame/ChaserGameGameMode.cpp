// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChaserGameGameMode.h"
#include "ChaserGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChaserGameGameMode::AChaserGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
