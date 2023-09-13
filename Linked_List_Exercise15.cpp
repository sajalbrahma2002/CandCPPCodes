// Vpropel Exercise - Deletion In Linked List
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*head,*temp,*newnode,*prev,*dnode;

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
		temp=newnode;
	}
}

void display()
{
	temp=head;
	if(head==NULL)
	printf("\nList is empty.");
	else
	{
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
	}
}

void delete_beg()
{
	dnode=head;
	head=head->link;
	free(dnode);
}

void delete_mid()
{
	prev=head;
	temp=head->link;
	while(temp->link->link!=NULL)
	{
		prev=prev->link;
		temp=temp->link;
	}
	if(temp->link->link==NULL)
	{
		dnode=temp;
		prev->link=temp->link;
		free(dnode);
	}
}

void delete_end()
{
	prev=head;
	temp=head->link;
	while(temp->link!=NULL)
	{
		prev=prev->link;
		temp=temp->link;
	}
	if(temp->link==NULL)
	{
		prev->link=temp->link;
		dnode=temp;
		free(dnode);
	}
}

int main()
{
	int num,element;
	printf("Enter the number of elemnets to be inserted in the list :- ");
	scanf("%d",&num);
	printf("\nEnter the elments in the list :- \n");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element);
		create(element);
	}
	delete_beg();
	delete_end();
	delete_mid();
	printf("\nList after deletion of element in the list :- ");
	display();
	return 0;
}

// Input -> 6 -> 1 2 3 4 5 6
// Output -> 2 3 5 
