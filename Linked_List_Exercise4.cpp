// Linked List - Insertion in the middle using before data value
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
void insertmid(int value2,int n);
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

void insertmid(int value2,int n)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\nUnable to allocate memory.");
	}
	else
	{
		newnode->data=value2;
		newnode->link=NULL;
		temp=head;
		while(temp!=NULL)
		{
			if(temp->data==n)
			{
				newnode->link=temp->link;
				temp->link=newnode;
				break;
			}
			else
			{
				temp=temp->link;
			}
		}
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
	int num,element1,element2,a;
	printf("Enter the number of elements to be entered in the list :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element1);
		insertend(element1);
	}
	display();
	printf("\nEnter the element to add at the middle of the list :- ");
	scanf("%d",&element2);
	printf("\nEnter the data after which element is to inserted the in list :- ");
	scanf("%d",&a);
	insertmid(element2,a);
	display();
	return 0;
}

// Input -> 5 -> 1,2,3,5,6 ---> 4,3
// Output -> 1,2,3,4,5,6
