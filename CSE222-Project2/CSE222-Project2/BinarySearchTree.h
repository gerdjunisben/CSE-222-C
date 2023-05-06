#pragma once

struct Node
{
	int value;
	struct Node* left;
	struct Node* right;
};

extern struct Node* createNode(int);
extern struct Node* insertNode(struct Node*, int);
extern struct Node* findNode(struct Node*, int);
extern struct Node* deleteNode(struct Node*, int);
extern void printInOrder(struct Node*);
extern void printPreOrder(struct Node*);
extern void printPostOrder(struct Node*);
extern void deleteTree(struct Node*);