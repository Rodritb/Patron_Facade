// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigos.h"
#include "EnemigosCocodrilo.generated.h"

/**
 * 
 */
UCLASS()
class PATRON_FACADE_API AEnemigosCocodrilo : public AEnemigos
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

public:
	void Obligacion() override;
	FString TripulacionEnemiga() override;
};
