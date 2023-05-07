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
	tree = insertNode(tree, 4);//numbers already in the tree will not be added

	tree = deleteNode(tree, 2);
	tree = deleteNode(tree, 20);

	tree = insertNode(tree, 10);
	tree = insertNode(tree, 0);
	tree = insertNode(tree, 2);
	tree = insertNode(tree, 3);
	
	struct Node* node = findNode(tree, 4);
	printf("\n%d",node->value);
	printf("\n");

	printInOrder(tree);
	printf("\n");
	printPostOrder(tree);
	printf("\n");
	printPreOrder(tree);

	

	deleteTree(tree);

	return 0;
}