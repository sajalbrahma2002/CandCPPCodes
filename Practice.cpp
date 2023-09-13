#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
}*root,*newnode,*temp;

struct node *create(int val);
struct node *insert(struct node *temp,int key);
void display_path(struct node *root,int start,int end);
int findpath(struct node *root,int s[],int t1,int var);

struct node *create(int val)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
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

void display_path(struct node *root,int start,int end)
{
	int stack1[10],stack2[10];
	int top1=-1,top2=-1;
	int m=findpath(root,stack1,top1,start);
	int n=findpath(root,stack2,top2,end);
	
	int val=-1;
	int i=0,j=0;
	int size1=sizeof(stack1)/sizeof(stack1[0]);
	int size2=sizeof(stack2)/sizeof(stack2[0]);
	while(1!=size1 || j!=size2)
	{
		if(i==j && stack1[i]==stack2[j])
		{
			i++;
			j++;
		}
		else
		{
			val=j-1;
			break;
		}
	}
	for(int a=size1-1;a>val;a--)
	printf("%d ->a<- ",stack1[a]);
	for(int b=size2-1;b>val;b--)
	printf("%d ->b<- ",stack2[b]);
}

int findpath(struct node *root,int s[],int t1,int var)
{
	if(root==NULL)
	    return 0;
	s[++t1]=root->data;
	if(root->data==var)
	    return 1;
	if(findpath(root->left,s,t1,var) || findpath(root->right,s,t1,var))
	   return 1;
	t1--;
	return 0;
}


int main()
{
	int value,start,end;
	struct node *root=NULL;
	for(int i=0;i<7;i++)
	{
		scanf("%d",&value);
		root=insert(root,value);
	}
	scanf("%d",&start);
	scanf("%d",&end);
	display_path(root,start,end);
	return 0;
	
}
