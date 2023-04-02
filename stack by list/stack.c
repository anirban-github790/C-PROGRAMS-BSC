#include<stdio.h>
#include<stdlib.h>
struct lnode
{
	int info;
	struct lnode *next;
};typedef struct lnode node;
node *start=NULL;
node *createnode()
{
	node *p;
	p=(node*)malloc(sizeof(node));
	printf("Enter the information:");
	scanf("%d",&p->info);
	p->next=NULL;
	return p;
}
void push()//That is insert in last
{
	node *p,*q;
	p=createnode();
	if(start==NULL)
	{
		start=p;
	}
	else
	{
		q=start;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		p->next=NULL;
	}
}
void pop()//That is delete begin
{
	node *p,*q;
	if(start==NULL)
	{
		printf("The stack is underflow\n");
		exit(1);
	}
	else
	{
		q=start;
		while(q->next!=NULL)
		{
			p=q;
			q=q->next;
		}
		p->next=NULL;
		printf("The pop node=%d",q->info);
		free(q);
	}
}
void peep()
{
	node *p;
	if(start==NULL)
	{
		printf("The stack is empty\n");
		exit(1);
	}
	else
	{
		p=start;
		while(p!=NULL)
		{
			printf("%d->",p->info);
			p=p->next;
		}
	}
}
void main()
{
	int choice,n;
	do
	{
		printf("\n1.push\n2.pop\n3.peep\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
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
	}while(n!=3);
}
