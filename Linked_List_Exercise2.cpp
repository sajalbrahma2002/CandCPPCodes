// Linked List - Insertion at the Beginning
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

// creating a node carrying homogeneous values with three pointers head,temp and newnode 
struct node
{
	int data;
	struct node *link;
}*head,*temp,*newnode;

// function prototyping
void insertend(int value1);
void insertbig(int value2);
void display();

void insertend(int value1)
{
	newnode=(struct node*)malloc(sizeof(struct node));     // allocating memory for newnode
	newnode->data=value1;                                   // initailizing the data variable of node
	newnode->link=NULL;                                    // initializing the link pointer to NULL
	if(head==NULL)                                         // checking for 1st element if (head == NULL) -> first element
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp->link=newnode;                                // storing the newnode to link of temp node
		temp=temp->link;                                   // updating temp to point to next node
	}
}

void insertbig(int value2)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\nUnable to allocate memory.");
	}
	else
	{
		newnode->data=value2;                              // initializing the data of newnode
	    newnode->link=head;                                // storing the head node to the link of newnode
	    head=newnode;                                      // initializing newnode as head
	}
}

void display()
{
	if(head==NULL)
	{
		printf("\nList is empty.");
	}
	else
	{
		temp=head;   
		printf("\nElements in the list are :- ") ;                                
		while(temp!=NULL)                                
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
	}
}


int main()
{
	int num,element1,element2;
	printf("Enter the number of elements to be entered in the list :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element1);
		insertend(element1);
	}
	display();
	printf("\nEnter the element to add at the beginning of the list :- ");
	scanf("%d",&element2);
	insertbig(element2);
	display();
	return 0;
}

// Input -> 5 -> 2,3,4,5,6 --->1
// Output -> 2,3,4,5,6   -> 1,2,3,4,5,6
