// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Patron_FacadeGameMode.generated.h"

UCLASS(minimalapi)
class APatron_FacadeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatron_FacadeGameMode();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

};



