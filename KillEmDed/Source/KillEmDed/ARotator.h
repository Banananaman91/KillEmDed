// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MainContainer.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ARotator.generated.h"

UCLASS()
class KILLEMDED_API AARotator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AARotator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		FString RotationAxis = "Yaw";
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* RotatableMesh;
	UPROPERTY(EditDefaultsOnly)
		UBoxComponent* AnimTrigger;
	UPROPERTY(EditAnywhere, Category = "Animation")
		float MaxRotation;
	UPROPERTY(EditAnywhere, Category = "Animation")
		UCurveFloat* AnimCurve;

private:
	FRotator InitialRotation;
	FRotator TargetRotation;
	FTimeline MyTimeline;

	UFUNCTION()
		void HandleProgress(float value);
	UFUNCTION()
		void OnAnimTriggered(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
