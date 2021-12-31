#include<stdio.h>
#include<conio.h>

int add (int, int);

main()
{
	int a,b,ans;
	printf("\n enter the two numbers: ");
	scanf("%d%d",&a,&b);
	ans = add(a,b);
	printf("Addiction: %d\n",ans);
}
int add (int n, int m)
{
	int c;
	c = n + m;
	return(n + m);
}
