// Sorting in Doubly Linked List
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
}*head,*newnode,*temp,*ptr;

void insert_end(int value);
void display();

void insert_end(int value)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp->right=newnode;
		newnode->left=temp;
		temp=newnode;
	}
}

void sort()
{
	int value;
	int flag=0;
	ptr=NULL;
	if(head==NULL)
	{
		printf("\nList is empty.");
		return ;
	}
	else
	{
		do
		{
			flag=0;
			temp=head;
		    while(temp->right!=ptr)
		    {
			    if(temp->data>temp->right->data)
			    {
				    value=temp->data;
				    temp->data=temp->right->data;
			    	temp->right->data=value;
				    flag=1;
			    }
			temp=temp->right;
		    }
		    ptr=temp;
		}while(flag);
	}
}

void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->right;
	}
	printf("NULL");
}

int main()
{
	int num,element;
	printf("Enter the number of elements to be entered in the list :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element);
		insert_end(element);
	}
	printf("\nList before sorting :- ");
	display();
	sort();
	printf("\nList after sorting :- ");
	display();
	return 0;
}

// Input -> 5 -> 5 4 3 2 1
// Output -> 1 2 3 4 5
