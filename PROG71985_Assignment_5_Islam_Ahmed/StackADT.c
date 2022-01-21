//functions to create a linked list,
//add (push) items to the linked list while moving the head to the top of the list (stack)
//remove (pop) the head item from the linked list (stack) and
//get the current character from the head node (top of the stack)

#include <stdlib.h>
#include "StackADT.h"
#include "Character.h"

STACK createStack() {

	STACK newStack = { 0 };
	return newStack;

}

bool pushCharacterToStack(PSTACK thisStack, CHARACTER letter) {

	PSNODE newStackNode = createStackNode(letter);
	
	if (!newStackNode) {

		return false;

	}

	//if list is empty
	if (thisStack->head == NULL) { 

		thisStack->head = newStackNode;
		
	} else {

		//sets new nodes->next to the head linking the the previous node to the current node
		setNextStackNode(newStackNode, thisStack->head);
		//moves the head to the new node
		thisStack->head = newStackNode;
		
	}

	return true;

}

bool popHeadCharacterFromStack(PSTACK thisStack) {

	if (thisStack->head == NULL) {

		return false;

	} else {

		//sets the head to a temp node and moves the head to the next node
		//then frees the topmost node
		PSNODE currStackNode = thisStack->head;
		thisStack->head = getNextStackNode(thisStack->head);
		popStackNode(currStackNode);

		return true;

	}

}

char getHeadNodeCharacterFromStack(PSTACK thisStack) {

	if (thisStack->head == NULL) {

		return;

	} else {

		return getCharacterFromStackNode(thisStack->head);

	}

}