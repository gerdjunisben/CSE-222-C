#include "MyClass.h"



MyClass::MyClass()//cpp does not automatically create a default constructor unlike java
{
	this->x = 0;
	this->y = 0.0;
	this->ptr = new int;
	*this->ptr = 10;
}

MyClass::MyClass(int x,float y)
{
	this->x = x;
	this->y = y;
	this->ptr = new int;
	*this->ptr = 1234;
}

MyClass::~MyClass()//destructor
{
	if (ptr != nullptr)
	{
		delete ptr;
	}
}


float MyClass::sum()
{
	return x + y;
}