// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawner.h"
#include "AEnemy.h"

// Sets default values
AEnemySpawner::AEnemySpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemySpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	if (!TimeSinceLastSpawn) Spawn();

	TimeSinceLastSpawn += DeltaTime;

	if (TimeSinceLastSpawn > SpawnTimeout) TimeSinceLastSpawn = 0;

	return;
}

void AEnemySpawner::Spawn()
{
	int enemy = rand() % BPEnemy.Num();

	FVector spawnPoint = GetActorLocation();

	AAEnemy* enemySpawned = GetWorld()->SpawnActor<AAEnemy>(BPEnemy[enemy], spawnPoint, FRotator::ZeroRotator);
}

