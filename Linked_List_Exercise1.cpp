// Linked List - Insertion At end position
// SAJAL BRAHMA -21BPS1045

#include<stdio.h>
#include<stdlib.h>

// creating a node carrying homogeneous values with three pointers head,temp and newnode 
struct node
{
	int data;
	struct node *link;
}*head,*temp,*newnode;

// function prototyping
void insert(int value);
void display();

void insert(int value)
{
	newnode=(struct node*)malloc(sizeof(struct node));     // allocating memory for newnode
	newnode->data=value;                                   // initailizing the data variable of node
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
	int num,element;
	printf("Enter the number of elements to be entered in the list :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element);
		insert(element);
	}
	display();
	return 0;
}

// Input -> 5 -> 1,2,3,4,5
// Output -> 1,2,3,4,5
