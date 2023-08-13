#include <stdio.h>
#include "LinkedList.h"

int main(int argc, char* argv[])
{
	/*
	struct Node* list = NULL;
	list = addNode(list, 5);
	list = addNode(list, 8);
	list = addNode(list, 2);
	list = addNode(list, 9);
	display(list);
	printf("\n");
	list = deleteNode(list, 2);
	display(list);
	printf("\n");
	list = deleteNode(list, 9);
	display(list);
	struct Node* n = searchNode(list,5);
	printf("\n%d", n->key);
	deleteList(&list);*/
	int x = 10;
	int* ptr = &x;
	*ptr = *ptr + 2;
	printf("%d", *ptr);
	x += 5;
	printf("%d", *ptr);
	return 0;
}