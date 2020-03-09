// Fill out your copyright notice in the Description page of Project Settings.


#include "AEnemy.h"

// Sets default values
AAEnemy::AAEnemy(const FObjectInitializer& PCIP) : Super(PCIP)
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	speed = 20;
	HitPoints = 20;
	Experience = 1;
	BPLoot = NULL;
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
	if (!avatar) return;

	FVector playerPos = avatar->GetActorLocation();
	FVector toPlayer = playerPos - GetActorLocation();
	float distanceToPlayer = toPlayer.Size();
	AddMovementInput(toPlayer, speed * DeltaTime);

	FRotator toPlayerRotation = toPlayer.Rotation();
	toPlayerRotation.Pitch = 0;
	RootComponent->SetWorldRotation(toPlayerRotation);
}

