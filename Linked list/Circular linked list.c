#include<stdio.h>
#include<stdlib.h>
void ins_begin();
void ins_end();
void ins_after();
void ins_before();
void del_begin();
void del_end();
void del_particular();
void disp();
struct lnode
{
	int info;
	struct lnode*next;
};typedef struct lnode node;
node *start;
node *createnode()
{
	node *p;
	p=(node*)malloc(sizeof(node));
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
		printf("\n1.insert begin\n2.insert end\n3.insert after\n4.insert before\n5.delete begin\n6.delete end\n7.delete particular\n8.display\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				ins_begin();
				break;
			case 2:
				ins_end();
				break;
			case 3:
				ins_after();
				break;
			case 4:
				ins_before();
				break;
			case 5:
				del_begin();
				break;
			case 6:
				del_end();
				break;
			case 7:
				del_particular();
				break;
			case 8:
				disp();
				break;
			default:
				printf("Wrong choice\n");
				exit(1);
		}
	}while(n!=5);
}
void ins_begin()
{
	node *p,*q;
	p=createnode();
	if(start==NULL)
	{
		start=p;
		p->next=start;
	}
	else
	{
		q=start;
		while(q->next!=start)
			q=q->next;
		p->next=start;
		start=p;
		q->next=start;
	}
}
void ins_end()
{
	node *p,*q;
	p=createnode();
	if(start==NULL)
	{
		start=p;
		p->next=start;
	}
	else
	{
		q=start;
		while(q->next!=start)
			q=q->next;
		p->next=q->next;
		q->next=p;
	}
}
void ins_after()
{
	node *p,*q;
	int key;
	p=createnode();
	printf("After which node will insert:");
	scanf("%d",&key);
	if(start==NULL)
	{
		start=p;
		p->next=start;
	}
	else
	{
		q=start;
		while(q->info!=key && q->next!=start)
			q=q->next;
		if(q->next==start)
		{
			p->next=q->next;
			q->next=p;
		}
		else
		{
			p->next=q->next;
			q->next=p;
		}
	}
}
void ins_before()
{
	node *p,*q,*r;
	int key;
	p=createnode();
	printf("Before which node will insert:");
	scanf("%d",&key);
	if(start==NULL)
	{
		start=p;
		p->next=start;
	}
	else
	{
		q=start;
		if(q->info==key)
		{
			while(q->next!=start)
				q=q->next;
		p->next=start;
		start=p;
		q->next=start;
		}
		else
		{
			while(q->info!=key && q->next!=start)
			{
				r=q;
				q=q->next;
			}
			p->next=r->next;
			r->next=p;
		}
	}
}
void del_begin()
{
	node *p,*q;
	if(start==NULL)
	{
		printf("Underflow\n");
		exit(0);
	}
	else
	{
		q=start;
		while(q->next!=start)
			q=q->next;
		p=start;
		start=p->next;
		q->next=start;
		printf("The deleted info=%d\n",p->info);
		free(p);
	}
}
void del_end()
{
	node *p,*q;
	if(start==NULL)
	{
		printf("Underflow\n");
		exit(0);
	}
	else
	{
		q=start;
		while(q->next!=start)
		{
			p=q;
			q=q->next;
		}
		p->next=start;
		printf("The deleted info=%d\n",q->info);
		free(q);
	}
}
void del_particular()
{
	node *p,*q;
	int key;
	printf("Which node will delete:");
	scanf("%d",&key);
	if(start==NULL)
	{
		printf("Underflow\n");
		exit(0);
	}
	else
	{
		q=start;
		if(q->info==key)
		{
			while(q->next!=start)
				q=q->next;
		p=start;
		start=p->next;
		q->next=start;
		printf("The deleted info=%d\n",p->info);
		free(p);
		}
		else
		{
			while(q->info!=key && q->next!=start)
			{
				p=q;
				q=q->next;
			}
			if(q->next==start)
			{
				p->next=start;
				printf("The deleted info=%d\n",q->info);
				free(q);
			}
			else
			{
				p->next=q->next;
				printf("The deleted info=%d\n",q->info);
				free(q);
			}
		}
	}
}
void disp()
{
	node *p;
	if(start==NULL)
	{
		printf("The list is empty\n");
		exit(0);
	}
	else
	{
		p=start;
		do
		{
			printf("%d->",p->info);
			p=p->next;
		}while(p!=start);
	}
}
