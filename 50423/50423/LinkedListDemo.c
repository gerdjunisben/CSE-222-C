#include "LinkedList.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
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
	deleteList(list);
	return 0;
}