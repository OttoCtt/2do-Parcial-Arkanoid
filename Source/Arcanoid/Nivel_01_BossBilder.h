// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BossBilder.h"
#include "Boss.h"
#include "Boss01.h"
#include "Nivel_01_BossBilder.generated.h"

UCLASS()
class ARCANOID_API ANivel_01_BossBilder : public APawn, public IBossBilder
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ANivel_01_BossBilder();

private:
	//The Lodging Actor
	UPROPERTY(VisibleAnywhere, Category = "Nivel_01 Boss")
		class ABoss01* Boss01;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	// Nave Enemiga Escuadrilla 01
	virtual void BuildVelocidad_Movimiento() override;
	virtual void BuildResistencia_Vida() override;
	virtual void BuildSistemaRotacion() override;
	virtual void BuildSistemaEscudo() override;

	virtual class ABoss01* GetBoss() override;
};
