#include <stdio.h> //this is the library with printf
#include <stdbool.h>
#include <string.h>

int main(void) //void is assumed if no argument is given, notice that there is no visibility this is because everything in c is global
{
	printf("Hello C\n"); //works like printf in java
	int num = 47;
	//printf(num); //c does not assume num is an integer so this will throw an error (this applies to all non strings), you must treat it as a var in printf as seen below
	printf("%d\n", num);
	int x, y, z;
	x = y = z = 3;//you can set multiple vars to the same num like so
	printf("%d %d %d\n", x, y, z);
	x ^= 3;//unlike java exponents are built in
	int i;//c doesn't have bytes
	double d;
	float f;
	long l;
	short s;
	char c;
	bool b;//c doesn't natively support booleans so you must include <stdbool.h>
	printf("%lu %lu %lu %lu %lu %lu %lu\n", sizeof(i), sizeof(d), sizeof(f), sizeof(l), sizeof(s), sizeof(c), sizeof(b));// the sizeof operator which prints the size of the variable in memory and %lu prints an usigned long which is the result of sizeof()
	b = false;
	b ? printf("true\n") : printf("false\n"); //conditional operator is common in c, if and switch work exactly the same as in java, as does for while and do-while loops
	for (int i = 0; i < 10; i++)
	{
		if (i == 4)//this skips 4
		{
			continue;
		}
		printf("%d\n",i);
	}
	//arrays do not know their own length but you can use sizeof()
	//Strings don't exist instead you use arrays of chars
	char str[20] = "hello";
	printf("%s\n", str);//to print a string simply use %s
	//you may include <string.h> to get additional string methods
	printf("%d\n", strlen(str));
	printf("%d\n", sizeof(str));//size of returns the amount of bytes which is one greater than the length or if you declared the char array to a size then that size
	char str2[] = " world";
	strcat_s(str, str2);//strcat_s concatinates str2 to the end of str, if str is not large enough memory leakage is possible
	char str3[50];
	strcpy_s(str3, str);//strcpy_s copies str into str3
	if (strcmp(str3, str)==0)//strcmp returns 0 if they are equal
	{
		printf("they are the same");
	}
	else
	{
		printf("they are not the same");
	}

	return 0;//our return type is int so we have to return an int
}