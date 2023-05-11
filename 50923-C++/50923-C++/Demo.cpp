#include <iostream>
#include "MyClass.h"

extern void swap(int&, int&);
extern void demoRef(MyClass&);

int main(void)
{
	std::cout << "Hello CPP " << 10 << "<--number" << std::endl;//std is the namespace, cout and endl are classes from std. cout means characters out and endl means end line

	
	//MyClass cls;//creates new MyClass

	//MyClass* pCls = nullptr;
	//pCls = &cls;//pCls points to cls

	MyClass* pCls2 = new MyClass();//pCls2 points to a new MyClass

	//demoRef(cls);
	/*
	if (pCls != nullptr)
	{
		delete pCls;
		pCls = nullptr;
	}*/
	if (pCls2!= nullptr)
	{
		delete pCls2;
		pCls2= nullptr;
	}
	
	int x = 10;
	int& y = x;//y references x, changes to y effect x and changes to x effect y. In other words y is x, x is y.
	y = 20;
	x = 15;

	int a = 10;
	int b = 20;

	swap(a, b);

	std::cout << a << " " << b << std::endl;


	MyClass c1;
	MyClass c2(10, 20);

	MyClass c3 = c1 + c2;//we overloaded = and +

	c3++;
	++c3;

	std::cout << c3 << std::endl;
	

	return 0;
}



void demoRef(MyClass& m)//not including the & will make it create a new object each time it's called, by using the & we reference the object passed rather than making a new one
{
	return;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}