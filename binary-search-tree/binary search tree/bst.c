#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
struct bnode
{
	int info;
	struct bnode *left;
	struct bnode *right;
};typedef struct bnode node;
node *root=NULL;
node *createnode(int data)
{
	node *p;
	p=(node*)malloc(sizeof(node));
	p->info=data;
	p->left=NULL;
	p->right=NULL;
	return p;
}
node* insert(node *root,int data)
{
	if(root==NULL)
		root=createnode(data);
	else if(root->info>data)
		root->left=insert(root->left,data);
	else
		root->right=insert(root->right,data);
	return root;
}
void inorder(node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d->",root->info);
	inorder(root->right);
}
void preorder(node *root)
{
	if(root==NULL)
		return;
	printf("%d->",root->info);
	preorder(root->left);
	preorder(root->right);
}
void postorder(node *root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d->",root->info);
}
node *serach(node *root,int data)
{
	int flag=false;
	if(root->info==data)
	{
		printf("The search node=%d",root->info);
		flag=true;
	}
	else if(root->info>data)
		root->left=search(root->left,data);
	else
		root->right=search(root->right,data);
	if(flag==false)
	{
		printf("Not present\n");
		exit(1);
	}
}
void main()
{
	int choice,n,data;
	do
	{
		printf("\n1.insert\n2.inorder\n3.preorder\n4.postorder\n5.serach\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the information:");
				scanf("%d",&data);
				root=insert(root,data);
				break;
			case 2:
				printf("The inorder is:");
				inorder(root);
				break;
			case 3:
				printf("The preorder is:");
				preorder(root);
				break;
			case 4:
				printf("The postorder is:");
				postorder(root);
				break;
			case 5:
				printf("Enter the key:");
				scand("%d",&data);
				search(root,data);
				break;
			default:
				printf("Wrong choice\n");
				exit(1);
				
		}
	}while(n!=2);
}
