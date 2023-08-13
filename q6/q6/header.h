#pragma once

struct Record {
	int v1;
	float v2;
};

struct Record* createRecord(int, float);
void swapRecords(struct Record*, struct Record*);