// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"

// Sets default values
AProjectile::AProjectile(const class FObjectInitializer& PCIP)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProxSphere = PCIP.CreateDefaultSubobject<USphereComponent>(this, TEXT("ProxSphere"));
	RootComponent = ProxSphere;
	ProxSphere->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::Prox);

	Particle = PCIP.CreateDefaultSubobject<UParticleSystemComponent>(this, TEXT("Particle"));
	Particle->SetupAttachment(ProxSphere);

	Damage = 1;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	LifeTime -= DeltaTime;

	if (LifeTime <= 0) Destroy();

}

void AProjectile::Prox_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	if (OtherComp != OtherActor->GetRootComponent()) return;

	OtherActor->TakeDamage(Damage, FDamageEvent(), NULL, this);

	Destroy();
}

