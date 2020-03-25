
// Fill out your copyright notice in the Description page of Project Settings.


#include "ADestructableObject.h"

// Sets default values
AADestructableObject::AADestructableObject(const class FObjectInitializer& PCIP)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProxSphere = PCIP.CreateDefaultSubobject<USphereComponent>(this, TEXT("ProxSphere"));
	ProxSphere->OnComponentBeginOverlap.AddDynamic(this, &AADestructableObject::Prox);
	RootComponent = ProxSphere;

	Mesh = PCIP.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Mesh"));
	Mesh->SetupAttachment(ProxSphere);
	Mesh->SetSimulatePhysics(true);

	Particle = PCIP.CreateDefaultSubobject<UParticleSystemComponent>(this, TEXT("Particle"));
	Particle->SetupAttachment(ProxSphere);

	Damage = 1;
}

// Called when the game starts or when spawned
void AADestructableObject::BeginPlay()
{
	Super::BeginPlay();

	Particle->DeactivateSystem();
	
}

// Called every frame
void AADestructableObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Active) {
		timer += DeltaTime;
		if (timer > explosionDelay) ProxSphere->SetSphereRadius(0);
		if (timer > CoolDownTime) {
			Mesh->SetVisibility(true, true);
			ProxSphere->SetSphereRadius(70);
			Active = false;
		}
	}

}

void AADestructableObject::Prox_Implementation(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	if (OtherComp != OtherActor->GetRootComponent()) return;
	if (!Active) OtherActor->TakeDamage(Damage, FDamageEvent(), NULL, this);
}

float AADestructableObject::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);
	HitPoints -= Damage;

	if (HitPoints <= 0) {
		if (!Active) {
			Mesh->SetVisibility(false, true);
			Particle->ActivateSystem();
			ProxSphere->SetSphereRadius(SphereRadius);
			Active = true;
		}
	}
	return Damage;
}

