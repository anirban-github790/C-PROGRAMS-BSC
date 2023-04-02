#include<stdio.h>
#include<stdlib.h>
void push(int max);
void pop();
void peep();
int *p,max,rear=-1,front=-1,temp=-1;
void main()
{
	int max,choice,h;
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
	int n,c;
	printf("Enter the data:");
	scanf("%d",&n);
	if(rear>=max-1)
	{
		printf("Queue overflow\n");
		exit(1);
	}
	else
	{
			p[++rear]=n;
			temp++;
			printf("\nEnter 5 to continue:");
			fflush(stdin);
			scanf("%d",&c);
			if(c==5)
				push(max);
	}
}
void pop()
{
	int c;
	if(temp<=-1)
	{
		printf("Queue underflow\n");
		exit(1);
	}
	else
	{
		printf("The pop data=%d",p[++front]);
		printf("\nEnter 5 to continue:");
		fflush(stdin);
		scanf("%d",&c);
		if(c==5)
			pop();
	}
}
void peep()
{
	int index=front+1;
	while(index<=rear)
	{
		printf("The data is=%d\n",p[index++]);
	}
}
