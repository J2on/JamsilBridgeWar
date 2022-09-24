// Copyright Epic Games, Inc. All Rights Reserved.

#include "JamsilBridgeWarGameMode.h"
#include "JamsilBridgeWarCharacter.h"
#include "UObject/ConstructorHelpers.h"

AJamsilBridgeWarGameMode::AJamsilBridgeWarGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
