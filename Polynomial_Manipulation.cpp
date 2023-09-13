// Polynmial Manipulation
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int coff;
	int exp;
	struct node *link;
}*newnode,*temp;

struct node *insert(struct node *head,int co,int pow)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->coff=co;
	newnode->exp=pow;
	newnode->link=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else if(pow>head->exp)
	{
		newnode->link=head;
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->link!=NULL && temp->link->exp>=pow)
		{
			temp=temp->link;
		}
		temp->link=newnode;
	}
	return head;
}

struct node *create(struct node *head)
{
	int num,c,e;
	printf("\nEnter number of terms in the polynomial :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		printf("\nEnter the cofficient of term %d :- ",i+1);
		scanf("%d",&c);
		printf("\nEnter the exponent of the term %d :- ",i+1);
		scanf("%d",&e);
		head=insert(head,c,e);
	}
	return head;
}

void print_polynomial(struct node *head)
{
	if(head==NULL)
	printf("\nNo polynomial.");
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d x^(%d) ",temp->coff,temp->exp);
			temp=temp->link;
			if(temp!=NULL)
			printf("+");
			else
			printf("\n");
		}
	}
}

void add(struct node *H1,struct node *H2)
{
	struct node *temp1=H1;
	struct node *temp2=H2;
	struct node *head3=NULL;
	while(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->exp==temp2->exp)
		{
			head3=insert(head3,temp1->coff+temp2->coff,temp1->exp);
			temp1=temp1->link;
			temp2=temp2->link;
		}
		else if(temp1->exp>temp2->exp)
		{
			head3=insert(head3,temp1->coff,temp1->exp);
			temp1=temp1->link;
		}
		else if(temp2->exp>temp1->exp)
		{
			head3=insert(head3,temp2->coff,temp2->exp);
			temp2=temp2->link;
		}
	}
	while(temp1!=NULL)
	{
		head3=insert(head3,temp1->coff,temp1->exp);
		temp1=temp1->link;
	}
	while(temp2!=NULL)
	{
		head3=insert(head3,temp2->coff,temp2->exp);
		temp2=temp2->link;
	}
	print_polynomial(head3);
}

int main()
{
	struct node *head1=NULL;
	struct node *head2=NULL;
	head1=create(head1);
	head2=create(head2);
	add(head1,head2);
	return 0;
}

// Input -> Poly 1 -> 3 terms -> 3,3 -> 2,2 -> 1,1
// Input -> Poly 2 -> 3 terms -> 4,3 -> 6,2 -> 6,1
// Output -> 7,3 -> 8,2 -> 7,1
