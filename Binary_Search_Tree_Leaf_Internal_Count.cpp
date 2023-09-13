// Design a BST and count Leaf & Internal Nodes
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
}*root,*newnode,*temp; 

struct node *create(int value)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

struct node *insert(struct node *temp,int value)
{
	if(temp==NULL)
	{
		return create(value);
	}
	if(value<temp->data)
	{
		temp->left=insert(temp->left,value);
	}
	else
	{
		temp->right=insert(temp->right,value);
	}
	return temp;
}

int Leaf_Node_Count(struct node *node)
{
	if(node==NULL)
	{
		return 0;
	}
	if(node->left==NULL && node->right==NULL)
	{
		return 1;
	}
	else
	{
		return Leaf_Node_Count(node->left)+Leaf_Node_Count(node->right);
	}
}

int Internal_Node_Count(struct node *node)
{
	if(node==NULL||(node->left==NULL && node->right==NULL))
	{
		return 0;
	}
	else
	{
		return 1+Internal_Node_Count(node->left)+Internal_Node_Count(node->right);
	}
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}	
}

int main()
{
	int num,element;
	struct node *root=NULL;
	printf("Enter the number of elements to be inserted in the binary search tree :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element);
		root=insert(root,element);
	}
	printf("Inorder Traversal :- ");
	inorder(root);
	int Leaf_Count=Leaf_Node_Count(root);
	printf("\nTotal no of Leaf Nodes in the Binary Search Tree :- %d",Leaf_Count);
	int Internal_Count=Internal_Node_Count(root);
	printf("\nTotal no of Internal Nodes in the Binary Search Tree :- %d",Internal_Count);
	return 0;
}

// Input -> 8 3 1 6 7 10 14 4
// Inorder Traversal -> 1 3 4 6 7 8 10 14
// Leaf Nodes -> 4
// Internal Nodes -> 4
