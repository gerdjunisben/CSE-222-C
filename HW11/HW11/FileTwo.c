#include <stdbool.h>
#include <math.h>
#include "MyHeader.h"

bool isRightTriangle(double x0, double y0, double x1, double y1, double x2, double y2)
{
	bool res = false;

	double d1 = ((int)(pow(calculateDistance(x0, y0, x1, x1),2) * 10000 + 0.5)) / 10000;
	double d2 = ((int)(pow(calculateDistance(x1, y1, x2, x2),2) * 10000 + 0.5)) / 10000;
	double d3 = ((int)(pow(calculateDistance(x2, y2, x0, y0),2) * 10000 + 0.5)) / 10000;

	if (d1+d2 == d3 || d2+d3 == d1 || d1+d3 == d2)
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