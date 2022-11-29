// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include <vector>
#include <string>

/**
 * 
 */
class SPELLTOWERV1_API Dictionary
{
private:
	std::vector<std::string> dictionary;
	char alphabet[26];

public:
	Dictionary();
	~Dictionary();
	void addWord(std::string word);
	std::string getWord();
	void generateWordSalad(std::string word, char salad[16]);




};
