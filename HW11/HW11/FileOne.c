#include <math.h>

int findGreatest(int x, int y, int z)
{
	int res = z;

	if(x >= y && y >= z)
	{
		res = x;
	}
	else if (y >= z)
	{
		res = y;
	}

	return res;
}

int findSmallest(int x, int y, int z)
{
	int res=z;

	if (x <= y && y <= z)
	{
		res = x;
	}
	else if (y <= z)
	{
		res = y;
	}

	return res;
}

double calculateDistance(double x0, double y0, double x1, double y1)
{
	return sqrt((pow((x0 + x1), 2) + pow((y0 + y1), 2)));
}

