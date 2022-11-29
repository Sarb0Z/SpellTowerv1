// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include <vector>
#include <string>

#include "Dictionary.generated.h"//this must be always the last include
/**
 * 
 */

UCLASS(Blueprintable, BlueprintType)
class SPELLTOWERV1_API UDictionary: public UObject
{
	GENERATED_BODY()
private:
	std::vector<std::string> dictionary;
	char alphabet[26];

public:
	UDictionary();
	~UDictionary();
	UFUNCTION(BlueprintCallable, Category = "Function")
		void addWord(FString FWord);
	UFUNCTION(BlueprintCallable, Category = "Function")
		FString getWord();
	UFUNCTION(BlueprintCallable, Category = "Function")
		FString generateWordSalad(FString FWord);//this function takes the word and returns 
	//a word salad of length 16 with all the letters of that word in random order
	//the word must be less than 16 letters long




};
