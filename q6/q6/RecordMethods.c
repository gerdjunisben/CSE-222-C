#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"


struct Record* createRecord(int v1, float v2) {
	struct Record* temp = (struct Record*)malloc(sizeof(struct Record));
	temp->v1 = v1;
	temp->v2 = v2;
	return temp;
}



void swapRecords(struct Record* r1, struct Record* r2) {
	struct Record temp = *r1;
	*r1 = *r2;
	*r2 = temp;
}
