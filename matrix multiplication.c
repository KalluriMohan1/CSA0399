#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3],k,m,n,p,q;
	printf("enter the number of rows and columns of first matrix:");
	scanf("%d%d",&m,&n);
	printf("enter the elements of first matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	printf("enter the number of rows and columns of second matrix:");
	scanf("%d%d",&p,&q);
	printf("enter the elements of first matrix:");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		scanf("%d",&b[i][j]);
	    }
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
		c[i][j]=0;
		for(k=0;k<p;k++)
		{
			c[i][j]+=a[i][k]*b[k][j];
		}
	}
}
printf("multiplied matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
		printf("%d\t",c[i][j]);
	    }
	    printf("\n");
	}
}