// Fill out your copyright notice in the Description page of Project Settings.


#include "AEnemy.h"
#include "Projectile.h"

// Sets default values
AAEnemy::AAEnemy(const FObjectInitializer& PCIP) : Super(PCIP)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	speed = 20;
	HitPoints = 20;
	Experience = 1;
	AttackTimeout = 1.5f;
	TimeSinceLastStrike = 0;

	SightSphere = PCIP.CreateDefaultSubobject<USphereComponent>(this, TEXT("SighSphere"));
	SightSphere->SetupAttachment(RootComponent);

	AttackRangeSphere = PCIP.CreateDefaultSubobject<USphereComponent>(this, TEXT("AttackRangeSphere"));
	AttackRangeSphere->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AAEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TrackPlayer(DeltaTime);

}

// Called to bind functionality to input
void AAEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAEnemy::TrackPlayer(float DeltaTime)
{
	AAvatar* avatar = Cast<AAvatar>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!avatar || avatar->GameOver) return;

	FVector playerPos = avatar->GetActorLocation();
	FVector toPlayer = playerPos - GetActorLocation();
	float distanceToPlayer = toPlayer.Size();

	if (distanceToPlayer > SightSphere->GetScaledSphereRadius()) return;

	FRotator toPlayerRotation = toPlayer.Rotation();
	toPlayerRotation.Pitch = 0;
	RootComponent->SetWorldRotation(toPlayerRotation);

	if (isInAttackRange(distanceToPlayer)) {
		if (!TimeSinceLastStrike) Attack(avatar);
		
		TimeSinceLastStrike += DeltaTime;

		if (TimeSinceLastStrike > AttackTimeout) TimeSinceLastStrike = 0;

		return;
	}

	toPlayer /= distanceToPlayer;
	AddMovementInput(toPlayer, speed * DeltaTime);
}

void AAEnemy::Attack(AActor* thing) {
	if (BPBullet) {
		FVector fwd = GetActorForwardVector();
		FVector nozzle = GetMesh()->GetBoneLocation("index_03_l");

		nozzle += fwd * BulletSpawnDistance;

		FVector toOpponent = thing->GetActorLocation() - nozzle;
		toOpponent.Normalize();

		AProjectile* bullet = GetWorld()->SpawnActor<AProjectile>(BPBullet, nozzle, RootComponent->GetComponentRotation());

		if (bullet) {
			bullet->Firer = this;
			bullet->ProxSphere->AddImpulse(fwd * BulletLaunchImpulse);
		}
	}

	else {
		thing->TakeDamage(BaseAttackDamage, FDamageEvent(), NULL, this);
	}
}

float AAEnemy::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	HitPoints -= Damage;

	if (HitPoints <= 0) {
		AAvatar* avatar = Cast<AAvatar>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
		avatar->AddExperience(Experience);

		int item = rand() % BPLoot.Num();
		FVector spawnPoint = GetActorLocation();
		APickupItem* enemySpawned = GetWorld()->SpawnActor<APickupItem>(BPLoot[item], spawnPoint, FRotator::ZeroRotator);

		Destroy();
	}
	return Damage;
}

