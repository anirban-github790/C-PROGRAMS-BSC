#include<stdio.h>
#include<conio.h>
#include<process.h>
int stack[30]={0};
int top=-1;
void push(int max);
void pop(void);
void peep(void);
void main()
{
	int choice,size;
	printf("Enter the size of the stack:");
	scanf("%d",&size);
	do
	{
		printf("1.Press 1 to push\n2.Press 2 to pop\n3.Press 3 to peep\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push(size);
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			default:
				printf("The wrong choice\n");
				exit(1);
				break;
		}
	}while(choice!=4);
	getch();
}
void push(max)
{
	int value,n;
	printf("Enter the value to insert:");
	scanf("%d",&value);
	if(top>=(max-1))
	printf("The stack is overflow\n");
	else
	{
		top++;
		stack[top]=value;
		printf("If you interested to push again then press 3:");
		scanf("%d",&n);
		if(n==3)
		push(max);
	}
}
void pop(void)
{
	int n;
	if(top<=-1)
	printf("The deletion will cause underflow\n");
	else
	{
	printf("The poped element is:%d",stack[top]);
	top--;
	printf("\nIf you interested to pop again then press 3:");
	scanf("%d",&n);
	if(n==3)
	pop();
    }
}	
void Display(void)
{
    int index;
    if(top<=-1)
    {
    	printf("No elements to display !\n");
	}
	else
	{
		index=top;
		printf("Elements in stack :\n");
		for(index=0;index<=top;index++)
		{
			printf("%d\n",Stack[index]);
		}
	}
	
}
