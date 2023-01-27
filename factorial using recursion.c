#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int i,j,n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("factorial of %d = %d",n,fact(n));
	return 0;
}