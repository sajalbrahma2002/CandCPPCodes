// Implementing Queues using Arrays
// SAJAL BRAHMA -21BPS1045

#include<stdio.h>
#include<stdlib.h>
#define max 10

int front=-1,rear=-1;
int queue[max];

void Enqueue(int value)
{
	if(rear==max-1)
	{
		printf("\nQueue is full.");
		return;
	}
	if(front=-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear=rear+1;
	}
	queue[rear]=value;	
}

void Dequeue()
{
	if(front==-1)
	{
		printf("\nQueue is empty.");
		return;
	}
	else
	{
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
	}
}

void display()
{
	if(front==rear)
	{
	    printf("\nQueue is empty.");
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			printf("%d -> ",queue[i]);
		}
		printf("NULL");
	}
}
int main()
{
	int num;
	printf("\nEnter the number of elements to be inserted in a queue(max 10) :- ");
	scanf("%d",&num);
	printf("\nEnter the elements :- \n");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&queue[i]);
		Enqueue(queue[i]);
	}
	printf("\nQueue after insertion of element in the list :- ");
	display();
	Dequeue();
	printf("\nQueue after deletion of element in the list :- ");
	display();
	return 0;
}

// Input -> 5 -> 1 2 3 4 5
// Output -> 1 2 3 4 5 --> 2 3 4 5
