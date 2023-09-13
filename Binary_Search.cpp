// Linear Search
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,k,low,high,mid=0,temp,x=0;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];
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
	printf("\nArray after Sorting :- ");
	for(int i=0;i<num;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\nEnter the element to be searched in the array :- ");
	scanf("%d",&k);
	low=0;
	high=num-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(k==array[mid])
		{
			x=1;
			printf("\nElement %d found at position :- %d",array[mid],mid+1);
			break;
		}
		else if(k>array[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	if(x==0)
	{
		printf("\nElement not found in the array!");
	}
	return 0;
}

// Input -> 10 = 10 9 8 7 6 5 4 3 2 1
// Output -> 1 2 3 4 5 6 7 8 9 10
// Input -> 8
// Output -> 8
