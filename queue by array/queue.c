#include<stdio.h>
#include<process.h>
int queue[100];
int front=-1,rear=-1,fro=-1;
void insertion(int);
void deletion();
void display();
void main()
{
int choice,size;
printf("Enter the size of the queue within 100:");
scanf("%d",&size);
do
    {
	    printf("1.insert\n2.delete\n3.display\n");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:
	    		insertion(size);
	    		break;
	    	case 2:
	    		deletion();
	    		break;
	    	case 3:
	    		display();
	    		break;
	    	default:
	    		printf("wrong choice\n");
	    		exit(0);
		}
	}while(choice!=3);	
}
void insertion(int max)
{
	int value,n;
	if(rear>=max-1)
	{
		printf("Overflow\n");
		exit(0);
	}
	printf("Enter the data:");
	scanf("%d",&value);
	queue[rear++]=value;
	fro++;
	printf("enter 5 to insert again:");
	scanf("%d",&n);
	if(n==5)
	insertion(max);
}
void deletion()
{
	int value,n;
	if(fro<0)
	{
		printf("Underflow\n");
		exit(0);
	}
	value=queue[front++];
	printf("the delete data is %d\n",value);
	printf("Enter 5 to delete again:");
	scanf("%d",&n);
	if(n==5)
	deletion();
}
void display()
{
	if(rear<0)
	{
		printf("No element in the queue\n");
		exit(0);
	}
	while(front<rear)
	{
	printf("The display %d\n",queue[front++]);
    }
}
