// Stacks - Exercise 1 
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
int Push();
int Pop();

int array[10];
int top=9;

int Push()
{
	if(top==9)
	{
		printf("\nStack if full.");
		return -1;
	}
	else
	{
		top=top+1;
		return top;
	}
}

int Pop()
{
	if(top==-1)
		printf("\nStack is empty.");
	
	else if(top==3)
	{
		printf("\nRequesting to order sack of rice to refill the stack.");
	    return -1;
	}
	else
	    top=top-1;
}

int main()
{
	int temp=0,flag=0;
	int c1=1,c2=1;
	printf("Sack of rice present :- %d",top+1);
	while(temp!=-1 && c1==1)
	{
		printf("\nDo you want the retailer to take off a sack of rice from top(1/0) :- ");
		scanf("%d",&c1);
		if(c1==1 && temp!=-1)
		{
			temp=Pop();
			printf("\nSacks of rice left in the stack :- %d",top+1);
		}
	}
	if(temp==-1)
	{
		while(c2==1 && flag!=-1)
		{
			printf("\nDo you want to add sack of rice(1/0) :- ");
			scanf("%d",&c2);
			if(c2==1 && flag!=-1)
			{
				flag=Push();
				printf("\nSacks of rice after adding :- %d",top+1);
			}
		}
	}
	return 0;
}

// Output - 9 8 7 6 5 4 and request to order.
