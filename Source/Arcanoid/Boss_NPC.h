// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Boss_NPC.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBoss_NPC : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class ARCANOID_API IBoss_NPC
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//The pure virtual functions of the FloorPlan

	virtual void SetVelocidad_Movimiento(FString _Velocidad_Movimiento) = 0;
	virtual void SetResistencia_Vida(FString _Resistencia_Vida) = 0;
	virtual void SetSistemaRotacion(FString _SistemaRotacion) = 0;
	virtual void SetSistemaEscudo(FString _SistemaEscudo) = 0;

};
