
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

	Particle2 = PCIP.CreateDefaultSubobject<UParticleSystemComponent>(this, TEXT("Particle2"));
	Particle2->SetupAttachment(ProxSphere);

	Particle3 = PCIP.CreateDefaultSubobject<UParticleSystemComponent>(this, TEXT("Particle3"));
	Particle3->SetupAttachment(ProxSphere);

	DecoParticle = PCIP.CreateDefaultSubobject<UParticleSystemComponent>(this, TEXT("DecoParticle"));
	DecoParticle->SetupAttachment(ProxSphere);

	Damage = 1;
}

// Called when the game starts or when spawned
void AADestructableObject::BeginPlay()
{
	Super::BeginPlay();

	Particle->DeactivateSystem();
	Particle2->DeactivateSystem();
	Particle3->DeactivateSystem();

	hp = HitPoints;
	
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
			DecoParticle->ActivateSystem();
			ProxSphere->SetSphereRadius(70);
			Active = false;
			hp = HitPoints;
			timer = 0;
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
	hp -= Damage;

	if (hp <= 0) {
		if (!Active) {
			Mesh->SetVisibility(false, true);
			DecoParticle->DeactivateSystem();
			Particle->ActivateSystem();
			Particle2->ActivateSystem();
			Particle3->ActivateSystem();
			ProxSphere->SetSphereRadius(SphereRadius);
			Active = true;
		}
	}
	return Damage;
}

