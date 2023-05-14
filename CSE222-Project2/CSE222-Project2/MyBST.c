#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "BinarySearchTree.h"






struct Node* createNode(int value)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->left = NULL;
	temp->right = NULL;
	temp->value = value;
	return temp;
}


struct Node* insertNode(struct Node* tree, int value)
{
	if (tree == NULL)
	{
		tree = createNode(value);
		return tree;
	}
	else if (value < tree->value)
	{
		//printf("left ");
		tree->left = insertNode(tree->left, value);
	}
	else if(value>=tree->value)
	{
		//printf("right ");
		tree->right = insertNode(tree->right, value);
	}

	return tree;
	
}

struct Node* findNode(struct Node* tree, int value) {
	if(tree == NULL || tree->value == value)
	{
		return tree;
	}
	if (value < tree->value)
	{
		tree->left = findNode(tree->left, value);
	}
	else
	{
		tree->right = findNode(tree->right, value);
	}
}

struct Node* deleteNode(struct Node* tree, int value)
{
	if (tree == NULL)
		return tree;

	if (value < tree->value)
	{
		tree->left = deleteNode(tree->left, value);
	}
	else if (value > tree->value)
	{
		tree->right = deleteNode(tree->right, value);
	}
	else
	{
		if (tree->left == NULL)
		{
			struct Node* temp = tree->right;
			free(tree);
			return temp;
		}
		else if (tree->right == NULL)
		{
			struct Node* temp = tree->left;
			free(tree);
			return temp;
		}
		else
		{
			//find the smallest on the right side of the tree to be new successor
			struct Node* successor = tree->right;
			while (successor->left != NULL)
			{
				successor = successor->left;
			}
			tree->value = successor->value;
			deleteNode(tree->right, successor->value);
		}
	}
	return tree;
}

void printInOrder(struct Node* tree) {
	if (tree == NULL)
		return;

	printInOrder(tree->left);

	printf(" %d ", tree->value);

	printInOrder(tree->right); 
}


void printPreOrder(struct Node* tree)
{
	if (tree == NULL)
		return;

	printf(" %d ", tree->value);

	printInOrder(tree->left);

	printInOrder(tree->right);
}

void printPostOrder(struct Node* tree)
{
	if (tree == NULL)
		return;

	printInOrder(tree->left);

	printInOrder(tree->right);

	printf(" %d ", tree->value);
}

void deleteTree(struct Node** tree)
{
	if ((*tree) == NULL)
	{
		return;
	}

	deleteTree(&((*tree)->left));
	deleteTree(&((*tree)->right));
	//printf("\n%d is freed", (*tree)->value); //for testing purposes to make sure the memory is properly freed
	free(*tree);

}