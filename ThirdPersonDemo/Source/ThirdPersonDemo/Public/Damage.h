// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollectableBase.h"
#include "Damage.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONDEMO_API ADamage : public ACollectableBase
{
	GENERATED_BODY()

public:
	virtual void Interact(AThirdPersonDemoCharacter* CharRef) override;

	UPROPERTY(EditDefaultsOnly)
	float DamageAmount = 10.f;
	
};
