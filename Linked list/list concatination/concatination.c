#include<stdio.h>
#include<stdlib.h>
struct bnode
{
	int info;
	struct bnode *next;
};typedef struct bnode node;
node *start1=NULL;
node *start2=NULL;
node *start3=NULL;
node *createnode()
{
	node *p;
	p=(node*)malloc(sizeof(node));
	printf("Enter the info:");
	scanf("%d",&p->info);
	p->next=NULL;
	return p;
}
void create1()
{
	node *p,*q;
	p=createnode();
	if(start1==NULL)
	{
		start1=p;
	}
	else
	{
		q=start1;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		p->next=NULL;
	}
}
void create2()
{
	node *p,*q;
	p=createnode();
	if(start2==NULL)
	{
		start2=p;
	}
	else
	{
		q=start2;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next=p;
		p->next=NULL;
	}
}
void concatination()
{
	node *p;
	if(start1==NULL)
	{
		p=start2;
		printf("The concatinate list is\n");
		while(p!=NULL)
		{
			printf("%d->",p->info);
			p=p->next;
		}
	}
	else if(start2==NULL)
	{
		p=start1;
		printf("The concatinate list is\n");
		while(p!=NULL)
		{
			printf("%d->",p->info);
			p=p->next;
		}
	}
	else
	{
		p=start1;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=start2;
		p=start1;
		printf("The concatinate list is\n");
		while(p!=NULL)
		{
			printf("%d->",p->info);
			p=p->next;
		}
	}
}
void display1()
{
	node *p;
	if(start1==NULL)
	{
		printf("The list 1 is empty\n");
		exit(1);
	}
	else
	{
		p=start1;
		printf("The list 1 is\n");
		while(p!=NULL)
		{
			printf("%d->",p->info);
			p=p->next;
		}
	}
}
void display2()
{
	node *p;
	if(start2==NULL)
	{
		printf("The list 2 is empty\n");
		exit(1);
	}
	else
	{
		p=start2;
		printf("The list 2 is\n");
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
		printf("\n1.create list 1\n2.create list 2\n3.concatination\n4.display 1\n5.display 2\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create1();
				break;
			case 2:
				create2();
				break;
			case 3:
				concatination();
				break;
			case 4:
				display1();
				break;
			case 5:
				display2();
				break;
			default:
				printf("wrong choice\n");
				exit(1);
		}
	}while(n!=5);
}
