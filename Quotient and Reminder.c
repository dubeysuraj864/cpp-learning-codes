#include<stdio.h>
#include<conio.h>
int main()
{
	int quotient,dividend,divisor,reminder;
	printf("Enter dividend: ");
	scanf("%d",dividend);
	printf("Enter divisor: ");
	scanf("%d",divisor);
	
	quotient=dividend/divisor;
	reminder=dividend*divisor;
	
	printf("Quotient = %d\n",quotient);
	printf("Reminder = %d\n",reminder);
	
	getch();
	return 0;
	
}
