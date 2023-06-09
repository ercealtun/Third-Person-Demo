// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractInterface.h"
#include "GameFramework/Actor.h"
#include "CollectableBase.generated.h"

UCLASS()
class THIRDPERSONDEMO_API ACollectableBase : public AActor , public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACollectableBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* MeshComponent;

	virtual void Interact(class AThirdPersonDemoCharacter* CharRef) override;

	void SpawnDestroyParticle();

	UPROPERTY(EditDefaultsOnly)
	UParticleSystem* DestroyParticle;

	

};
