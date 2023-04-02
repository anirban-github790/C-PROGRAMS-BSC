#include<stdio.h>
#include<process.h>
void push(int);
void pop();
void display();
int stack[100];
int top=-1;
void main()
{
	int choice,n;
	printf("Enter the size of the stack within 100:");
	scanf("%d",&n);
	do
	{
		printf("1.push\n2.pop\n3.display\n");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:
	    		push(n);
	    		break;
	    	case 2:
	    		pop();
	    		break;
	    	case 3:
	    		display();
	    		break;
	    	default:
	    		printf("Wrong choice\n");
		}
	}while(choice!=3);
}
void push(int max)
{
	int value,p;
    if(top>=(max-1))
    {
	    printf("Overflow\n");
	    exit(0);
	}
	printf("Enter the value:");
	scanf("%d",&value);
	stack[++top]=value;
	printf("Press 4 to push again:");
	scanf("%d",&p);
	if(p==4)
	    push(max);	
}
void pop()
{
	int p;
	if(top<=-1)
	{
		printf("Underflow\n");
		exit(0);
	}
	printf("the poped element is %d\n",stack[top--]);
	printf("Press 4 to pop again:");
	scanf("%d",&p);
	if(p==4)
	    pop();	
}
void display()
{
	if(top<=-1)
	{
		printf("The stack is empty\n");
		exit(0);
	}
	printf("The display element is\n");
	while(top>=0)
	{
		printf("%d\n",stack[top--]);
	}
}
