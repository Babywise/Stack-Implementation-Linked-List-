//functions to create a node with a .next as null and
//getting the .next of any given node and
//setting the .next of any given node and
//getting the nodeData (character) from any given node and
//freeing allocated memory from any given node

#include <stdio.h>
#include <stdlib.h>
#include "StackNode.h"

PSNODE createStackNode(CHARACTER letter) {

	PSNODE newNode = (PSNODE)malloc(sizeof(SNODE));

	if (!newNode) {

		fprintf(stderr, "error allocating memory\n");
		return (PSNODE)NULL;
	}

	newNode->nodeData = letter;
	newNode->next = NULL;

	return newNode;

}

PSNODE getNextStackNode(PSNODE stackNode) {

	return stackNode->next;

}

void setNextStackNode(PSNODE sourceStackNode, PSNODE newNextStackNode) {

	sourceStackNode->next = newNextStackNode;

}

char getCharacterFromStackNode(PSNODE stackNode){

	return getCharacter(stackNode->nodeData);

}

void popStackNode(PSNODE stackNode) {

	free(stackNode);

}