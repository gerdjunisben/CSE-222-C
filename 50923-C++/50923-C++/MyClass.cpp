#include <iostream>
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

MyClass::MyClass(const MyClass& cls)//in cpp you should always create a copy constructor
{
	this->x = cls.x;
	this->y = cls.y;
	this->ptr = new int;//this creates a new pointer pointing at the same value at a different location
	*this->ptr = *(cls.ptr);
}

MyClass MyClass::operator+(MyClass& cls)
{
	MyClass cls0;
	cls0.x = this->x + cls.x;
	cls0.y = this->y + cls.y;
	*(cls0.ptr) = *this->ptr + *cls.ptr;
	return cls0;
}

MyClass& MyClass::operator=(MyClass& cls)
{

	x = cls.x;
	y = cls.y;
	*ptr = *cls.ptr;

	return *this;
}

//post
MyClass MyClass::operator++(int dummy)
{
	MyClass temp;
	temp.x = this->x;
	temp.y = this->y;
	*(temp.ptr) = *(this->ptr);

	x++;
	y++;
	*ptr = ++(*ptr);

	//MyClass* p = new MyClass; //this will not have the issue on the next line since the pointer is the one with the scope of the method
	return temp;//if you returned a pointer it would point to nothing due to the scope of temp being that of the method, new versions of cpp will not have this issue however it's better to be safe than sorry
}

//pre
MyClass& MyClass::operator++()
{
	++x;
	++y;
	*ptr = ++(*ptr);
	return *this;
}

MyClass::~MyClass()//destructor, in cpp you should define one that deletes all ptrs in the class
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

std::ostream& operator<<(std::ostream& out, MyClass& cls)//kind of like to String, overwrites our friend operator << to define how it should be printed
{
	return out << "MyClass(" << cls.x << "," << cls.y << ")" << std::endl;
}