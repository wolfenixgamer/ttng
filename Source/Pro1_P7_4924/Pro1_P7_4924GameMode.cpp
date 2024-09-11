// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pro1_P7_4924GameMode.h"
#include "Pro1_P7_4924Character.h"
#include "UObject/ConstructorHelpers.h"

APro1_P7_4924GameMode::APro1_P7_4924GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
