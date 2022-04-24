// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bala.generated.h"

UCLASS()
class STARFITHERREPASO_API ABala : public AActor
{
	GENERATED_BODY()
private:
	float Velocidad;
	float DistanciaMaxima;
	float Tamano;
	float UbicaionInicioX;
	float UbicaionInicioY;
	float NivelDano;
	float NivelEnergia;
	int Energia;


	
public:	
	// Sets default values for this actor's properties
	ABala();


	UPROPERTY(EditAnyWhere, BlueprintReadyWrite, Category = "Prueba")

	float UbicacionX;

	UPROPERTY(EditAnyWhere, BlueprintReadyWrite, Category = "Prueba")
	float UbicacionY;

	UFUNCTION(BlueprintCallable)
	float SumarEnergia(float _Energia);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
