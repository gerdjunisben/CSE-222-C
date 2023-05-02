#include <stdio.h>

extern void swap(int* x, int* y);

//summary: * is used to declare pointers when on the right and to specify to use the value of a var when on the left, 
//& is used to specify to use the address of a var (this is always on the left)

/*commented to Functional.c will run
int main(void)
{
	int num1 = 100;
	int num2 = 200;
	int* x = &num1;//the * declares this variable as pointer, the & symbol tells it to take the address of the variable
	int* y = &num2;//a pointer is a variable that holds an address, the data type is only there so if you ask it to get or change its value it knows how many bytes from the pointer it needs to return

	printf("x=%d,x=%d", num1, *x);//these are equivalent (num1 and *x)

	*x = 120; // this puts 120 in the pointer x using the * operator

	swap(&num1, &num2);// by making these pointers (the addresses) we can treat these vars like they are byref

	printf("\nnum1=%d,num2=%d\n", num1, num2);//print the pointers to show it works


	//int a[5];//this is how you declare an array in c
	int a[] = { 1,2,3,5,7 };//this works too
	int len = 5;//you don't need a length var it's just nice to have
	int* p = a;//this is a pointer for array a, you can also do "int* p = &(a[0])" which is longer so don't do it

	//printf("\nelem 1 = %d, elem 3 = %d", *p, *(p + 2));//*(p+2) is the pointer + 2 words (4 bytes)

	for (int i = 0; i < len; i++)//my prefered solution
	{
		printf("Elem%d : %d\t", i, *(p + i));
	}

	printf("\n");

	for (int i = 0; i < len; i++,p++)//you will need to reset p at the end
	{
		printf("Elem%d : %d\t", i, *p);
	}
	p = a;

	//if you accidently leave the array you may or may not crash the program, be careful


	return 0;
}

void swap(int* x, int* y)//in cpp you can send the address, which is considered the best solution, however this cannot be done in c additionally overloading doesn't work
{
	int t = *x; //the value at address x is put in t
	*x = *y; //the value at address y is put in the value at address x
	*y = t; // the value in t is put in value at address y
}
*/


