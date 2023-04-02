#include<stdio.h>
#include<stdlib.h>
void create1();
void create2();
void conca();
void disp();
struct lnode
{
	int info;
	struct lnode *next;
};typedef struct lnode node;
node *start1,*start2;
node *createnode()
{
	node *p;
	printf("Enter the information:");
	scanf("%d",&p->info);
	p->next=NULL;
	return(p);
}
void main()
{
	int choice,n;
	do
	{
		printf("1.create1\n2.create2\n3.concatination\n4.display\n");
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
				conca();
				break;
			case 4:
				disp();
				break;
			default:
				printf("Wronh choice\n");
				exit(1);
		}
	}while(n!=4);
}
void create1()
{
	node *p,*q;
	p=createnode();
	if(start1==NULL)
		start1=p;
	else
	{
		q=start1;
		while(q->next!=NULL)
			q=q->next;
		q->next=p;
		p->next=NULL;
	}
}
void create2()
{
	node *p,*q;
	p=createnode();
	if(start1==NULL)
		start1=p;
	else
	{
		q=start1;
		while(q->next!=NULL)
			q=q->next;
		q->next=p;
		p->next=NULL;
	}
}
void conca()
{
	node *p;
	if(start1==NULL)
		printf("No nodes are there in the 1st list\n");
	else if(start2==NULL)
		printf("No nodes are there in the 2nd list\n");
	else
	{
		p=start1;
		while(p!=NULL)
			p=p->next;
		p->next=start2;
	}
}
void disp()
{
	node *p;	
	if(start1==NULL)
	{
		p=start2;
		while(p!=NULL)
		{
			printf("%d->",p->info);
			p=p->next;
		}
	}
	else if(start2==NULL)
	{
		p=start1;
		while(p!=NULL)
		{
			printf("%d->",p->info);
			p=p->next;
		}
	}
	else
	{
		p=start1;
		while(p!=NULL)
		{
			printf("%d->",p->info);
			p=p->next;
		}
	}
}
