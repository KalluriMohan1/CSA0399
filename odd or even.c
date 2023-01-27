#include<stdio.h>
int main()
{
	int i,j,n,a[20],odd=0,even=0;
	printf("enter the number of elements in array;");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2 == 0)
		{
			even = even+1;
			
		}
		else
		{
			odd = odd+1;
		}
	}
	printf("number of odd = %d\nnumber of even = %d",odd,even);
	return 0;
}