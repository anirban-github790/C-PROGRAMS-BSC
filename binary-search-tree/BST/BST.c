			/*Program for binary search tree and travarsal*/
#include<stdio.h>
#include<stdlib.h>
			/*BST node*/
struct node
{
	int info;
	struct node *left_child;
	struct node *right_child;
};
			/*Function for creating a new node,which returns nodetype pointer value*/ 
struct node* Newnode(int data)
{
	struct node* Newnode;
	Newnode=(struct node*)malloc(sizeof(struct node));
	Newnode->info=data;
	Newnode->left_child=Newnode->right_child=NULL;
	return Newnode;
}
			/*Function for insertion*/
struct node* Insertion(struct node *root,int data)
{
	if(root==NULL)
	{
		root=Newnode(data);
	}
	else if(data<=root->info)
	{
		root->left_child=Insertion(root->left_child,data);
	}
	else
	{
		root->right_child=Insertion(root->right_child,data);
	}
	return root;
			/*Function:Preorder*/	
}
void preorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	printf(" %d",root->info);
	preorder(root->left_child);
	preorder(root->right_child);	
}
			/*Function:Inorder*/
void inorder(struct node *root)
{
	if(root==NULL)
	{
		return;	
	}	
	inorder(root->left_child);
	printf(" %d",root->info);
	inorder(root->right_child);
}
			/*Function:Postorder*/
void postorder(struct node *root)
{
	if(root==NULL)
	{
		return;	
	}	
	postorder(root->left_child);
	postorder(root->right_child);
	printf(" %d",root->info);
}
			/*Main Function*/
int main()										
{
	struct node *root=NULL;
	int data;
	int choiceI,choiceII;
	do
	{
		printf("\nEnter your choice:\n1)Insertion:\n2)Travarsal:\n");
		scanf("%d",&choiceI);
		switch(choiceI)
		{
			case 1:	
				printf("\nEnter data.\n");
				scanf("%d",&data);						
				root=Insertion(root,data);						/*Function call,Insertion*/
				break;
			case 2:								
				do
				{
					printf("\nEnter your choice:\n1)Preorder\n2)Inorder\n3)Postorder\n");
					scanf("%d",&choiceII);
					switch(choiceII)
					{
						case 1:
							printf("\nPreorder travarsal:\n"); 
							preorder(root);						/*Function call,preorder*/		    		
							break;
						case 2:
							printf("\nInorder travarsal:\n");				
							inorder(root);						/*Function call,inorder*/
							break;
						case 3:
							printf("\nPostorder travarsal:\n");
							postorder(root);					/*Function call,postorder*/
							break;
						case 4:
							break;			
						default: ("\nEnter a value between '1' to '4'.\n");
					}
				}
				while(choiceII!=4);
				case 3:
					break;					
				default: ("\nEnter a value between '1' to '3'.\n");
		}
	}
	while(choiceI!=3);
	return 0;
}
