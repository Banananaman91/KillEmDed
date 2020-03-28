// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "MainContainer.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ADestructableObject.generated.h"

UCLASS()
class KILLEMDED_API AADestructableObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AADestructableObject(const class FObjectInitializer& PCIP);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
		float CoolDownTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
		float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Properties)
		float HitPoints;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Collision)
		USphereComponent* ProxSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Collision)
		float SphereRadius;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Collision)
		UParticleSystemComponent* Particle;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Collision)
		UParticleSystemComponent* Particle2;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Collision)
		UParticleSystemComponent* Particle3;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Collision)
		UParticleSystemComponent* DecoParticle;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Mesh)
		UStaticMeshComponent* Mesh;

	UFUNCTION(BlueprintNativeEvent, Category = Collision)
		void Prox(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	bool Active;

	float timer;

	float hp;

	float explosionDelay = 1;

};
