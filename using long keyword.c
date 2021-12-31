#include<stdio.h>
int main()
{
     int a;
     long int b;              //equivalent to long b
     long long int c;         //equivalent to long long int c
     double d;
     long double e;
     
     printf("size of int : %zu bytes \n",sizeof(a));
     printf("size of long : %zu bytes \n",sizeof(b));
     printf("size of long long int : %zu bytes \n",sizeof(c));
     printf("size of double : %zu bytes \n",sizeof(d));
     printf("size of long double : %zu bytes \n",sizeof(e));
     
     getch();
     return 0;
}
