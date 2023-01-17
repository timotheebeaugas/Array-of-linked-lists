#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"
#include "array.h"
#include "global.h"

int main(int argc, char* argv[]) {
	
	const char* data[] = {"Liam Smith", "Olivia Johnson", "Noah Williams", "Emma Brown", "Oliver Jones" , "Charlotte Miller", "Elijah Davis", "Amelia Garcia", "James Rodriguez", "Ava Wilson"};
	
	int length = sizeof(data) / sizeof(data[0]);

	Node* array[NUMBER_OF_ROWS] = { NULL };

	fillArray(array, data, length);

	printArray(array);

	Node* result = searchNode(array, "Emma Brown");

	if (result) {
		printf("%s found. \n", result->data);
	}
	else {
		printf("Data not found. \n");
	}

	return 0;

};