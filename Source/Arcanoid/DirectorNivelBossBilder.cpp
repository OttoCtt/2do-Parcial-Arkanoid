// Fill out your copyright notice in the Description page of Project Settings.


#include "DirectorNivelBossBilder.h"
#include "Boss.h"
#include "Boss01.h"

// Sets default values
ADirectorNivelBossBilder::ADirectorNivelBossBilder()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADirectorNivelBossBilder::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ADirectorNivelBossBilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADirectorNivelBossBilder::ConstructBoss()
{
	if (!BossBilder)
	{
		UE_LOG(LogTemp, Warning, TEXT("ConstruirNaveEnemigaEscuadrilla_01(): NaveEscuadrillasBuilder es NULL, inicializar correctamente esta clase"));
	}


	BossBilder->BuildVelocidad_Movimiento();
	BossBilder->BuildResistencia_Vida();
	BossBilder->BuildSistemaRotacion();
	BossBilder->BuildSistemaEscudo();
}

void ADirectorNivelBossBilder::SetBossBuilder(APawn* Builder)
{
	//Cast the passed Actor and set the Builder
	BossBilder = Cast<IBossBilder>(Builder);

	if (!BossBilder) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));

		UE_LOG(LogTemp, Error, TEXT("SetLodgingBuilder(): The Actor is not a LodgingBuilder!Are you sure that the Actor implements that interface ? "));
	}

}

ABoss01* ADirectorNivelBossBilder::GetBoss()
{
	if (BossBilder)
	{
		//Returns the Lodging of the Builder
		return BossBilder->GetBoss();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr"));
	return nullptr;
}

