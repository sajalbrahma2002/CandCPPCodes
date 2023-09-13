// Linked List - Deletion in the end
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*head,*temp,*newnode,*dnode,*prev;

void create(int value);
void deleteend();
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

void delete_end()
{
	prev=head;
	temp=head->link;
	while(temp->link!=NULL)
	{
		temp=temp->link;
		prev=prev->link;
	}
	if(temp->link==NULL)
	{
		prev->link=temp->link;
		dnode=temp;
		free(dnode);
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
		create(element);
	}
	delete_end();
	display();
	return 0;
}

// Input -> 5 -> 1,2,3,4,5
// Output -> 1,2,3,4
