// Single Linked List - Menu Driven
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*head,*temp,*temp1,*temp2,*newnode,*prev,*dnode;

void insert_beg(int value1);
void insert_mid(int value,int n1);
void insert_end(int value2);
void display();
void delete_beg();
void delete_mid(int n2);
void delete_end();


void insert_beg(int value1)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value1;
	newnode->link=head;
	head=newnode;
}

void insert_mid(int value,int n1)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->link=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		temp1=head;
		while(temp1!=NULL)
		{
			if(temp1->data==n1)
			{
				newnode->link=temp1->link;
				temp1->link=newnode;
				break;
			}
			else
			{
				temp1=temp1->link;
			}
		}
	}
}

void insert_end(int value2)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value2;
	newnode->link=NULL;
	if(head==NULL)
	{
		head=newnode;
		temp2=newnode;
	}
	else
	{
		temp2->link=newnode;
		temp2=temp2->link;
	}
}

void display()
{
	temp=head;
	while(temp!=NULL)
	{
		printf("%d-->",temp->data);
		temp=temp->link;
	}
	printf("NULL");
}

void delete_beg()
{
	dnode=head;
	head=head->link;
	free(dnode);
}

void delete_mid(int n2)
{
	prev=head;
	temp=head->link;
	while(temp!=NULL)
	{
		if(temp->data==n2)
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

int main()
{
	int ch,num,element,element1,element2,val1,element3,val2;
	do
	{
		printf("\n1. Create a list .");
		printf("\n2. Insert an element in the beginning.");
		printf("\n3. Insert an element in the middle.");
		printf("\n4. Insert an element in the end.");
		printf("\n5. Delete an element in the beginning.");
		printf("\n6. Delete an element in the middle.");
		printf("\n7. Delete an element in the end.");
		printf("\n8. Display the list.");
		printf("\nEnter your choice :- ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("\nEnter the number of elements to be entered in the list :- ");
			        scanf("%d",&num);
			        for(int i=0;i<num;i++)
			        {
			        	scanf("%d",&element);
			        	insert_end(element);
					}
					printf("\nThe elements after creation of list :- ");
					display();
					break;
			
			case 2: printf("\nEnter the element to be inserted in the beginning in the list :- ");
			        scanf("%d",&element1);
			        insert_beg(element1);
			        printf("\nThe elements after insertion of element in the beginning of the list :- ");
			        display();
			        break;
			        
			case 3: printf("\nEnter the element to be inserted in the middle of the list :- ");
			        scanf("%d",&element2);
			        printf("\nEnter the data after which is to b inserted in the list :- ");
			        scanf("%d",&val1);
			        insert_mid(element2,val1);
			        printf("\nThe elements after insertion of element in the end of the list :- ");
			        display();
			        break;
			        
			case 4: printf("\nEnter the element to be inserted in the end of the list :- ");
			        scanf("%d",&element3);
			        printf("ss");
			        insert_end(element3);
			        printf("\nThe elements after insertion of element in the end of the list :- ");
			        display();
			        break;
			        
			case 5: delete_beg();
			        printf("\nThe elements after the deletion of element from the beginning of the list :- ");
			        display();
			        break;
			        
			case 6: printf("\nEnter the element to be deleted  from the list :- ");
			        scanf("%d",&val2);
			        delete_mid(val2);
			        printf("\nThe elements after the deletion of element from the middle of the list :- ");
			        display();
			        break;
			        
			case 7: delete_end();
			        printf("\nThe elements after the deletion of element from the end of the list :- ");
			        display();
			        break;
			        
			case 8: printf("\nThe elements of the list :-");
			        display();
			        break;
			        
			default:printf("\nWrong Choice");
			        break;	        
		}
	}while(ch==1||ch==2||ch==3||ch==4||ch==5||ch==6||ch==7||ch==8);
	return 0;
}

// Input -> 1 -> 5 -> 1 2 3 4 5 
// Input -> 2 -> 0  --> 0 1 2 3 4 5
// Input -> 3 -> 7,3 --> 0 1 2 3 7 4 5
// Input -> 4 -> 6 --> 0 1 2 3 7 4 5 6
// Input -> 5 --> 1 2 3 7 4 5 6
// Input -> 6 -> 7 --> 1 2 3 4 5 6
// Input -> 7 --> 1 2 3 4 5
// Input -> 8 --> 1 2 3 4 5
