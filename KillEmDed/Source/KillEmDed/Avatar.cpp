// Fill out your copyright notice in the Description page of Project Settings.


#include "Avatar.h"

#include "Components/InputComponent.h"
#include "Engine/World.h"


// Sets default values
AAvatar::AAvatar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAvatar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAvatar::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);
	check(InputComponent);
	InputComponent->BindAxis("Forward", this, &AAvatar::MoveForward);
	InputComponent->BindAxis("Strafe", this, &AAvatar::MoveRight);
	InputComponent->BindAxis("Yaw", this, &AAvatar::Yaw);
	InputComponent->BindAxis("Pitch", this, &AAvatar::Pitch);
}

void AAvatar::MoveForward(float amount)
{
	//Don't enter the body of this function if Controller is not set up yet, or if the amount is equal to zero
	if (Controller && amount) {
		FVector forward = GetActorForwardVector();
		//we call AddMovementInput to actually move the player by the 'amount' in 'forward' direction
		AddMovementInput(forward, amount);
	}
}

void AAvatar::MoveRight(float amount)
{
	if (Controller && amount) {
		FVector right = GetActorRightVector();
		AddMovementInput(right, amount);
	}
}

void AAvatar::Yaw(float amount)
{
	AddControllerYawInput(200.f * amount * GetWorld()->GetDeltaSeconds());
}

void AAvatar::Pitch(float amount)
{
	AddControllerPitchInput(200.f * amount * GetWorld()->GetDeltaSeconds());
}

