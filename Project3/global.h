#pragma once

#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_ROWS 10

typedef struct Node Node;

struct Node
{
	char* data;
	Node* next;
};