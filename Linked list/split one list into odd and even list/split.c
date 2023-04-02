#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
struct lnode
{
	int info;
	struct lnode *next;
};typedef struct lnode node;
struct snode
{
	int info1;
	struct snode*next1;
};typedef struct snode node1;
node *start=NULL;
node *start1=NULL;//for even
node *start2=NULL;//for odd
int flag=false;
node *createnode()
{
	node *p;
	p=(node*)malloc(sizeof(node));
	printf("Enter the information:");
	scanf("%d",&p->info);
	p->next=NULL;
	return p;
}
node *splitl()       //only for void evev() and void odd()
{
	node *p;
	p=(node*)malloc(sizeof(node));
	p->next=NULL;
	return p;
}
void create()
{
	node *p,*q;
	p=createnode();
	if(start==NULL)
	{
		start=p;
		p->next=NULL;
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
void display()
{
	node *p;
	if(start==NULL)
	{
		printf("No nodes\n");
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
void even(int info)
{
	node *p,*q;
	p=splitl();
	p->info=info;
	if(start1==NULL)
	{
		start1=p;
		p->next=NULL;
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
void odd(int info)
{
	node *p,*q;
	p=splitl();
	p->info=info;
	if(start2==NULL)
	{
		start2=p;
		p->next=NULL;
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
void split()
{
	node *p;
	if(flag==true)
	{
		printf("Only one time spliting is done\n");
		exit(1);
	}
	if(start==NULL)
	{
		printf("No nodes are there\n");
		exit(1);
	}
	else
	{
		p=start;
		while(p!=NULL)
		{
			if(p->info%2==0)
				even(p->info);
			else
				odd(p->info);
			p=p->next;
		}
		printf("Spliting is done\n");
		flag=true;
	}
}
void showeven()
{
	node *p;
	if(start1==NULL)
	{
		printf("No nodes in even list\n");
		exit(1);
	}
	else
	{
		p=start1;
		printf("The even list is:");
		while(p!=NULL)
		{
			printf("%d->",p->info);
			p=p->next;
		}
	}
}
void showodd()
{
	node *p;
	if(start2==NULL)
	{
		printf("No nodes in odd list\n");
		exit(1);
	}
	else
	{
		p=start2;
		printf("The odd list is:");
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
		printf("\n1.create list\n2.split\n3.display\n4.display even list\n5.display odd list\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create();
				break;
			case 2:
				split();
				break;
			case 3:
				display();
				break;
			case 4:
				showeven();
				break;
			case 5:
				showodd();
				break;
			default:
				printf("Wrong choice\n");
				exit(1);
		}
	}while(n!=5);
}
