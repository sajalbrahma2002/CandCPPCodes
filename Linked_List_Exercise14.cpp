// Doubly Linked List - Deletion In Linked List
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
}*head,*tail,*newnode,*temp,*dnode;

void create(int value)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->left=NULL;
	newnode->right=NULL;
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
		tail=newnode;
	}
	else
	{
		temp->right=newnode;
		newnode->left=temp;
		temp=newnode;
		tail=newnode;
	}
}

void delete_beg()
{
	dnode=head;
	head=head->right;
	free(dnode);
}

void delete_mid(int val)
{
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==val)
		{
			dnode=temp;
			temp->left->right=temp->right;
			temp->right->left=temp->left;
			free(dnode);
			return;
		}
		else
		{
			temp=temp->right;
		}
	}
}

void delete_end()
{
	dnode=tail;
	tail->left->right=tail->right;
	free(dnode);
}

void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->right;
	}
	printf("NULL");
}

int main()
{
	int ch,num,element,x;
	do
	{
		printf("\n1. Create a list. ");
		printf("\n2. Delete the first element of the list. ");
		printf("\n3. Delete element from the middle of the list. ");
		printf("\n4. Delete the last element of the list. ");
		printf("\n5. Display the List. ");
		printf("\nEnter your choice :- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\nEnter the number of elements to be inserted in the list :- ");
			        scanf("%d",&num);
			        printf("\nEnter the elements :- \n");
			        for(int i=0;i<num;i++)
			        {
			        	scanf("%d",&element);
			        	create(element);
					}
					printf("\nElements after insertion in the list :- ");
					display();
					break;
					
			case 2: delete_beg();
			        printf("\nElements after deletion of first element in the list :- ");
					display();
					break;
					
			case 3: printf("\nEnter the element to be deleted :- ");
			        scanf("%d",&x);
			        delete_mid(x);
			        printf("\nElements after deletion of element in the list :- ");
					display();
					break;
			        
				
		    case 4: delete_end();
		            printf("\nElements after deletion of last element in the list :- ");
					display();
					break;
					
			case 5: printf("\nElements of the list :- ");
			        display();
			        break;
					
			default:printf("\nWrong Choice.");
			        break;
		}
	}while(ch==1||ch==2||ch==3||ch==4);
	return 0;
}

// Input -> 1 -> 1 2 3 4 5
// Input -> 2 -> 2 3 4 5
// Input -> 3 -> 3 -> 2 4 5
// Input -> 4 -> 2 4
// Input -> 5 -> 2 4 
