// Implementation of stacks using Linked list
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*head,*top,*newnode,*dnode;

void push(int value);
void pop();
void display();

void push(int value)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("\nNo memory allocation to able to push the element.");
	}
	else
	{
		newnode->data=value;
		if(top==NULL)
		{
			newnode->link=NULL;
			head=newnode;
			top=newnode;
		}
		else
		{
			newnode->link=top;
			top=newnode;
			head=newnode;
		}
	}
}

void pop()
{
    top=head;
	if(top==NULL)
	{
		printf("\nStack is empty.");
	}
	else
	{
		dnode=top;
		head=top->link;
		top=top->link;
		free(dnode);
	}
}

void display()
{
    top=head;
	if(top==NULL)
	{
		printf("\nStack is empty.");
	}
	else
	{
		while(top!=NULL)
		{
			printf("%d -> ",top->data);
			top=top->link;
		}
		printf("NULL");
	}
}

int main()
{
	int num,element;
	printf("Enter the elements to be inserted in the stack implemented by a linked list :- ");
	scanf("%d",&num);
	printf("\nEnter the elements :-\n");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element);
		push(element);
	}
	printf("\nStack elements after pushing :- ");
	display();
	pop();
	printf("\nStack elements after popping :- ");
	display();
	return 0;	
}

// Input -> 5 -> 1 2 3 4 5
// Output -> 5 4 3 2 1 Null --> 4 3 2 1 Null
