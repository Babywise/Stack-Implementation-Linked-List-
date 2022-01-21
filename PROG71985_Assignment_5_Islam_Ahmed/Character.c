//functions to create a character, 
//get the character from the structure 
//and prints the current character from the structure

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Character.h"

CHARACTER createCharacter(char letter) {

	CHARACTER c;
	c.letter = letter;
	return c;

}

char getCharacter(CHARACTER c) {

	return c.letter;

}

void displayCharacter(CHARACTER c) {

	printf("%c", c.letter);

}