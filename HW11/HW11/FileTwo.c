#include <stdbool.h>
#include <math.h>
#include "MyHeader.h"

bool isRightTriangle(double x0, double y0, double x1, double y1, double x2, double y2)
{
	bool res = false;

	int greatestX = findGreatest(x0, x1, x2);
	int greatestY = findGreatest(y0, y1, y2);
	int smallestX = findSmallest(x0, x1, x2);
	int smallestY = findSmallest(y0, y1, y2);
	int middleX = x0 + x1 + x2 - greatestX - smallestX;
	int middleY = y0 + y1 + y2 - greatestY - smallestY;

	if ((middleX == greatestX ^ middleX == smallestX) && (middleY==greatestY ^ middleY==smallestY))
	{
		res = true;
	}


	return res;
}

bool straightLine(double x0, double y0, double x1, double y1, double x2, double y2)
{
	bool res = false;

	double d1 = (calculateDistance(x0, 0, x1, 0));
	double d2 = (calculateDistance(x0, 0, x2, 0));
	double d3 = (calculateDistance(0, y0, 0, y1));
	double d4 = (calculateDistance(0, y0, 0, y2));

	if (tan(d3/d1)==tan(d4/d2))
	{
		res = true;
	}


	return res;
}