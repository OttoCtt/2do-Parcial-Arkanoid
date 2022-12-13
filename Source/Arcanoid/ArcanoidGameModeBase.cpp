// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArcanoidGameModeBase.h"
#include "Brick.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Boss.h"
#include "Boss01.h"
#include "DirectorNivelBossBilder.h"
#include "Nivel_01_BossBilder.h"
#include "Nivel_01BossBilder.h"
#include "Brick.h"
#include "Nave.h"

void AArcanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	numlad = 19;
	spawnbricks(numlad);
	GetWorldTimerManager().SetTimer(MemberTimerBrics, this, &AArcanoidGameModeBase::spwnbrc, 1.f, true,2.f);

	//Spawn Builder and Engineer
	Nivel01Bilder = GetWorld()->SpawnActor<ANivel_01_BossBilder>(ANivel_01_BossBilder::StaticClass());

	Director = GetWorld()->SpawnActor<ADirectorNivelBossBilder>(ADirectorNivelBossBilder::StaticClass());

	//Set the Builder for the Engineer and create the buildings
	Director->SetBossBuilder(Nivel01Bilder);
	Director->ConstructBoss();

	//Get the Engineer's Lodging and Logs the created buildings
	ABoss01* Boss = Director->GetBoss();
	Boss->BossCharacteristics();

}

void AArcanoidGameModeBase::spawnbricks(int &nlad)
{
	//TArray<ABrick*>cbricks;
	for (int i = 0; i <= nlad; i++) {
		cbricks.Add(GetWorld()->SpawnActor<ABrick>(FVector(500.f, 0.f, 500.f), FRotator::ZeroRotator));
	}
	//TArray<FVector>drbrc;
	drbrc.Add(FVector(-120.f, 0.f, 350.f));
	drbrc.Add(FVector(-60.f, 0.f, 350.f));
	drbrc.Add(FVector(0.f, 0.f, 350.f));
	drbrc.Add(FVector(60.f, 0.f, 350.f));
	drbrc.Add(FVector(120.f, 0.f, 350.f));
	drbrc.Add(FVector(-120.f, 0.f, 320.f));
	drbrc.Add(FVector(-60.f, 0.f, 320.f));
	drbrc.Add(FVector(0.f, 0.f, 320.f));
	drbrc.Add(FVector(60.f, 0.f, 320.f));
	drbrc.Add(FVector(120.f, 0.f, 320.f));
	drbrc.Add(FVector(-120.f, 0.f, 290.f));
	drbrc.Add(FVector(-60.f, 0.f, 290.f));
	drbrc.Add(FVector(0.f, 0.f, 290.f));
	drbrc.Add(FVector(60.f, 0.f, 290.f));
	drbrc.Add(FVector(120.f, 0.f, 290.f));
	drbrc.Add(FVector(-120.f, 0.f, 260.f));
	drbrc.Add(FVector(-60.f, 0.f, 260.f));
	drbrc.Add(FVector(0.f, 0.f, 260.f));
	drbrc.Add(FVector(60.f, 0.f, 260.f));
	drbrc.Add(FVector(120.f, 0.f, 260.f));
}

void AArcanoidGameModeBase::spwnbrc()
{
	int rn = FMath::RandRange(0, numlad);
	if (numlad >= 0) {
		cbricks[it]->SetActorLocation(drbrc[rn]);
		it++;
		numlad--;
		drbrc.RemoveAt(rn);
	}
}
