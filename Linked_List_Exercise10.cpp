// Doubly Linked List - Insertion in the Beginning
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
void insert_beg(int value);
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

void insert_beg(int value)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=head;
	head->left=newnode;
	head=newnode;
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
	int num,element1,element2;
	printf("Enter the number of elements to be entered in the list :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element1);
		insert_end(element1);
	}
	printf("\nLinked List after insertion of elements :- ");
	display();
	printf("\nEnter the element to be inserted in the beginning of the list :- ");
	scanf("%d",&element2);
	insert_beg(element2);
	printf("\nLinked List after insertion of elements :- ");
	display();
	return 0;
}

// Input -> 5 -> 1 2 3 4 5 -> 0
// Output -> 0 1 2 3 4 5 
