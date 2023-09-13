// Stacks - Exercise 2
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<string.h>
void Push();
void Pop();
int top=-1;
char arr[10];

void Push()
{
	top=top+1;
	arr[top]='(';
}

void Pop()
{
	if(top==-1)
	{
		printf("Stack is empty.");
	}
	else
	{
		top=top-1;
	}
}

int main()
{
	char array[20];
	printf("Enter the expression :- ");
	scanf("%s",&array);
	int len=strlen(array);
	int j=0;
	for(int i=0;i<len;i++)
	{
		if(array[i]=='(')
		{
			Push();
		}
		if(array[i]==')')
		{
		    Pop();	
		}
	}
	if(top==-1)
	{
		printf("\nBalanced expression.");
	}
	else
	{
		printf("\nUnbalance expression.");
	}
	return 0;
}

// Input -> ((a+b)-(c))
// Output -> Balanced Expression
