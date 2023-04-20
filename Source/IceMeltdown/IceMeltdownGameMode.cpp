// Copyright Epic Games, Inc. All Rights Reserved.

#include "IceMeltdownGameMode.h"
#include "IceMeltdownCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIceMeltdownGameMode::AIceMeltdownGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
