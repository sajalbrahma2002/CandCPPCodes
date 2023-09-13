// DSA CAT 2 - Ques5
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
}*root,*newnode;

int arr_Inorderstore[7];
int arr_Replaced[7];
int index1=0;
int index2=0;

struct node *create(int value)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

void Inorder_Traversal(struct node *node)
{
	if(node!=NULL)
	{
		Inorder_Traversal(node->left);
		printf("%d ",node->data);
		Inorder_Traversal(node->right);
	}
}

void Store_Node_to_Array(struct node *node)
{
	if(node!=NULL)
	{
		Store_Node_to_Array(node->left);
		arr_Inorderstore[index1++]=node->data;
		Store_Node_to_Array(node->right);
	}
	
}

void Store_Array_to_Node(struct node *node)
{
	if(node!=NULL)
	{
		Store_Array_to_Node(node->left);
		node->data=arr_Replaced[index2++];
		Store_Array_to_Node(node->right);
	}
}

void Replace()
{
	int len=sizeof(arr_Inorderstore)/sizeof(arr_Inorderstore[0]);
	for(int i=0;i<len;i++)
	{
		arr_Replaced[i]=arr_Inorderstore[i-1]+arr_Inorderstore[i+1];
	}
}

int main()
{
	struct node *root=create(1);
	root->left=create(2);
	root->right=create(3);
	root->left->left=create(4);
	root->left->right=create(5);
	root->right->left=create(6);
	root->right->right=create(7);
	printf("Inorder Traversal of the Binary Tree :- ");
	Inorder_Traversal(root);
	Store_Node_to_Array(root);
	Replace();
	Store_Array_to_Node(root);
	printf("\nInorder Traversal of the Binary Tree after replacement :- ");
	Inorder_Traversal(root);
}

// Input -> 1 2 3 4 5 6 7 
// Output -> Inorder 4 2 5 1 6 3 7
// Output -> After Replacement 2 9 3 11 4 13 3
