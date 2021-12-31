#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    double number, sum =0;

    do{
        printf("enter a number: ");
        scanf("%lf",&number);
        sum+= number;
    }
    while(number != 0.0);

    printf("sum = %.2lf", sum);
    
    return 0;
}
