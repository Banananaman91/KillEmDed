// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Particles/ParticleSystemComponent.h"
#include "CollidingPawnMovementComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CollidingPawn.generated.h"

UCLASS()
class KILLEMDED_API ACollidingPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACollidingPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UParticleSystemComponent* OurParticleSystem;

	UCollidingPawnMovementComponent* OurMovementComponent;

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void ParticleToggle();
};
