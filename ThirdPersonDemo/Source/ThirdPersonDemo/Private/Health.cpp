// Fill out your copyright notice in the Description page of Project Settings.


#include "Health.h"

#include "ThirdPersonDemo/ThirdPersonDemoCharacter.h"

void AHealth::Interact(class AThirdPersonDemoCharacter* CharRef)
{
	Super::Interact(CharRef);
	
	if(CharRef)
	{
		CharRef->SetHealth(CharRef->GetHealth() + HealthAmount);
		SpawnDestroyParticle();
		Destroy();
	}
}
