// Vpropel Exercise - Sort the pairs whose product is equal to entered number
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
}*head,*temp,*newnode,*temp1,*temp2;

int create(int value)
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

void sort(int value)
{
	temp1=head;
	while(temp1!=NULL)
	{
		temp2=temp1->link;
		while(temp2!=NULL)
		{
			if((temp1->data*temp2->data)==value)
			{
				printf("%d ",temp1->data);
				printf("%d\n",temp2->data);
			}
			temp2=temp2->link;
		}
		temp1=temp1->link;
	}
}

int main()
{
	int num,element,x;
	printf("Enter the number of elements to be entered in the list :- ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&element);
		create(element);
	}
	printf("\n Enter the value to check for pair product equivalent :- ");
	scanf("%d",&x);
	sort(x);
	return 0;	
}

// Input -> 6 -> 2 6 3 7 5 4 -> 12
// Output -> 2 6 , 3 4
