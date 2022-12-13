// Fill out your copyright notice in the Description page of Project Settings.


#include "Nivel_01_BossBilder.h"

// Sets default values
ANivel_01_BossBilder::ANivel_01_BossBilder()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANivel_01_BossBilder::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	Boss01 = GetWorld()->SpawnActor<ABoss01>(FVector(10.f, 0.f, 120.f),FRotator::ZeroRotator);

	//Attach it to the Builder (this)
	Boss01->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ANivel_01_BossBilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANivel_01_BossBilder::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANivel_01_BossBilder::BuildVelocidad_Movimiento()
{
	if (!Boss01)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuildVelocidad_Movimiento(): BossNivel_01 es NULL, inicializar correctamente esta clase"));
	}
	Boss01->SetVelocidad_Movimiento("locidad Movimiento BossNivel_01");
}

void ANivel_01_BossBilder::BuildResistencia_Vida()
{
	if (!Boss01)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuildResistencia_Vida(): BossNivel_01 es NULL, inicializar correctamente esta clase"));
	}

	Boss01->SetResistencia_Vida("Resistencia Vida BossNivel_01");
}

void ANivel_01_BossBilder::BuildSistemaRotacion()
{
	if (!Boss01)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuildSistemaRotacion(): BossNivel_01 es NULL, inicializar correctamente esta clase"));
	}

	Boss01->SetSistemaRotacion("Sistema Rotacion BossNivel_01");
}

void ANivel_01_BossBilder::BuildSistemaEscudo()
{
	if (!Boss01)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuildSistemaEscudo(): BossNivel_01 es NULL, inicializar correctamente esta clase"));
	}

	Boss01->SetSistemaEscudo("Sistema Escudo BossNivel_01");
}

ABoss01* ANivel_01_BossBilder::GetBoss()
{
	return Boss01;
}

