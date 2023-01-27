#include<stdio.h>
void fibonacci(int n,int t1,int t2)
{
	int t3;
	if(n>0)
	{
	t3=t1+t2;
	t1=t2;
	t2=t3;
	printf("%d\t",t3);
	fibonacci(n-1,t1,t2);
}
}
int main()
{
	int i,n;
	printf("enter the number of terms:");
	scanf("%d",&n);
	printf("fibonacci series:\n");
	printf("%d\t%d\t",0,1);
	fibonacci(n-2,0,1);
	return 0;
}