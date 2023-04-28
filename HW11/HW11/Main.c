#include "MyHeaderTwo.h"
#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool b1 = isRightTriangle(0, 0, 1, 0, 0, 1);
	bool b2 = straightLine(0, 0, 1, 1, 2, 2);
	if (b1 && b2)
	{
		printf("They both worked");
	}
	else if (b1)
	{
		printf("straight line failled");
	}
	else if (b2)
	{
		printf("right triangle failled");
	}
	else
	{
		printf("They both failled");
	}
	return 0;
}