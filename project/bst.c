#include<stdio.h>
#include<stdlib.h>
typedef struct tree
{
	int data;
	struct tree*left;
	struct tree*right;
}bst;
void insert(bst*,bst*);
void inorder(bst*);
bst*getnode();
void main()
{
	int choice,key,data;
	char option='N';
	bst*root,*newnode,*temp,*parent;
	root=NULL;
	printf("enter your choice\n");
	printf("1.create\n");
	printf("2.traversal\n");
	printf("3.exit\n");
	scanf("%d",&choice);
	do
	{
		switch(choice)
		{
			case 1:
				do
				{
					newnode=getnode();
					printf("enter the data\n");
					scanf("%d",&newnode->data);
					if(root==NULL)
					root=newnode;
					else
					insert(root,newnode);
					printf("if you want to insert more press Y\n");
					option=getch();
				}while(option=='Y');
				break;
				case 2:
					if(root==NULL)
					printf("the tree is not present\n");
					else
					{
						printf("inorder list\n");
						inorder(root);
					}
					break;
					case 3:
						printf("end the switch case\n");
		}
	}while(choice!=3);
}
bst*getnode()
{
  bst*temp;
  temp=(bst*)malloc(sizeof(bst));
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}
void insert(bst*root,bst*newnode)
{
	if(newnode->data < root->data)
	{
	  if(root->left=NULL)
	root->left=newnode;
	else
	insert(root->left,newnode);
    } 
	else if(newnode->data > root->data)  
	{
		if(root->right=NULL)
		root->right=newnode;
		else
		insert(root->right,newnode);
	}
	else
	printf("duplicate data\n");
}
void inorder(bst*temp)
{
	if(temp!=NULL)
	{
		inorder(temp->left);
		printf("%d",temp->data);
		inorder(temp->right);
	}
}
	
