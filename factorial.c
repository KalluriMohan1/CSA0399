#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number:");
	scanf("%d",&n);
	j=1;
	for(i=1;i<=n;i++)
	{
		j=j*i;
	}
	printf("factorial of %d = %d",n,j);
	return 0;
}