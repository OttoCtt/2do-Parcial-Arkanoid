// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaDano.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API ACapsulaDano : public ACapsula
{
	GENERATED_BODY()
	
public:
	ACapsulaDano();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//Brew the potion
	virtual void desplegar() override;
};
