// Fixed Point in an array where arr[i]=i
// SAHAL BRAHMA -21BPS1045

#include<stdio.h>

int main()
{
	int num;
	printf("Enter size of the array :- ");
	scanf("%d",&num);
	int array[num];
	printf("\nEnter array elements in sorted order :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<num;i++)
	{
		if(array[i]==i)
		{
			printf("\nElement %d found at index :- %d",array[i],i);
		}
	}
	return 0;
}

// Input -> 5 -> 1 2 3 5 4
// Output -> 4 ,4
