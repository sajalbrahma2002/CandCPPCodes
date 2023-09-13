// Circular Linked list - Josephus Game
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*head,*temp,*newnode,*temp1,*temp2,*ptr,*dnode,*head1;

void create(int value);
void create(int value);
struct node *delete_node(int n,int p);

void create(int value)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->link=NULL;
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
		newnode->link=head;
	}
	else
	{
		temp=head;
		while(temp->link!=head)
		{
			temp=temp->link;
	    }
	    temp->link=newnode;
	    newnode->link=head;
	    temp=newnode;
	}
}

void display(struct node *head)
{
	temp=head;
	if(head==NULL)
	{
		printf("\nList is empty. ");
	}
	else
	{
		printf("head ->");
		while(temp->link!=head)
		{
			printf("%d ->",temp->data);
			temp=temp->link;
		}
		printf("%d ->head",temp->data);
	}
}

struct node *delete_node(int n,int p)
{
	temp1=head;
	temp2=head;
	int i=1;
	while(temp1->link!=temp1)
	{
		int count=1;
		while(count!=p)
		{
			temp2=temp1;
			temp1=temp1->link;
			count++;
		}
		temp2->link=temp1->link;
		dnode=temp1;
		temp1=temp2->link;
		free(dnode);
		ptr=temp1;
		printf("After round %d :: ",i);
		i++;
		printf("head ->%d ->",ptr->data);
		ptr=ptr->link;
		while(ptr!=temp1)
		{
			printf("%d ->",ptr->data);
			ptr=ptr->link;
		}
		printf("head\n");
		
	}
	printf("Player Number left :- %d",temp1->data);	
	return temp1;
}

int main()
{
	int num,pos;
	printf("Enter the number of players playing the game :- ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		create(i);
	}
	printf("\nPlayers are given serial number and they are sitting serialwise in a ring as :- \n");
	display(head);
	printf("\n\nEnter the position be eliminated after every round :- ");
	scanf("%d",&pos);
	printf("\n");
	head1=delete_node(num,pos);
	printf("\nElements of the list left :- ");
	display(head1);
	return 0;	
}

// Input -> Players = 10 & position = 10
// Output ->
//Players are given serial number and they are sitting serialwise in a ring as :-
//head ->1 ->2 ->3 ->4 ->5 ->6 ->7 ->8 ->9 ->10 ->head

//Enter the position be eliminated after every round :- 10

//After round 1 :: head ->1 ->2 ->3 ->4 ->5 ->6 ->7 ->8 ->9 ->head
//After round 2 :: head ->2 ->3 ->4 ->5 ->6 ->7 ->8 ->9 ->head
//After round 3 :: head ->4 ->5 ->6 ->7 ->8 ->9 ->2 ->head
//After round 4 :: head ->7 ->8 ->9 ->2 ->4 ->5 ->head
//After round 5 :: head ->4 ->5 ->7 ->8 ->9 ->head
//After round 6 :: head ->4 ->5 ->7 ->8 ->head
//After round 7 :: head ->7 ->8 ->4 ->head
//After round 8 :: head ->8 ->4 ->head
//After round 9 :: head ->8 ->head
//Player Number left :- 8
//Elements of the list left :- head ->8 ->head

