#include <stdio.h>
#include <stdlib.h>

#include "array.h"
#include "linkedList.h"
#include "hash.h"

Node* fillArray(Node* array[], char* data[], int length) {

	for (int i = 0; i < length; i++)
	{
		Node* pointer = creerElement(data[i]);
		int position = hash(data[i]);
		if (array[position] == NULL) {
			array[position] = pointer;
		}
		else {
			Node* tmp = array[position];
			while (tmp->next)
			{
				tmp = tmp->next;
			}
			tmp->next = pointer;
		}
	}
	return array;
};

int printArray(Node* array[]) {
	int i = 0;
	while (i < NUMBER_OF_ROWS){
		printf("Node %d: ", i);
		if (array[i] == NULL) {
			printf("NULL");
		}
		else {
			Node* tmp = array[i];
			if (tmp->next == NULL) {
				printf("%s; ", tmp->data);
			}
			else {
				printf("%s; ", tmp->data);
				while (tmp->next) {
					printf("%s; ", tmp->next->data);
					tmp = tmp->next;
				}
			}
		}
		printf("\n");
		i++;
	}
	return 0;
};

Node* searchNode(Node* array[], char* data) {
	int position = hash(data);
	Node* tmp = array[position];
	if (tmp->data == data) {
		return tmp;
	}
	else if (tmp->next) {
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		return tmp;
	}
	else {
		return 0;
	}

};

