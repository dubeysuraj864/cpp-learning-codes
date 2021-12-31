#include<stdio.h>
int main(int argc, char const *argv[])
{
    char *fruits[] = {"Apple", "Banana", "Mango", "Lichy"};
    fruits[3]="Grapes";
    printf("%s", fruits[1]);
    for(size_t i=0; i<4; i++ )
    {
        printf("%s\n", fruits[i]);
    }
}