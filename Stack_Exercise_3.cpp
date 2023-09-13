// Display the binary number of the entered number
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
int array[5],top=-1;
int Push(int x);
 
int Push(int x)
{
	if(top==4)
	{
		return -1;
	}
	else
	{
		top=top+1;
		array[top]=x;
		return top;
	}
}

int main()
{
	int num,mod,temp=0;
	printf("Enter the number (Stack size 5) :- ");
	scanf("%d",&num);
	while(num!=0 && temp!=-1)
	{
		mod=num%2;
		temp=Push(mod);
		num=num/2;	
	}
	if(temp==-1)
	{
		printf("Stack is full. Binary number can't be accomodated in the stack.");
	}
	else
	{
		for(int i=top;i>=0;i--)
		printf("%d ",array[i]);
	}
}

// Input -> 31
// Output -> 1 1 1 1 1
