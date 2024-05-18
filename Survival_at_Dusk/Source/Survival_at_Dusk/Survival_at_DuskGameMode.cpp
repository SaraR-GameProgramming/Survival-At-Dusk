// Copyright Epic Games, Inc. All Rights Reserved.

#include "Survival_at_DuskGameMode.h"
#include "Survival_at_DuskCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurvival_at_DuskGameMode::ASurvival_at_DuskGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	Day = 1;
	TimeOfDay = "Morning";
}

void ASurvival_at_DuskGameMode::BeginPlay()
{
	Super::BeginPlay();

	// starts the day/night cycle
	GetWorldTimerManager().SetTimer(TimeHandle, this, &ASurvival_at_DuskGameMode::TimeAdvancement, 60.0f, true);
}

void ASurvival_at_DuskGameMode::TimeAdvancement()
{
	if (TimeOfDay == "Morning")
	{
		TimeOfDay = "Noon";
	}
	else if (TimeOfDay == "Noon")
	{
		TimeOfDay = "Dusk";
	}
	else if (TimeOfDay == "Dusk")
	{
		TimeOfDay = "Night";
	}
	else
	{
		Day++;
		TimeOfDay = "Morning";
	}

	UE_LOG(LogTemp, Warning, TEXT("Day %d, Time: %s"), Day, *TimeOfDay);
}
