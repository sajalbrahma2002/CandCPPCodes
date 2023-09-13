// Linked List - Deletion in the middle of the list
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*head,*temp,*newnode,*prev,*dnode;

void create(int value1);
void delete_mid(int value2);
void display();

void create(int value)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->link=NULL;
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp->link=newnode;
		temp=temp->link;               // temp=newnode;
	}
}

void delete_mid(int value2)
{
	prev=head;
	temp=head->link;
	while(temp->link!=NULL)
	{
		if(temp->data==value2)
		{
			prev->link=temp->link;
			dnode=temp;
			free(dnode);
			break;
		}
		else
		{
			temp=temp->link;
			prev=prev->link;
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

	int num,element1,element2;
	printf("Enter the number of elements to be entered in the list :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element1);
		create(element1);
	}
	display();
	printf("\nEnter the data to be deleted from the list :- ");
	scanf("%d",&element2);
	delete_mid(element2);
	display();
	return 0;
}

// Input -> 5 -> 1,2,3,4,5 ->3
// Output -> 1,2,4,5
