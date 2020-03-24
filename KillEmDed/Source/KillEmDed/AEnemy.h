// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Avatar.h"
#include "MainContainer.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AEnemy.generated.h"

UCLASS()
class KILLEMDED_API AAEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAEnemy(const FObjectInitializer& PCIP);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MonsterProperties)
		float speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MonsterProperties)
		float HitPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MonsterProperties)
		int32 Experience;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MonsterProperties)
		UClass* BPLoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MonsterProperties)
		float BaseAttackDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MonsterProperties)
		float AttackTimeout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = MonsterProperties)
		float TimeSinceLastStrike;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Collision)
		USphereComponent* SightSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Collision)
		USphereComponent* AttackRangeSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = EnemyProperties)
		UClass* BPBullet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = EnemyProperties)
		float BulletLaunchImpulse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = EnemyProperties)
		float BulletSpawnDistance;

	bool isInAttackRange(float d) { return d < AttackRangeSphere->GetScaledSphereRadius(); }

	bool isInSightRange(float d) { return d < SightSphere->GetScaledSphereRadius(); }

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void TrackPlayer(float DeltaTime);

	void Attack(AActor* thing);

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
};
