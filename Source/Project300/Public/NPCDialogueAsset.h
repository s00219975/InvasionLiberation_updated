// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include <NPCReplyAsset.h>
#include "NPCDialogueAsset.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew, BlueprintType)
class PROJECT300_API UNPCDialogueAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NPC_ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText NPC_Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced)
	TArray<UNPCReplyAsset*> Conversation;
};
