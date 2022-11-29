// Fill out your copyright notice in the Description page of Project Settings.


#include "Persistence/Dictionary.h"
/*
#include <stdlib.h>
#include <time.h>
#include <algorithm>
*/
Dictionary::Dictionary()
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

Dictionary::~Dictionary()
{
}

void Dictionary::addWord(std::string word)
{
	dictionary.push_back(word);
}

std::string Dictionary::getWord()
{
	srand(time(NULL));
	int wordIndex = rand() % dictionary.size();
	return dictionary[wordIndex];
}

std::string Dictionary::generateWordSalad(std::string word)
{
	int wordSize = word.size();
	if (wordSize > 16) {
		return word;
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
	
	return wordSalad;
}
//test cases
//std::cout<<generateWordSalad("chocolate");
//std::cout<<generateWordSalad("banana");
//and so on