#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int num, count, sum = 0;

    printf("Enter the a +ve integer: ");
    scanf("%d",&num);
    for(count=1; count<=num;++count)
    {
        sum += count;
    }
    printf("Sum = %d", sum);
    return 0;
}
