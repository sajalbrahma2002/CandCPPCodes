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

void Inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d->",root->data);
		inorder(root->right);
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

  printf("Inorder traversal: ");
  inorder(root);
  return 0;
}


