#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

Node* creerElement(char* data) {
	Node* el = malloc(sizeof(Node));
	el->data = data;
	el->next = NULL;
	return el;
};