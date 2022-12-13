// Fill out your copyright notice in the Description page of Project Settings.


#include "Nave.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
ANave::ANave()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> NaveMessAsset(TEXT("StaticMesh'/Game/Meshes/SM_Brick.SM_Brick'"));

	SM_Nave = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Nave"));
	SM_Nave->SetStaticMesh(NaveMessAsset.Object);
	RootComponent = SM_Nave;

}

// Called when the game starts or when spawned
void ANave::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANave::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANave::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

