// Insertion Sort (Ascending Order)
// SAJAL BRAHMA - 21BPS1045
#include<stdio.h>

int main()
{
	int num,temp,i,j;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];  // Dynamic allocation of size of array
	for(i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=1;i<num;i++)
	{
		temp=array[i];
		j=i-1;
		while(temp<array[j] && j>=0)
		{
			array[j+1]=array[j];
			--j;
		}
		array[j+1]=temp;
	}
	printf("\nArray after Insertion Sort :- ");
	for(i=0;i<num;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}

// INPUT = 34 8 64 51 32 21
// OUTPUT = 8 21 32 34 51 64
