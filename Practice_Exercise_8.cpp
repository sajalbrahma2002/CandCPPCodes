// Program to Sort elements in even index as ascending order and elements in odd index as descending order
// SAJAL BRAHMA -21BPS1045

#include<stdio.h>

int main()
{
	int num,temp,j,k,min,max;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];
	printf("\nEnter the elements in the array :- ");
	for(int i=0;i<num;i++)
	scanf("%d",&array[i]);
	for(int i=0;i<num;i++)
	{
		if(i%2==0)
		{
			min=i;
			for(j=i+2;j<num;j=j+2)
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
		else
		{
			max=i;
			for(k=i+2;k<num;k=k+2)
			{
				if(array[k]>array[max])
				{
					max=k;
				}
			}
			if(max!=i)
			{
				temp=array[i];
				array[i]=array[max];
				array[max]=temp;
			}
		}
	}
	printf("\nArray after Sorting :- ");
	for(int i=0;i<num;i++)
	printf("%d ",array[i]);
	return 0;	
}

// Input -> 10 -> 10 9 8 7 6 5 4 3 2 1
// Output -> 2 9 4 7 6 5 8 3 10 1
