#pragma once
#include <iostream>
class MyClass
{
private:
	int x;
	float y;
	int* ptr;

public://you generally want to declare constructor, destructors, operators and than other functions in that order
	//constructor
	MyClass();
	MyClass(int x, float y);
	MyClass(const MyClass&);//copy constructor

	//destructor
	//~MyClass() {}; if there are no pointers
	~MyClass();//~ClassName declares a destructor

	//this is how you overwrite operators
	//operator+(MyClass cls); //don't do this
	MyClass operator+(MyClass&); //using a reference will stop an object from being created
	MyClass& operator=(MyClass&);
	//there is a performance difference between ++x and x++, ++x is more efficient since you must create another object for x++ to properly execute the postfix
	MyClass operator++(int);
	MyClass& operator++();

	
	
	float sum();

	friend std::ostream& operator<<(std::ostream& out, MyClass& cls); // this keyword kind of violates encapsulation but may have benefits for performance


};

