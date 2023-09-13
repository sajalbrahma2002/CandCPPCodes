// Doubly Linked List - Insertion in the end
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
}*head,*newnode,*temp;

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
	printf("\nLinked List after insertion of elements :- ");
	display();
	return 0;
}

// Input -> 5 -> 1 2 3 4 5 
// Output -> 1 2 3 4 5
