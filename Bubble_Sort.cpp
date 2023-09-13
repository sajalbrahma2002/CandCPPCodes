//Bubble Sort (Ascending Order)
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,temp;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];   // Dynamic allocation of size of array
	printf("\nEnter the elements in the array :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<num-1;i++)
	{
		for(int j=0;j<num-1-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("\nArray after Bubble sort :- ");
	for(int i=0;i<num;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}

// Input = num -> 8 -> 2 6 9 9 3 7 11 12
// Output = 2 3 6 7 9 9 11 12
