// Breadth wise traversal
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
};
void LevelOrder(struct node *root);
void Currentlevel(struct node *node,int level);
int height(struct node *node);
struct node *Create(int data);

void LevelOrder(struct node *root)
{
	int h=height(root);
	for(int i=1;i<=h;i++)
	{
		Currentlevel(root,i);
	}
}

void Currentlevel(struct node *root,int level)
{
	if(root==NULL)
	return;
	else if(level==1)
	printf("%d ",root->data);
	else if(level>1)
	{
		Currentlevel(root->left,level-1);
		Currentlevel(root->right,level-1);
	}
}

int height(struct node *node)
{
	int left_h,right_h;
	if(node==NULL)
	return 0;
	else
	{
		left_h=height(node->left);
		right_h=height(node->right);
	}
	if(left_h>right_h)
	return left_h+1;
	else
	return right_h+1;
}

struct node *Create(int data)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

int main()
{
	struct node *root=Create(1);
	root->left=Create(2);
	root->right=Create(3);
	root->left->left=Create(4);
	root->left->right=Create(5);
	root->right->left=Create(6);
	root->right->right=Create(7);
	LevelOrder(root);
	return 0;
}

// Output -> 1 2 3 4 5 6 7
