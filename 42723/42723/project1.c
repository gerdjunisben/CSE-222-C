#include <stdio.h>//angle brackets refer to C or visual studio libraries
#include "header.h"//quotes refer to your header files

//extern void swapNums(int x, int y);// methods must be declared before they are used using the extern keyword, these methods may be later in the file or in another file
//we have to do this for all methods we want or we can move them into a header file and use #include on the header file

int main(void)
{
#ifdef _DEBUG //this code will only be in debug mode
	printf("Hello C");
#endif

	//GNU GNU is Not Unix (it's not open-source)
	//GNU contains the GCC GNU Collection of Compilers
	//MinGW is a mini GCC
	//Apache makes Clang which also compiles C
	//There is a standard version of C++ (we're currently on version 17, next will likely be 23) 

	unsigned int ui = 9;//you can designate a variable as unsigned
	unsigned short int usi = 2;//you can declare a short as a "short int"
	char c = 'a';//chars are 1 byte in C while they are 2 bytes in java, this means you can only save an ascii char (in java you can save unicode)
	int i = 2;//C may use 4 or 2 bytes to store an int depending on the compiler
	printf("\n%d", sizeof(i));//you can use sizeof to check (mine is 4 bytes);

	
	int x = 0;
	int y = 1;
	swapNums(x, y);
	printf("\n%d %d", x, y);//byval for primitives

	printf("\n%d", MYCONST);

	return 0;
}


