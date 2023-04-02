#include<stdio.h>
#include<stdlib.h>
typedef struct lnode
{
	int info;
	struct lnode*next;
	struct lnode*prev;
}node;
node *start=NULL;
node *createnode()
{
	node *p;
	p=(node*)malloc(sizeof(node));
	printf("Enter the information:");
	scanf("%d",&p->info);
	p->next=p->prev=NULL;
}
void inbegin()
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
void inlast()
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
		p->next=NULL;
		p->prev=q;
	}
}
void inafter()
{
	node *p,*q;
	int key;
	printf("after which node will insert:");
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
		while(q->info!=key && q->next!=NULL)
		{
			q=q->next;
		}
		if(q->info==key && q->next==NULL)
		{
			q->next=p;
			p->next=NULL;
			p->prev=q;
		}
		else
		{
			p->next=q->next;
			q->next=p;
			p->prev=q;
			(p->next)->prev=p;
		}
	}
}
void inbefore()
{
	node *p,*q;
	int key;
	printf("before which node will insert:");
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
		if(q->info==key)
		{
			p->next=start;
			start=p;
			p->prev=start;
			(p->next)->prev=p;
		}
		else
		{
			while(q->info!=key && q->next!=NULL)
			{
				q=q->next;
			}
				p->prev=q->prev;
				(q->prev)->next=p;
				p->next=q;
				q->prev=p;
		}
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
void deletebegin()
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
		(p->next)->prev=p;
		printf("deleted info=%d\n",p->info);
		free(p);
	}
}
void deletelast()
{
	node *p,*q;
	if(start==NULL)
	{
		printf("Underflow\n");
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
		printf("deleted info=%d\n",q->info);
		free(q);
	}
}
void deleteparticular()
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
			p=start;
			start=p->next;
			(p->next)->prev=p;
			printf("deleted info=%d\n",p->info);
			free(p);
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
				p->next=q->next;
				(q->next)->prev=p;
				printf("deleted info=%d\n",q->info);
				free(q);
			}
			else
			{
				p->next=NULL;
				printf("deleted info=%d\n",q->info);
				free(q);
			}
		}
	}
}
void number()
{
	node *p,*q;
	int c,key;
	printf("Enter the number which will delete:");
	scanf("%d",&key);
	if(start==NULL)
	{
		printf("Underflow\n");
		exit(1);
	}
	else
	{
		p=start;
		while(p->next!=NULL)
		{
			c++;
			if(c==key)
				break;
			q=p;
			p=p->next;
		}
		q->next=p->next;
		(p->next)->prev=q;
		printf("deleted info=%d",p->info);
		free(p);
	}
}
void main()
{
	int choice,n;
	do
	{
		printf("\n1.insert begin\n2.insert last\n3.insert after\n4.insert before\n5.delete begin\n6.delete last\n7.delete particular\n8.display\n9.number\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				inbegin();
				break;
			case 2:
				inlast();
				break;
			case 3:
				inafter();
				break;
			case 4:
				inbefore();
				break;
			case 5:
				deletebegin();
				break;
			case 6:
				deletelast();
				break;
			case 7:
				deleteparticular();
				break;
			case 8:
				display();
				break;
			case 9:
				number();//Here number means enter the number of nodes that 1st 2nd,3rd,4th... which will delete
				break;
			default:
				printf("wrong choice\n");
				exit(1);
		}
	}while(n!=8);
}
