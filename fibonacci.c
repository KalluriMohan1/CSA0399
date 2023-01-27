#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("enter the number of terms:");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
	return 0;
}