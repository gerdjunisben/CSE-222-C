#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main(int argc, char* argv[])
{
	struct Record record1;
	record1.v1 = 10;
	record1.v2 = 20;

	struct Record* pRecord = createRecord(30, 40);

	printf("Record 1: v1:%d v2:%f\n", record1.v1, record1.v2);
	printf("Record 2: v1:%d v2:%f\n", pRecord->v1, pRecord->v2);

	swapRecords(&record1, pRecord);

	printf("Record 1: v1:%d v2:%f\n", record1.v1, record1.v2);
	printf("Record 2: v1:%d v2:%f\n", pRecord->v1, pRecord->v2);

	return 0;
}