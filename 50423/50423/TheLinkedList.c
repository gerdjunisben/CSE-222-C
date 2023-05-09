#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "LinkedList.h"

struct Node* createNode(int value)
{
	struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->key = value;
	ptr->ptr = NULL;
	return ptr;
}



struct Node* addNode(struct Node* list, int value)
{
	struct Node* temp = createNode(value);
	if (list == NULL)//if there is no list return the node
	{
		return temp;
	}
	else if (value<=list->key)//if the first value is less than or equal to value the temp node is our new first
	{
		temp->ptr = list;//temp points to first node
		return temp;
	}
	struct Node* ptr = list;//current node
	while (ptr->ptr != NULL)//while there is a next node
	{
		struct Node* ptrN = ptr->ptr;//next node
		if (ptr->key > value)
		{
			ptr->ptr = temp;//current node points to temp node
			temp->ptr = ptrN;//temp node points to next node effectively inserting it between ptr and ptrN
			return list;
		}
		else
		{
			ptr = ptrN;//current node = next node
		}
	}
	ptr->ptr = temp;
	return list;
	
	
	
	
}

struct Node* deleteNode(struct Node* list, int value) {
	if (list == NULL)//if the list is NULL return NULL
	{
		return NULL;
	}
	else if (list->key == value)//if the first node has the value free it and send the second node
	{
		struct Node* next = list->ptr;
		free(list);
		return next;
	}
	struct Node* ptr = list->ptr;//current node
	struct Node* ptrP =list;//previous node
	while (ptr != NULL)//while there is a current node
	{
		
		if (ptr->key == value)
		{
			ptrP->ptr = ptr->ptr;//previous node points to the node current points to
			free(ptr);//current is freed
			return list;
		}
		else
		{
			ptrP = ptr;//previous = current
			ptr = ptr->ptr;//current = next
		}
	}
	
}

struct Node* searchNode(struct Node* list, int value)
{
	struct Node* ptr = list;
	while (ptr->key != NULL)
	{
		if (ptr->key == value)
		{
			
			return ptr;
		}
		else
		{
			ptr = ptr->ptr;
		}
	}
	return NULL;
}

void display(struct Node* list)
{
	struct Node* ptr = list;
	while (ptr != NULL) //as long as there is a current node print the value of the current node
	{
		printf("%d ",ptr->key);
		ptr = ptr->ptr;
	}
}

bool deleteList(struct Node** list)//a pointer to a pointer so the pointer to the list is deleted as well
{
	struct Node* ptr = list;
	while (ptr->ptr != NULL) //if the current has a next node delete the current node and set current to next
	{
		struct Node* ptrN = ptr->ptr;
		free(ptr);
		ptr = ptrN;
	}
	free(ptr);//free the one remaining Node
	*list = NULL;
	return true;
}