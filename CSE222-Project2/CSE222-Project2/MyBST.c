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
	struct Node* temp = createNode(value);
	if (tree == NULL)
	{
		return temp;
	}
	struct Node* previous = NULL;
	struct Node* current = tree;
	while (current != NULL)
	{
		previous = current;
		if (current->value > value)
		{
			current = current->left;
		}
		else
		{
			current = current->right;
		}
	}
	if (previous->value > value)
		previous->left = temp;
	else
		previous->right = temp;

	return tree;
	
}

struct Node* findNode(struct Node* tree, int value) {
	struct Node* current = tree;
	while (current != NULL)
	{
		if (current->value > value)
		{
			current = current->left;
		}
		else if(current->value < value)
		{
			current = current->right;
		}
		else
		{
			return current;
		}
	}
	return NULL;
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
			free(successor);
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

void deleteTree(struct Node* tree)
{
	if (tree == NULL)
	{
		return;
	}

	deleteTree(tree->left);
	deleteTree(tree->right);

	free(tree);
}