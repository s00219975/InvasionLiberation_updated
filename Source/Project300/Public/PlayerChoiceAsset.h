// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayerChoiceAsset.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew, BlueprintType)
class PROJECT300_API UPlayerChoiceAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Reply;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LinkToNodeIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldExitDialogue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldShowWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> WidgetClass;
};
