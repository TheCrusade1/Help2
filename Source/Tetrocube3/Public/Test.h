// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlockBase.h"
#include "Test.generated.h"

/**
 * 
 */
UCLASS()
class TETROCUBE3_API ATest : public ABlockBase
{
	GENERATED_BODY()

public:
	ATest();

protected:

	void BeginPlay() override;
	void SetBlockPositions();
};
