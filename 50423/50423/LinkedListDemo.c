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
	struct Node* n = searchNode(list,5);
	printf("\n%d", n->key);
	deleteList(list);
	return 0;
}