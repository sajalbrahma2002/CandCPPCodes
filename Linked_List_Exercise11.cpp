// Doubly Linked List - Insertion in the middle
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
}*head,*temp,*newnode;

void insert_end(int value);
void insert_mid(int value,int n);
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

void insert_mid(int value,int n)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==n)
		{
			newnode->left=temp;
			newnode->right=temp->right;
			temp->right->left=newnode;
			temp->right=newnode;
			return;
		}
		else
		{
			temp=temp->right;
		}
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
	int num,element,val,num1;
	printf("Enter the number of elements to be entered in the list :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element);
		insert_end(element);
	}
	printf("\nLinked List after insertion of elements :- ");
	display();
	printf("\nEnter the element to be inserted in the linked list :- ");
	scanf("%d",&val);
	printf("\nEnter the data after which its to be inserted :- ");
	scanf("%d",&num1);
	insert_mid(val,num1);
	printf("\nLinked List after insertion of element in the middle of th list :- ");
	display();
	return 0;
}

// Input -> 5 -> 1 2 3 4 5 -> 7,3
// Output -> 1 2 3 7 4 5
