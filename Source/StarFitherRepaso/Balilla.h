// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Balilla.generated.h"

UCLASS()
class STARFITHERREPASO_API ABalilla : public AActor
{
	GENERATED_BODY()

private:
	float Velocidad;
	float DistanciaMaxima;
	float Tamano;
	float UbicacionInicioX;
	float UbicacionInicioY;
	float NivelDano;

	
public:	
	// Sets default values for this actor's properties
	ABalilla();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
