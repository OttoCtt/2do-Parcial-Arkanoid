// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArcanoidGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API AArcanoidGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;
public:
	int numlad = 0,it=0;
	void spawnbricks(int&);
	TArray<class ABrick*>cbricks;
	TArray<FVector>drbrc;
	void spwnbrc();
	class ANave* Nave01;
private:
	FTimerHandle MemberTimerBrics;
	//The Builder Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ANivel_01_BossBilder* Nivel01Bilder;

	//The Engineer Actor
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class ADirectorNivelBossBilder* Director;
};
