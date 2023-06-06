// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectableBase.h"

#include "Kismet/GameplayStatics.h"
#include "ThirdPersonDemo/ThirdPersonDemoCharacter.h"

// Sets default values
ACollectableBase::ACollectableBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Component"));
	MeshComponent->SetupAttachment(GetRootComponent());

}

// Called when the game starts or when spawned
void ACollectableBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollectableBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollectableBase::Interact(AThirdPersonDemoCharacter* CharRef)
{
	/*
	* 	if(CharRef)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Green,
	FString::Printf(TEXT("CharRef name: %s"), *CharRef->GetName()));
		Destroy();
	}
	 */

}

void ACollectableBase::SpawnDestroyParticle()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, DestroyParticle, GetActorLocation());
}

