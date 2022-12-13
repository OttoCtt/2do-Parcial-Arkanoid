// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossBilder.h"
#include "Boss01.h"
#include "Nivel_01BossBilder.generated.h"


UCLASS()
class ARCANOID_API ANivel_01BossBilder : public AActor, public IBossBilder
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANivel_01BossBilder();

private:
	//The Lodging Actor
	UPROPERTY(VisibleAnywhere, Category = "Nivel_01 Boss")
		class ABoss01* Boss;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Nave Enemiga Escuadrilla 01
	virtual void BuildVelocidad_Movimiento() override;
	virtual void BuildResistencia_Vida() override;
	virtual void BuildSistemaRotacion() override;
	virtual void BuildSistemaEscudo() override;

	virtual class ABoss01* GetBoss() override;
};
