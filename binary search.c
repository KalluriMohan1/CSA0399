#include<stdio.h>
int binarysearch(int a[],int l,int h,int x)
{
	if(l<=h)
	{
		int m=(l+h)/2;
		if(a[m]==x)
		{
			return m;
		}
		else if(a[m]>x)
		{
			return binarysearch(a,l,m-1,x);
		}
		else
		{
			return binarysearch(a,m+1,h,x);
		}
	}
	return -1;
}
int main()
{
	int a[]={1,2,3,4,5};
	int n=5;
	int x=4;
	int r=binarysearch(a,0,n-1,x);
	if(r == -1)
	{
		printf("element is not present");
	}
	else
	{
		printf("element is found at index=%d",r);
	}
	return 0;
}