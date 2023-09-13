// To arrange the numbers in ascending order if positive and decending if negative
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,temp=0,count=0;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	printf("\nEnter the elements in the array :- ");
	int array[num];
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<num-1;i++)
	{
		for(int j=0;j<num-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	for(int i=0;i<num;i++)
	{
		if(array[i]<0)
		{
			count++;
		}
	}
	for(int i=0;i<count-1;i++)
	{
		for(int j=0;j<count-i-1;j++)
		{
			if(array[j]<array[j+1])
			{
				temp=array[j+1];
				array[j+1]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\nArray after Sorting :- ");
	for(int i=0;i<num;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}

// Input -> 7 -> 5 1 -2 0 3 -6 -4
// Output -> -2 -4 -6 0 1 3 5
