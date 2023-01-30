#include<stdio.h>
int c,top,x,i;
const int n=5;
struct stack
{
	int stk[n];
	int top;
};
typedef struct stack STACK;
STACK s;
void push();
void pop();
void display();
int main()
{
	s.top=-1;
	do
	{
	printf("1.for push\n2.forpop\n3.for display");
	printf("\nenter the operation:\n");
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
if(s.top>=n-1)
{
	printf("\noverflow");
	}	
else
{
	printf("\nenter a value to be inserted:");
	scanf("%d",&x);
	s.top=s.top+1;
	s.stk[s.top]=x;
}
}
void pop()
{
	if(s.top<=-1)
	{
		printf("\nunderflow");
	}
	else
	{
		printf("the deleted element = %d",s.stk[s.top]);
		s.top=s.top-1;
	}
}
void display()
{
	if(s.top>=0)
	{
	for(int i=s.top;i>=0;i--)
	{
		printf("%d\t",s.stk[i]);
	}
    }
    else
    {
    	printf("empty stack");
	}
}