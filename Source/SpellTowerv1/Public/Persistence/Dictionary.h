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
	std::string generateWordSalad(std::string word);//this function takes the word and returns 
	//a word salad of length 16 with all the letters of that word in random order
	//the word must be less than 16 letters long




};
