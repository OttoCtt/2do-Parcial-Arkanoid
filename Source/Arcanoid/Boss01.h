// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Boss_NPC.h"
#include "Nave.h"
#include "Boss01.generated.h"

UCLASS()
class ARCANOID_API ABoss01 : public ANave /*, public IBoss_NPC*/
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoss01();

private:

	// Estos se convertiran en clases o metodos funciones
	FString Velocidad_Movimiento;
	FString Resistencia_Vida;
	FString SistemaRotacion;
	FString SistemaEscudo;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Metodos accesores para registrar
	void SetVelocidad_Movimiento(FString _Velocidad_Movimiento) { Velocidad_Movimiento = _Velocidad_Movimiento; }
	void SetResistencia_Vida(FString _Resistencia_Vida) { Resistencia_Vida = _Resistencia_Vida; }
	void SetSistemaRotacion(FString _SistemaRotacion) { SistemaRotacion = _SistemaRotacion; }
	void SetSistemaEscudo(FString _SistemaEscudo) { SistemaEscudo = _SistemaEscudo; }

	void BossCharacteristics();
};
