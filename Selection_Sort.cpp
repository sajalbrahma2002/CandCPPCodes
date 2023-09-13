// Selection Sort (Ascending Order)
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,min,temp;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];   // Dynamic allocation of size of array
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<num-1;i++)
	{
		min=i;
		for(int j=i+1;j<num;j++)
		{
			if(array[j]<array[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=array[i];
			array[i]=array[min];
			array[min]=temp;
		}
	}
	printf("\nArray after Selection Sort :- ");
	for(int i=0;i<num;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
