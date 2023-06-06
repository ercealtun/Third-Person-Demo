// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollectableBase.h"
#include "Score.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONDEMO_API AScore : public ACollectableBase
{
	GENERATED_BODY()

public:
	virtual void Interact(AThirdPersonDemoCharacter* CharRef) override;

	UPROPERTY(EditDefaultsOnly)
	int ScoreAmount = 1;
	
};
