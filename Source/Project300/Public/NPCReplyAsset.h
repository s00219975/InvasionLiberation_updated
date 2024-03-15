// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include <PlayerChoiceAsset.h>
#include "NPCReplyAsset.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew, BlueprintType)
class PROJECT300_API UNPCReplyAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	// Text content of the NPC reply
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ReplyText;

	// Array of choices the player can make in response to this reply
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	TArray<UPlayerChoiceAsset*> PlayerChoices;
};
