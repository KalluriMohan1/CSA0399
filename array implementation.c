#include<stdio.h>
int a[20],c,n,pos,x,i;
void insert();
void delet();
void display();
int main()
{
	printf("enetr the size of array:");
	scanf("%d",&n);
printf("enter the elemnts of array");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
	do
	{
	printf("\nenter the operation:\n");
	printf("1.for push\n2.forpop\n3.for display");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			insert();break;
	    case 2:
	    	delet();break;
	    case 3:
	    	display();break;
	    default:
	    	printf("no operation");break;		
	}
    }
    while(c!=4);
	return 0;	
}
void insert()
{
	printf("enter the position and element to be inserted:\n");
	scanf("%d%d",&pos,&x);
	printf("before insertion elements are:\n");
	for(i=0;i<n;i++)
    {
	printf("%d\t",a[i]);
	}	
	if(pos>n)
	{
		printf("invalid input");
	}
	else
	{
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
		a[pos-1]=x;
	}
    }
	printf("after insertion elements are: ");
    for(i=0;i<n;i++)
    {
	printf("%d\t",a[i]);
	}	
}
void delet()
{
	printf("enter the position to be deleted:");
	scanf("%d",&pos);
}