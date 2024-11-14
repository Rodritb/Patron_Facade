// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigosCocodrilo.h"

AEnemigosCocodrilo::AEnemigosCocodrilo()
{

    PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> Malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
    if (Malla.Succeeded())
    {
        MeshFacade->SetStaticMesh(Malla.Object);
    }
}

void AEnemigosCocodrilo::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigosCocodrilo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEnemigosCocodrilo::Obligacion()
{
    GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Silver,
        FString::Printf(TEXT("%s, cocodrillo nadando en el lago"), *TripulacionEnemiga()));
}

FString AEnemigosCocodrilo::TripulacionEnemiga()
{
    return " Enemigo cocodrillo";
}