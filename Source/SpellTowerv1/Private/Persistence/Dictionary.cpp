// Fill out your copyright notice in the Description page of Project Settings.


#include "Persistence/Dictionary.h"
/*
#include <stdlib.h>
#include <time.h>
#include <algorithm>
*/
UDictionary::UDictionary()
{
	//create default word bank
	dictionary.push_back("home");
	dictionary.push_back("school");
	dictionary.push_back("pineapple");
	dictionary.push_back("desert");
	dictionary.push_back("mercury");

	//alphabet
	char letter = 'a';
	int i = 0;
	for (i; i < 26; i++) {
		alphabet[i] = letter;
		letter++;
	}
}

UDictionary::~UDictionary()
{
}

void UDictionary::addWord(FString FWord)
{
	dictionary.push_back(TCHAR_TO_UTF8(&FWord));
}

FString UDictionary::getWord()
{
	srand(time(NULL));
	int wordIndex = rand() % dictionary.size();

	FString wordFStr(dictionary[wordIndex].c_str());
	return wordFStr; ;
}

FString UDictionary::generateWordSalad(FString FWord)
{
	std::string const word = TCHAR_TO_UTF8(&FWord);
	int wordSize = word.size();
	if (wordSize > 16) {
		return FWord;
	}

	std::string wordSalad = "1234567812345678";
	int count = 0;
	int wordIndex = 0;
	bool saladFilled[16];
	int gVal;

	std::fill_n(saladFilled, 16, false);

	srand(time(NULL));

	while (count < 16) {
		gVal = rand() % 16;
		if (wordIndex < wordSize) {
			if (saladFilled[gVal] == false) {
				wordSalad[gVal] = word[wordIndex];
				wordIndex++;
				saladFilled[gVal] = true;
				count++;
			}
		}
		else {
			if (saladFilled[gVal] == false) {
				wordSalad[gVal] = alphabet[rand() % 26];
				saladFilled[gVal] = true;
				count++;
			}
		}
	}
	FString wordSaladFStr(wordSalad.c_str());
	return wordSaladFStr;
}
//test cases
//std::cout<<generateWordSalad("chocolate");
//std::cout<<generateWordSalad("banana");
//and so on