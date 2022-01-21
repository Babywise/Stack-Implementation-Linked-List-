//structure of the nodes used in the linked list

#pragma once
#include "Character.h"

typedef struct stacknode {

	CHARACTER nodeData;
	struct stacknode* next;

}SNODE, *PSNODE;

PSNODE createStackNode(CHARACTER);
PSNODE getNextStackNode(PSNODE);
void setNextStackNode(PSNODE, PSNODE);
char getCharacterFromStackNode(PSNODE);
void popStackNode(PSNODE);