// Practice Exercise 3
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,sum=0;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];  // Dynamic allocation of the size of array
	printf("\nEnter the elements in the array :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<num-1;i++)
	{
		sum=sum+(array[i]*array[i+1]);
	}
	printf("\nSum of product of Consecutive numbers :- %d",sum);
	return 0;
}

// Input = 4 5 2 5 6 4 7
// Output = 122 
