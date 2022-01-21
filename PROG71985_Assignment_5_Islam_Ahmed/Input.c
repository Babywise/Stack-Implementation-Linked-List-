//program for getting user input dynamically that I made in Assignment 4 Part 2
//with changes to allocation (now size increases by 1 byte each iteration instead of doubling each iteration)

#include "Input.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getUserInput() {

	int maxCount = sizeof(char);
	char* userInput = (char*)malloc(sizeof(char));
	memset(userInput, NULL, sizeof(char));

	if (userInput == NULL) {

		printf("Memory could not be allocated");
		exit(EXIT_FAILURE);

	} else {

		char ch = NULL;
		int i = 0;

		//Accept input until user hits enter
		while ((ch = getchar()) != '\n' && ch != NULL) {

			userInput[i] = ch;
			i++;

			//if input is longer than 1 byte allocated size increases by 1
			if (i == maxCount) {

				maxCount += i;
				userInput = (char*)realloc(userInput, maxCount * sizeof(char));

				if (userInput == NULL) {

					printf("Memory could not be re-allocated");
					exit(EXIT_FAILURE);

				}
			}
		}

		//replaces last char '\n' with NULL
		userInput[i] = NULL;

	}

	return userInput;

}