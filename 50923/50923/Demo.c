#include <stdlib.h>
#include <stdio.h>

extern int funct_math(int,int,int(*funct_ptr)(int,int));
extern int add(int, int);
extern int sub(int, int);

int main(int argc, char* argv[])
{
	int a = 0;

	scanf_s("%d", &a);//takes input as decimal and puts it in address of a
	//you must use scanf_s instead of scanf or there will be an error
	//you may go into properties to stop this from throwing an error
	
	printf("%d", a);

	int (*funct_ptr)(int, int);
	funct_ptr = add;
	int c = funct_ptr(a, 7);

	int d = funct_math(2, 3, add);
	int e = funct_math(2, 3, sub);


	return 0;
}

int funct_math(int x, int y, int(*funct_ptr)(int, int))
{
	return funct_ptr(x, y);
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}