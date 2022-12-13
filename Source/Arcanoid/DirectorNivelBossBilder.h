// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BossBilder.h"
#include "DirectorNivelBossBilder.generated.h"

UCLASS()
class ARCANOID_API ADirectorNivelBossBilder : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADirectorNivelBossBilder();

private:
	//The Builder Actor, that must be a LodgingBuilder
	IBossBilder* BossBilder;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Creates the buildings
	void ConstructBoss();

	//Set the Builder Actor
	void SetBossBuilder(APawn* Builder);

	//Get the Lodging of the Builder
	class ABoss01* GetBoss();

};
