#include<stdio.h>
int main()
{
	double first, second, temp;
	
	printf("Enter the First value: ");
	scanf("%lf",&first);
	printf("Enter the Second value: ");
	scanf("%lf",&second);
	
	temp = first;
	first = second;
	second = temp;
	
	printf("\n after swaping, first number: %lf ", first);
	printf("\n after swaping, second number: %lf ", second);
	
	getch();
	return 0;
	
    	
}
