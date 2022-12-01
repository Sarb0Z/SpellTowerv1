// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DictionaryDB.generated.h"

/**
 * 
 */


UCLASS()
class SPELLTOWERV1_API UDictionaryDB : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FString> dictionaryDB;
};
