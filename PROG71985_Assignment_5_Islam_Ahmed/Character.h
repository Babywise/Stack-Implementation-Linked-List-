//structure for a single character

#pragma once

typedef struct character {

	char letter;

}CHARACTER;

CHARACTER createCharacter(char);
char getCharacter(CHARACTER);
void displayCharacter(CHARACTER);