#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, result;
    printf("Please Enter the first value: \n");
    scanf("%d",&a);
    printf("Now enter the second value: \n");
    scanf("%d",&b);
    printf("Now enter the third value: \n");
    scanf("%d",&c);

    printf("We're going to multiply 3 values which you have entered: ^_^\n");

    result = a * b * c;

    printf(" Your result is : %d", result);

    return 0;
}
