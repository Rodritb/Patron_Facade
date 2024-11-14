// Copyright Epic Games, Inc. All Rights Reserved.

#include "Patron_FacadeGameMode.h"
#include "Patron_FacadeCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "EnemigosFacade.h"
#include "EnemigosCocodrilo.h"
#include "EnemigoLeon.h"
#include "EnemigosLeon.h"

APatron_FacadeGameMode::APatron_FacadeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


void APatron_FacadeGameMode::BeginPlay()
{
	Super::BeginPlay();
	AEnemigosFacade* Facade = GetWorld()->SpawnActor<AEnemigosFacade>(AEnemigosFacade::StaticClass());

	Facade->Despertar();
	Facade->PlanDelDia();
	Facade->Descanso();


}

void APatron_FacadeGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}