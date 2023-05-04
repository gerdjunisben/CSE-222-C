#include "LinkedList.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


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
	if (list == NULL)
	{
		return temp;
	}
	else if (value<list->key)
	{
		temp->ptr = list;
		return temp;
	}
	struct Node* ptr = list;
	while (ptr->ptr != NULL)
	{
		struct Node* ptrN = ptr->ptr;
		if (ptr->key > value)
		{
			ptr->ptr = temp;
			temp->ptr = ptrN;
			return list;
		}
		else
		{
			ptr = ptrN;
		}
	}
	ptr->ptr = temp;
	return list;
	
	
	
	
}

struct Node* deleteNode(struct Node* list, int value) {
	if (list == NULL || list->ptr==NULL)
	{
		return NULL;
	}
	else if (list->key == value)
	{
		struct Node* next = list->ptr;
		free(list);
		return next;
	}
	struct Node* ptr = list;
	struct Node* ptrP =NULL;
	while (ptr->key != NULL)
	{
		
		if (ptr->key == value)
		{
			ptrP->ptr = ptr->ptr;
			free(ptr);
			return list;
		}
		else
		{
			ptrP = ptr;
			ptr = ptr->ptr;
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
	while (ptr != NULL)
	{
		printf("%d ",ptr->key);
		ptr = ptr->ptr;
	}
}

bool deleteList(struct Node* list)
{
	struct Node* ptr = list;
	while (ptr->ptr != NULL)
	{
		struct Node* ptrN = ptr->ptr;
		free(ptr);
		ptr = ptrN;
	}
	return true;
}