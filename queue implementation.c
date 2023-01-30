#include<stdio.h>
const int n=5;
int a[n],c,rear=-1,front=-1,x,i;
void insert();
void delet();
void display();
int main()
{
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
if(rear==n-1)
{
	printf("\noverflow\n");
	}	
else
{
	if(front==-1)
	front=0;
	printf("\nenter a value to be inserted:");
	scanf("%d",&x);
	rear=rear+1;
	a[rear]=x;
}
}
void delet()
{
	if(front==-1)
	{
		printf("\nunderflow");
	}
	else
	{
		printf("the deleted element = %d",a[front]);
		front=front+1;
	}
}
void display()
{
	if(front>=0)
	{
	for(int i=front;i<=rear;i++)
	{
		printf("%d\t",a[i]);
	}
    }
    else
    {
    	printf("empty stack");
	}
}