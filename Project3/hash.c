#include <stdio.h>
#include <stdlib.h>

#include "hash.h"
#include "global.h"

int hash(char* string) {
	
	int hashedNumber = 0, i = 0;
	
	for (i = 0; i < strlen(string); i++)
	{
		hashedNumber += string[i];
	}	

	hashedNumber %= NUMBER_OF_ROWS;

	return hashedNumber;
};
