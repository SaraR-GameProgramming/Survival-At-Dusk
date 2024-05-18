// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Survival_at_DuskGameMode.generated.h"

UCLASS(minimalapi)
class ASurvival_at_DuskGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ASurvival_at_DuskGameMode();

protected:
	virtual void BeginPlay() override;

private:
	void TimeAdvancement();
	FTimerHandle TimeHandle;
	int32 Day;
	FString TimeOfDay;

};



