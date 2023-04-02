#include<stdio.h>
#include<stdlib.h>
void push(int max);
void pop();
void peep();
int *p;
int top=-1;
void main()
{
	int i,choice,h,max;
	printf("Enter the size:");
	scanf("%d",&max);
	do
	{
		printf("1.push\n2.pop\n3.peep\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				p=(int*)malloc(max*sizeof(int));
				push(max);
				break;
			case 2:
				pop();
				break;
			case 3:
				peep();
				break;
			default:
				printf("Wrong choice\n");
				exit(1);
		}
	}while(h!=3);
}
void push(int max)
{
	int n,v;
	if(top>=max-1)
	{
		printf("Stack overflow\n");
		exit(1);
	}
	else
	{
			printf("Enter the data:");
			scanf("%d",&n);
			p[++top]=n;
			printf("\nPress 5 to continue:");
			fflush(stdin);
			scanf("%d",&v);
			if(v==5)
				push(max);
	}
}
void pop()
{
	int v;
	if(top<=-1)
	{
		printf("Stack underflow\n");
		exit(1);
	}
	else
	{
		printf("The pop data=%d",p[top--]);
		printf("\nPress 5 to continue:");
		fflush(stdin);
		scanf("%d",&v);
		if(v==5)
			pop();
	}
}
void peep()
{
	int index;
	if(top<=-1)
	{
		printf("The stack is empty\n");
		exit(1);
	}
	else
	{
		index=top;
		while(index>-1)
		{
			printf("The data=%d\n",p[index--]);
		}
	}
}
