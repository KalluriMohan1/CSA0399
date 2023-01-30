#include<stdio.h>
int n;
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}
void merge(int a[],int l,int m,int h)
{

	int c=m-l+1;
	int b=h-m;
	int y[c],r[b];
	for(int i=0;i<c;i++)
	{
		y[i]=a[l+i];
	}
	for(int j=0;j<b;j++)
	{
		r[j]=a[m+1+j];
	}
	int i=0;
	int j=0;
	int k=l;
	while(i<c && j<b)
	{
		if(y[i]<=r[j])
		{
		a[k]=y[i];
		i++;	
		}
		else
		{
			a[k]=r[j];
			j++;
		}
		k++;
	}
	while(i<c)
	{
		a[k]=y[i];
		i++;
		k++;
	}
	while(j<b)
	{
		a[k]=r[j];
		j++;
		k++;
	}
}
void mergesort(int a[],int l,int h)
{
	if(l<h)
	{
		int m=(l+h)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,h);
		merge(a,l,m,h);
	}
}
int main()
{
	int i,j,a[20],l,m,h;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=0,h=n-1;
	printf("before sorting of elements:");
	printarray(a,n);
	mergesort(a,l,h);
	printf("\nafter sorting elements:");
	printarray(a,n);
	return 0;
}