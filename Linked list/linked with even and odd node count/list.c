#include<stdio.h>
#include<stdlib.h>
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
node *createnode()
{
	node *p;
	p=(node*)malloc(sizeof(node));
	printf("Enter the information:");
	scanf("%d",&p->info);
	p->next=NULL;
	return p;
}
void inbegin()
{
	node *p;
	p=createnode();
	if(start==NULL)
	{
		start=p;
		p->next=NULL;
	}
	else
	{
		p->next=start;
		start=p;
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
void inlast()
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
void inafter()
{
	node *p,*q;
	int key;
	p=createnode();
	printf("Enter the key after which the node will insert:");
	scanf("%d",&key);
	if(start==NULL)
	{
		start=p;
		p->next=NULL;
	}
	else
	{
		q=start;
		while(q->info!=key && q->next!=NULL)
		{
			q=q->next;
		}
		if(q->info==key && q->next!=NULL)
		{
			p->next=q->next;
			q->next=p;
		}
		if(q->info==key && q->next==NULL)
		{
			q->next=p;
			p->next=NULL;
		}
	}
}
void inbefore()
{
	node *p,*q,*r;
	int key;
	p=createnode();
	printf("Enter the key before which the node will insert:");
	scanf("%d",&key);
	if(start==NULL)
	{
		start=p;
		p->next=NULL;
	}
	else
	{
		q=start;
		while(q->info!=key && q->next!=NULL)
		{
			r=q;
			q=q->next;
		}
		r->next=p;
		p->next=q;
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
		printf("deleted info=%d",p->info);
		free(p);
	}
}
void deletelast()
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
		while((p->next)->next!=NULL)
		{
			p=p->next;
		}
		printf("deleted info=%d",(p->next)->info);
		p->next=NULL;
		free(p->next);
	}
}
void deleteparticular()
{
	node *p,*q;
	int key;
	printf("which node will delete:");
	scanf("%d",&key);
	if(start==NULL)
	{
		printf("Underflow\n");
		exit(1);
	}
	else
	{
		p=start;
		if(p->info==key)
		{
			start=p->next;
			printf("deleted info=%d",p->info);
			free(p);
		}
		else
		{
			while(p->info!=key &&p->next!=NULL)
			{
				q=p;
				p=p->next;
			}
			if(p->info==key && p->next!=NULL)
			{
				q->next=p->next;
				p->next=NULL;
				printf("deleted info=%d",p->info);
				free(p);
			}
			if(p->info==key && p->next==NULL)
			{
				q->next=NULL;
				printf("deleted info=%d",p->info);
				free(p);
			}
		}
	}
}
void reverse()
{
	node *p,*q,*r;
	if(start==NULL)
	{
		printf("No nodes\n");
		exit(1);
	}
	else
	{
		p=start;
		q=p->next;
		p->next=NULL;
		while(q!=NULL)
		{
			r=q->next;
			q->next=p;
			p=q;
			q=r;
		}
		start=p;
	}
	while(p!=NULL)
	{
		printf("%d->",p->info);
		p=p->next;
	}
}
void count()
{
	node *p;
	int c;
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
			c++;
			p=p->next;
		}
		printf("The total number of nodes are=%d\n",c);
	}
}
void even_oddcount()
{
	node *p;
	int oc=0,ec=0;
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
				ec++;
			else
				oc++;
			p=p->next;
		}
		printf("The even number of nodes are=%d\n",ec);
		printf("The odd number of nodes are=%d\n",oc);
	}
}

void main()
{
	int choice,n;
	do
	{
		printf("\n1.Insert begin\n2.display\n3.inlast\n4.inafter\n5.inbefore\n6.delete begin\n7.delete last\n8.delete particular\n9.reverse\n10.count\n11.even_odd count\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				inbegin();
				break;
			case 2:
				display();
				break;
			case 3:
				inlast();
				break;
			case 4:
				inafter();
				break;
			case 5:
				inbefore();
				break;
			case 6:
				deletebegin();
				break;
			case 7:
				deletelast();
				break;
			case 8:
				deleteparticular();
				break;
			case 9:
				reverse();
				break;
			case 10:
				count();
				break;
			case 11:
				even_oddcount();
				break;
			default:
				printf("Wrong choice\n");
				exit(1);
		}
	}while(n!=11);
}
