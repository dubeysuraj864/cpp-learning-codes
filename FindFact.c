#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i;
    long int fact;
    printf("Enter An Integer: \n");
    scanf("%d",&num);
    fact = 1;

    for(i=num;i>=1;i--)
    fact = fact*i;
    printf("Factorial of %d = %ld\n ",num,fact);
    return 0;
}