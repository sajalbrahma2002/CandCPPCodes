// To find the maximum and minimum in an array
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,min,max;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];  // Dynamic allocation of size of array
	printf("\nEnter the numbers in the array :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	min=array[0];
	max=array[0];
	for(int i=1;i<num-1;i++)
	{
		if(min>array[i])
		{
			min=array[i];
		}
	}
	for(int i=1;i<num-1;i++)
	{
		if(max<array[i])
		{
			max=array[i];
		}
	}
    printf("\nMaximum number in the array is :- %d",max);	
    printf("\nMinimum number in the array is :- %d",min);
    return 0;
}

// Input = 9 7 5 3 1 0 8 6 4 2 
// Output = 9,0
