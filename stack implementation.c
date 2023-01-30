#include<stdio.h>
int a[20],c,n,top,x,i;
void push();
void pop();
void display();
int main()
{
	top=-1;
	printf("enetr the number of elements in stack:");
	scanf("%d",&n);
	do
	{
	printf("\nenter the operation:\n");
	printf("1.for push\n2.forpop\n3.for display");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			push();break;
	    case 2:
	    	pop();break;
	    case 3:
	    	display();break;
	    default:
	    	printf("no operation");break;		
	}
    }
    while(c!=4);
	return 0;	
}
void push()
{
if(top>=n-1)
{
	printf("\noverflow");
	}	
else
{
	printf("\nenter a value to be inserted:");
	scanf("%d",&x);
	top=top+1;
	a[top]=x;
}
}
void pop()
{
	if(top<=-1)
	{
		printf("\nunderflow");
	}
	else
	{
		printf("the deleted element = %d",a[top]);
		top=top-1;
	}
}
void display()
{
	if(top>=0)
	{
	for(int i=top;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
    }
    else
    {
    	printf("empty stack");
	}
}