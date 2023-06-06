// Fill out your copyright notice in the Description page of Project Settings.


#include "Damage.h"

#include "ThirdPersonDemo/ThirdPersonDemoCharacter.h"

void ADamage::Interact(AThirdPersonDemoCharacter* CharRef)
{
	// Super::Interact(CharRef);
	
	if(CharRef)
	{
		CharRef->SetHealth(CharRef->GetHealth() - DamageAmount);
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,
		FString::Printf(TEXT("CharRef name: %f"), CharRef->GetHealth()));
		Destroy();
	}
}
