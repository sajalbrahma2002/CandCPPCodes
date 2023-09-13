// Implementation of Queues using Linked List
// SAJAL BRAHMA -21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*newnode,*front,*rear,*dnode,*temp;

void Enqueue(int value);
void Dequeue();
void display();

void Enqueue(int value)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\nNo memeory allocation to add element in the queue.");
	}
	else
	{
		newnode->data=value;
		newnode->link=NULL;
		if(front==NULL)
		{
			front=newnode;
			rear=newnode;
			
		}
		else
		{
			rear->link=newnode;
			rear=newnode;
		}
	}
}

void Dequeue()
{
	if(front==NULL)
	{
		printf("\nQueue is empty.");
	}
	else
	{
		dnode=front;
		front=front->link;
		free(dnode);
	}
}

void display()
{
	temp=front;
	if(front==NULL)
	{
		printf("\nQueue is empty.");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d -> ",temp->data);
			temp=temp->link;
		}
		printf("NULL");
	}
}

int main()
{
	int num,element;
	printf("Enter the elements to be inserted in the queue implemented by a linked list :- ");
	scanf("%d",&num);
	printf("\nEnter the elements :-\n");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element);
		Enqueue(element);
	}
	printf("\nQueue elements after inserting in Linked List :- ");
	display();
	Dequeue();
	printf("\nQueue elements after deleting from Linked List :- ");
	display();
	return 0;	
}

// Input -> 5 -> 1 2 3 4 5
// Output -> 1 2 3 4 5 Null -> 2 3 4 5 Null
