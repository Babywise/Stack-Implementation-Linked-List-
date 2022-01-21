//functions to create a linked list, 
//push characters onto the list,
//remove characters from the head of the list and 
//print the head character in the list


#include <stdio.h>
#include "Word.h"

WORD createWord() {

	WORD w;
	w.characters = createStack();

	return w;

}

bool pushCharacterToWord(WORD* w, CHARACTER c) {

	if (pushCharacterToStack(&(w->characters), c)) {

		return true;

	} else {

		return false;

	}

}

bool popHeadCharacterFromWord(WORD* w) {

	if (popHeadCharacterFromStack(&(w->characters))) {

		return true;

	} else {

		return false;

	}
		
}

void getHeadCharacterFromWord(WORD* w) {

	printf("%c", getHeadNodeCharacterFromStack(&(w->characters)));

}