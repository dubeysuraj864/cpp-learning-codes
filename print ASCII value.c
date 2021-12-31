#include<stdio.h>
int main()
{
	char c;
	printf("enter a character value: ");
	scanf("%c",&c);
	// %d displays the integer value of a character
	// %c displays the actual character
	printf("ASCII value of %c = %d",c,c);
	
	getch();
	return 0;
}
