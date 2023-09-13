// Sorting In Singly Linked List
// SAJAL BRAHMA - 21BPS0145

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*head,*temp,*newnode,*ptr;

void insert_end(int value)
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
		    while(temp->link!=ptr)
		    {
			    if(temp->data>temp->link->data)
			    {
				    value=temp->data;
				    temp->data=temp->link->data;
			    	temp->link->data=value;
				    flag=1;
			    }
			temp=temp->link;
		    }
		    ptr=temp;
		}while(flag);
	}
}

void display()
{
	temp=head;
	if(head==NULL)
	{
		printf("\nList is empty. ");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d ->",temp->data);
			temp=temp->link;
		}
		printf("NULL");
	}
}

int main()
{
	int num,element;
	printf("Enter the number of elements to be inserted in the list :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element);
		insert_end(element);
	}
	printf("\nList before sorting :- ");
	display();
	printf("\nList after sorting :- ");
	sort();
	display();
	return 0;
}

// Input -> 5 -> 5 4 3 2 1
// Output -> 1 2 3 4 5
