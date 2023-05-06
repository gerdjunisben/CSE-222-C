#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "BinarySearchTree.h"

int main(int argc, char* argv[])
{
	struct Node* tree = NULL;
	
	tree = insertNode(tree,4);
	tree = insertNode(tree, 5);
	tree = insertNode(tree, 1);
	tree = insertNode(tree, 2);
	tree = insertNode(tree, 3);

	printInOrder(tree);
	printf("\n");

	tree = deleteNode(tree, 2);

	printPreOrder(tree);
	printf("\n");
	
	struct Node* node = findNode(tree, 4);
	printf("%d",node->value);
	printf("\n");

	printPostOrder(tree);

	

	deleteTree(tree);

	return 0;
}