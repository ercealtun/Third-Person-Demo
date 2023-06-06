// Fill out your copyright notice in the Description page of Project Settings.


#include "Speed.h"


#include "ThirdPersonDemo/ThirdPersonDemoCharacter.h"

void ASpeed::Interact(AThirdPersonDemoCharacter* CharRef)
{
	if(CharRef)
	{
		CharRef->Speed();
		SpawnDestroyParticle();
		Destroy(); 
	}
}
