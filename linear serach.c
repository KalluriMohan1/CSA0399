#include<stdio.h>
int main()
{
	int i,j,n,a[10],key;
	printf("enter the number of elements in array:");
	scanf("%d",&n);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("element %d is found at index %d",key,i);
		}
	}
	return 0;
}