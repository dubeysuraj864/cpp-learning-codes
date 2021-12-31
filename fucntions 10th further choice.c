#include<stdio.h>
#include<conio.h>
main()
{   int i;
	printf("have you passed out 10th class\n 1. Yes\n 2. No ");
	scanf("%d",i);
	
	if (i==1){
		printf("you are eligible to entering further career ");
		return 0;
	}
	else {
		printf("sorry, you are not eligible go further ");
		return 0;
	}
	getch();
	return 0;
}
