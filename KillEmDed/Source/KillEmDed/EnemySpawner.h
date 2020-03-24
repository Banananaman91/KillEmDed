// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <random>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class KILLEMDED_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnerProperties)
		TArray<UClass*> BPEnemy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnerProperties)
		float SpawnTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SpawnerProperties)
		float TimeSinceLastSpawn;

	void Spawn();
};
