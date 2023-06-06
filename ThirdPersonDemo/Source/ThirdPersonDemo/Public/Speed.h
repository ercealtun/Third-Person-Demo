// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollectableBase.h"
#include "Speed.generated.h"

/**
 * 
 */
UCLASS()
class THIRDPERSONDEMO_API ASpeed : public ACollectableBase
{
	GENERATED_BODY()

public:
	virtual void Interact(AThirdPersonDemoCharacter* CharRef) override;


	
};
