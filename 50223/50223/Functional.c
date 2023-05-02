#include <stdio.h>

extern int funct_math(int x,int y, int(*funct_ptr)(int,int));
extern int add(int x, int y);
extern int sub(int x, int y);


int main(int argc, char*argv[])//this is the main method header for c, notice that this is literally "String[] args" from java
{

	//return_type (*"ptr_name")(arg1,arg2,...,argn);
	int (*funct_ptr)(int, int);//this is a function pointer for a method that returns an int and takes two ints as arguments
	funct_ptr = add;
	int res = funct_ptr(2, 3);
	printf("%d\n", res);
	funct_ptr = sub;
	res = funct_ptr(2, 3);
	printf("%d\n", res);

	res = funct_math(2, 5, add);//the idea of a function pointer is to act like a lambda expression so we can add some functional programming to c
	printf("%d\n", res);

	//failure to delete things when you are done referencing them will cause memory leakage
	//we use the delete keyword to call the destructor of an object in c++ to stop memory leakage
	//in c we use malloc(int size_in_bytes)

	//int* ptr = (int*)malloc(20);//allocates 20 bytes of memory under an integer pointer
	int* ptr1 = (int*)malloc(5 * sizeof(int));//this is the professional way to allocate the memory since it makes the amount of elems clearer and it makes it work with multiple c compilers since the size of an integer varies
	//int* ptr2 = (int*)calloc(5,sizeof(int));//this just skips the math, use the other it's better
	//int* ptr3 = (int*)realloc(ptr2,7*sizeof(int));//copies ptr2 data to ptr3 with additional space (28 bytes, enough for 7 more ints)
	free(ptr1);//this frees the 20 bytes we allocated

	struct student {
		double gpa;
		char grade;
	};

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