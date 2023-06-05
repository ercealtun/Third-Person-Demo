// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollectableBase.h"
#include "Health.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONDEMO_API AHealth : public ACollectableBase
{
	GENERATED_BODY()

public:
	virtual void Interact(class AThirdPersonDemoCharacter* CharRef) override;

	UPROPERTY(EditDefaultsOnly)
	float HealthAmount = 10.f;
	
};
