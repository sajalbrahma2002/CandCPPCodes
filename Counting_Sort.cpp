// Counting Sort 
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,key;
	printf("\nEnter the size of the array :- ");
	scanf("%d",&num);
	int array1[num];            // for storing array elements
	int array3[num];            // for storing array element after counting sorting
	printf("\nEnter array elements :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array1[i]);
	}
	int max=array1[0];          // Find the maximum in the array to decide the length of array2[]
	for(int i=1;i<num;i++)
	{
		if(max<array1[i])
		{
			max=array1[i];
		}
	}
	int array2[max+1];          // for storing number of each elements occurred in the array
	for(int i=0;i<=max;i++)
	{
		array2[i]=0;            // declaring each index in the array 0   
	}
	for(int i=0;i<num;i++)
	{
		key=array1[i];          // extracting each number from the array
		array2[key]++;          // incrementing the value at the index of the extracted element
	}
	for(int i=1;i<=max;i++)
	{
		array2[i]=array2[i]+array2[i-1];         // storing the indexes of elements to store it in array3[]
	}
	for(int i=num-1;i>=0;i--)
	{
		if(array2[array1[i]]>0)                 // checking if the value at a particular is greater to 0
		array3[--array2[array1[i]]]=array1[i];  // array1 gives the value to store, array2[array1] finds the index of the value and store value at array3[arra2[arra1[]]] 
	}
	for(int i=0;i<num;i++)                       // print the sorted array
	{
		printf("%d ",array3[i]);
	}
	return 0;	
}

// Input - 17 -> 2 1 1 0 2 5 4 0 2 8 7 7 9 2 0 1 9
// Output -> 0 0 0 1 1 1 2 2 2 2 4 5  7 7 8 9 9
