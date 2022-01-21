//structure of the ADT used to make a linked list

#pragma once
#include <stdbool.h>
#include "StackNode.h"
#include "Character.h"

typedef struct StackADT {

	PSNODE head;

}STACK, *PSTACK;

STACK createStack();
bool pushCharacterToStack(PSTACK, CHARACTER);
bool popHeadCharacterFromStack(PSTACK);
char getHeadNodeCharacterFromStack(PSTACK);