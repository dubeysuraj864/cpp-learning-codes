#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 1,b =2, c=3, swipe ;
    printf("a=1\n b=2\n c=3\n");
    printf("Do you want reverse this two numbers \n");

    swipe = a;
    a = b;
    b = c;
    c = swipe;

    printf(" a = %d \n b = %d\n c = %d",a,b,c);
    
    return 0;
}
