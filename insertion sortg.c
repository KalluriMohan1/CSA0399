#include<stdio.h>
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void insertionsort(int a[],int n)
{
   for(int i=1;i<n;i++)
   {
   	int j=a[i];
   	int k=i-1;
    while(j<a[k] && k>=0)
	{
	a[k+1]=a[k];
	--k;	
	}
	a[k+1]=j;   	
   }
}
int main()
{
	int i,j,n,a[20],t;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("before sorting of elements:");
	printarray(a,n);
	insertionsort(a,n);
	printf("\nafter sorting elements:");
	printarray(a,n);
	return 0;
}