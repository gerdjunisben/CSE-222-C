#pragma once
class MyClass
{
private:
	int x;
	float y;
	int* ptr;

public:
	//constructor
	MyClass();
	MyClass(int x, float y);

	//destructor
	//~MyClass() {}; if there are no pointers
	~MyClass();//~ClassName declares a destructor
	
	float sum();

};

