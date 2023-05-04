#pragma once
#include <stdbool.h>

struct Node {
	int key;
	struct Node* ptr;
};

typedef struct Node MyNode;// you now may call "struct Node" "MyNode"

/* typedef can also be called like this
typedef struct LongName{
	int num;
} Name;
*/

extern struct Node* createNode(int);
extern struct Node* addNode(struct Node*,int);
extern struct Node* deleteNode(struct Node*,int);
extern struct Node* searchNode(struct Node*, int);
extern void display(struct Node*);
extern bool deleteList(struct Node*);


