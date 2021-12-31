#include<stdio.h>
int main()
{
	int intType;
	float floatType;
	char charType;
	double doubleType;
	
	//size of evaluation the variables
	printf("size of int : %ld bytes\n ",sizeof(intType));
	printf("size of float : %ld bytes\n",sizeof(floatType));
	printf("size of char : %ld bytes\n",sizeof(charType));
	printf("size of double : %ld bytes\n",sizeof(doubleType));
	
	getch();
	return 0;
}
