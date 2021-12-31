#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    clrscr();
    printf("Enter the element of 1st matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("elements of the 1st matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            printf("%d",a[i][j])
        }
    }
    return 0;
}
