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
void forward_traversal ();
void backward_traversal();
void count_node();
struct Lnode
{
	int info;
	struct Lnode *next;	
};typedef struct Lnode node;
node *start;
node *create_node()
{
	node*p;
	p=(node*)malloc(sizeof(node));
	printf("Enter the information:");
	scanf("%d",&p->info);
	p->next=NULL;
	return(p);
}
	int main()
	{
	int choice,n;
	do
	{
	printf("\n1.Insert at begin\n2.Insert at last\n3.Insert at after\n4.Insert at before\n5.Delete at first\n6.Delete at last\n7.Delete at particular\n8.Forward traversal\n9.Reverse traversal\n10.count of node\n");
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
			forward_traversal();
			break;
		case 9:
			backward_traversal();
			break;
		case 10:
			count_node();
			break;	
		default:
			printf("wrong choice\n");
			exit(1);
			break;		
	}
	}while(n!=10);
	getch();
	return 0;	
	}

void insert_begin()
	{	
		node *p;
		p=create_node();
		if(start==NULL)
			start=p;
		else
		{
			p->next=start;
			start=p;
		}
	}
void insert_last()
	{
		node *p,*q;
	    p=create_node();
		if(start==NULL)
		start=p;
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
void insert_after()
{
	node *p,*q;
	int key;
	if(start==NULL)
		start=p;
	else
	{
		q=start;
		p=create_node();
		printf("after which node will insert:");
		scanf("%d",&key);
		while(q->next!=NULL && q->info!=key)
		{
			q=q->next;
		}
		if(q->info==key && q->next!=NULL)
		{
			p->next=q->next;
			q->next=p;
		}
		else
		{
			q->next=p;
			p->next=NULL;
		}
	}
}
void insert_before()
	{
		int key;
		node *p,*q,*r;
	    printf("before which node will insert:");
		scanf("%d",&key);
		p=create_node();
		if(start==NULL)
		start=p;
		else 
		q=start;
		if(q->info==key)
		{
			p->next=q;
			start=p;
		}
		else
		{
		    while(q->next!=NULL && q->info!=key)
		    {
		    	r=q;
		    	q=q->next;
		    }
				p->next=q;
				r->next=p;
		}
	}
	void delete_begin()
	{
		node *p;
		if(start==NULL)
		{
			printf("underflow\n");
			exit(1);
		}
		else
		{
			p=start;
			start=p->next;
			printf("delete info=%d",p->info);
			free(p);
		}
	}
	void delete_last()
	{
		node *p,*q;
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
			    q=p;
				p=p->next;
		    }
		    q->next=NULL;
			printf("The delete node is %d",p->info);
			free(p);
		}
	}
	void delete_particular()
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
				if(q->next==NULL && q->info!=key)
				{
					printf("No such node");
					exit(1);
				}
				if(q->info==key && q->next!=NULL)
				{
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
			
	void forward_traversal ()
	{
		node *p;
		int count;
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
    			count++;
    			printf("%d->",p->info);
				p=p->next;
			}
			printf("\nTotal number of node=%d",count);
		}
	}
	void backward_traversal()
	{
		node*p,*q,*r;
		if(start==NULL)
		{
		printf("no such node is there");
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
			p=start;
			while(p!=NULL)
    		{
    	        printf("%d->",p->info);
			    p=p->next;  
			}
		}
	}
	void count_node()
	{
		node*p;
		int count;
		if(start==NULL)
		{
		printf("no such node is there");
		exit(1);
    	}
    	else
    	{
    		while(p!=NULL)
    		{
    			count++;
    			p=p->next;
			}
			printf("The total number of node is %d",count);
		}
	}

