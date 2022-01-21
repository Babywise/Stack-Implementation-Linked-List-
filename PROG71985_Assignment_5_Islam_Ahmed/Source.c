/* Written By:
 *    Name:		Islam Ahmed
 *    Email:	Iahmed9886@conestogac.on.ca
 *    Course:	PROG71985 - Fall2020
 *
 *    Date Started:		2020/11/18
 *    Date Completed:	2020/11/22
 *
 *	  Program Description:
 *
 *			This program uses a linked list to emulate a stack the same way a program made in assembly
 *          would. The program takes userinput and allocates the exact amount of memory needed for the
 *          inputted string and then adds them to the linked list (stack) one by one. For this representation
 *			position 1 in the linked list is the top of the stack, so when a character is added, the previous
 *			chracater is pushed down to the "next" item of the list and the current character is then place in
 *			position 1 (or top of the list). 
 *			After all characters are added, the program pushs (prints) the top character in the list (stack) and
 *			then removes (pops) it from the list. This results in the inputted string to be outputted in reverse
 *			order.
 *
 *    Revision History:
 *
 *			2020/11/18 - Created Program
 *					   - Added input.c/.h and added function to dynamically recieve user input
 *					   - Added Character.c/.h and functions to provide a structure for each character
 *					   - Added Word.c/.h to provide a structure containing a list for each character in Character.c/.h
 *					   - Started Stack implentation using linked links, Created StackADT and StackNode .c/.h
 *          2020/11/19 - Added basic functions to create nodes in StackNode.c
 *					   - Added functions to StackADT.c to add (push) nodes/characters to the linked list
 *					   - Added functions to Character.c and Word.c in order to get character data from structures
 *							without introducing direct access
 *			2020/11/20 - Added functions to StackADT.c and Word.c to remove (pop) nodes/characters from the linked list
 *			2020/11/21 - Fixed add(push) functions in StackADT to move the head correctly (keeping head at the top instead of bottom)
 *			2020/11/22 - Finished commenting
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Character.h"
#include "Input.h"
#include "Word.h"

int main(void) {

	printf("Please enter a string: ");
	char* userString = getUserInput();

	char currLetter;

	//word 
	WORD w = createWord();

	//add characters to the word 
	//first letter is placed into a linked list and pushed down
	//by the following letters leaving the last letter as the first
	//item in linked list. The linked list represents the stack
	for (int i = 0; i < strlen(userString); i++) {
		currLetter = userString[i];
		pushCharacterToWord(&w, createCharacter(currLetter));
	
	}

	printf("\n");

	//The "top-most" letter in the linked list is printed and then
	//removed from (popped off) the linked list (Stack)
	for (int i = 0; i < strlen(userString); i++) {

		getHeadCharacterFromWord(&w);
		popHeadCharacterFromWord(&w);
		
	}

	printf("\n");

	//userinput is dynamic so we must free it after use
	free(userString);
	return 0;

}