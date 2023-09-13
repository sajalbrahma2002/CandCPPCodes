// DSA CAT2 - Ques 3
//SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*head,*temp,*newnode,*prev;

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

void averageinsert()
{
	prev=head;
	temp=head->link;
	if(head==NULL)
	{
		printf("\nList is empty.");
		return;
	}
	else if(head->link==NULL)
	{
		printf("Just 1 element in the list.");
	}
	else
	{
		while(temp!=NULL)
		{
			int val=(prev->data+temp->data)/2;
			newnode=(struct node*)malloc(sizeof(struct node));
	        newnode->data=val;
	        newnode->link=temp;
	        prev->link=newnode;
	        prev=temp;
	        temp=temp->link;
		}
	}
}

void display()
{
	temp=head;
	if(head==NULL)
	{
		printf("\nList is empty.");
		return;
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
		create(element);
	}
	printf("\nElements of the list :- ");
	display();
	averageinsert();
	printf("\nElements of the list after insertion of average elements in the middle :- ");
	display();
	return 0;
}
