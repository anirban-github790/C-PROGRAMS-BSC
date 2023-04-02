#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void insert_begin();
void insert_last();
void insert_after();
void insert_before();
void delete_begin();
void delete_last();
void delete_particular();
void display();
void count();
struct lnode
{
	int info;
	struct lnode*next;
	struct lnode*prev;
};typedef struct lnode node;
node *start;
node *createnode()
{
	node *p;
	p=(node*)malloc(sizeof(node));
	printf("Enter the information:");
	scanf("%d",&p->info);
	p->next=NULL;
	p->prev=NULL;
	return(p);
}
int main()
{
	int choice,n;
	do
	{
		printf("\n1.insert_begin\n2.insert_last\n3.insert_after\n4.insert_before\n5.delete_begin\n6.delete_last\n7.delete_particular\n8.display\n9.count\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert_begin();
				break;
			case 2:
				insert_last();
				break;
			case 3:
				insert_after();
				break;
			case 4:
				insert_before();
				break;
			case 5:
				delete_begin();
				break;
			case 6:
				delete_last();
				break;
			case 7:
				delete_particular();
				break;
			case 8:
				display();
				break;
			case 9:
				count();
				break;
			default:
				printf("Wrong choice");
				exit(1);
		}
	}while(n!=9);
	getch();
	return 0;
}
void insert_begin(void)
{
	node *p;
	p=createnode();
	if(start==NULL)
	{
		p->prev=start;
		start=p;
	}
	else
	{
		p->next=start;
		(p->next)->prev=p;
		p->prev=start;
		start=p;
	}
}
void insert_last(void)
{
	node *p,*q;
	p=createnode();
	if(start==NULL)
	{
		p->prev=start;
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
		p->prev=q;
		p->next=NULL;
	}
}
void insert_after(void)
{
	node*p,*q;
	int key;
	if(start==NULL)
	{
		p->prev=start;
		start=p;
	}
	else
	{
		printf("After which the node will insert:");
		scanf("%d",&key);
		p=createnode();
		q=start;
		while(q->next!=NULL && q->info!=key)
		{
			q=q->next;
		}
		if(q->next==NULL)
		{
			q->next=p;
			p->prev=q;
			p->next=NULL;
		}
		else
		{
			p->next=(q->next);
			(q->next)->prev=p;
			p->prev=q;
			q->next=p;
			
		}
	}
}
void insert_before(void)
{
	node*p,*q,*r;
	int key;
	printf("Before which the node will insert:");
	scanf("%d",&key);
	p=createnode();
	if(start==NULL)
	{
		p->prev=start;
		start=p;
	}
	else
	{
		q=start;
		while(q->next!=NULL && q->info!=key)
		{
			r=q;
			q=q->next;
		}
		p->next=q;
		p->prev=r;
		r->next=p;
		q->prev=p;
	}
}
void delete_begin(void)
{
	node *p;
	if(start==NULL)
	{
		printf("Underflow\n");
		exit(1);
	}
	else
	{
		p=start;
		start=p->next;
		(p->next)->prev=start;
		printf("Deleted info=%d",p->info);
		free(p);
	}
}
void delete_last(void)
{
	node *p,*q;
	if(start==NULL)
	{
		printf("Underflow\n");
		exit(1);
	}
	else
	q=start;
	while(q->next!=NULL)
	{
		p=q;
		q=q->next;
	}
	p->next=NULL;
	printf("Deleted info=%d",q->info);
	free(q);
}
void delete_particular(void)
{
	node *p,*q;
	int key;
	printf("Which node will delete:");
	scanf("%d",&key);
	if(start==NULL)
	{
		printf("Underflow\n");
		exit(1);
	}
	else
	{
		q=start;
		if(q->info==key)
		{
			start=q->next;
			(q->next)->prev=start;
			printf("The deleted info=%d",q->info);
			free(q);
		}
		else
		{
			while(q->info!=key && q->next!=NULL)
			{
				p=q;
				q=q->next;
			}
			if(q->info==key && q->next!=NULL)
			{
				(q->next)->prev=p;
				p->next=q->next;
				printf("The deleted info=%d",q->info);
				free(q);
			}
			else
			{
				p->next=NULL;
				printf("The deleted info=%d",q->info);
				free(q);
			}
		}
	}
}
void display(void)
{
	node *p;
		p=start;
		if(start==NULL)
		{
		printf("no such node is there");
		exit(1);
    	}
    	else
    	{
    		while(p!=NULL)
    		{
    		printf("%d->",p->info);
			p=p->next;
			}
		}
}
void count()
{
	node *p;
	int v;
	while(p!=NULL)
	{
		p=p->next;
		v++;
	}
	printf("The number of node=%d",v);
}
