// Binary Tree 
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

struct node *insert(struct node *temp,int key)
{
	if(temp==NULL)
	{
		return create(key);
	}
	if(key<temp->data)
	{
		temp->left=insert(temp->left,key);
	}
	else
	{
		temp->right=insert(temp->right,key);
	}
	return temp;
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

void preorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%d ",root->data);
		preorder(root->left);	
		preorder(root->right);
	}
}

void postorder(struct node *root)
{
	if(root!=NULL)
	{
		postorder(root->left);	
		postorder(root->right);
		printf("%d ",root->data);
	}
}

int main()
{
	struct node *root=NULL;
	root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 7);
    root = insert(root, 10);
    root = insert(root, 14);
    root = insert(root, 4);
    printf("Inorder Traversal :- ");
    inorder(root);
    printf("\nPreorder Traversal :- ");
    preorder(root);
    printf("\nPostorder Traversal :- ");
    postorder(root);
    return 0;
}

// Inorder Traversal :- 1 3 4 6 7 8 10 14
// Preorder Traversal :- 8 3 1 6 4 7 10 14
// Postorder Traversal :- 1 4 7 6 3 14 10 8
