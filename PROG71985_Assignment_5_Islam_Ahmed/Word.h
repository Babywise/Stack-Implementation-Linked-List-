//stucture for a word is created
//this struct consists of a linked list for each of the characters in the word

#pragma once
#include <stdbool.h>
#include "StackADT.h"
#include "Character.h"

typedef struct word {

	STACK characters;

}WORD;

WORD createWord();
bool popHeadCharacterFromWord(WORD*);
bool pushCharacterToWord(WORD*, CHARACTER);
void getHeadCharacterFromWord(WORD*);