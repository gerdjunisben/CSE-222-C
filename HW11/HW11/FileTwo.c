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

	if (middleX == middleY)
	{
		res = true;
	}

	/* 
	if ((x0==x1 && y1 == y2) || (x1==x2 && y2==y0) || (x2==x0 && y0==y1 ))
	{
		res = true;
	}
	*/

	return res;
}

bool straightLine(double x0, double y0, double x1, double y1, double x2, double y2)
{
	bool res = false;

	int d1 = (int)(calculateDistance(x0, y0, x1, y1)+0.5);
	int d2 = (int)(calculateDistance(x1, y1, x2, y2)+0.5);
	int d3 = (int)(calculateDistance(x2, y2, x0, y0)+0.5);
	int gd = findGreatest(d1, d2, d3);
	int sd = findSmallest(d1, d2, d3);
	int md = d1 + d2 + d3 - gd - sd;

	if ((md + sd) == gd)
	{
		res = true;
	}

	/*
	if (x1!=0 && (tan(((y0+y1)/(x0+x1))) == tan(((y1+y2)/(x1+x2)))))
	{
		res = true;
	}
	*/

	return res;
}