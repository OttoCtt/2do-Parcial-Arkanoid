// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BossBilder.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBossBilder : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class ARCANOID_API IBossBilder
{
	GENERATED_BODY()

		// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//The pure virtual functions of the LodgingBuilder
	virtual void BuildVelocidad_Movimiento() = 0;
	virtual void BuildResistencia_Vida() = 0;
	virtual void BuildSistemaRotacion() = 0;
	virtual void BuildSistemaEscudo() = 0;

	virtual class ABoss01* GetBoss() = 0;
};
