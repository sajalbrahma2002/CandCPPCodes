// Quick Sort (Ascending Order)
// SAJAL BRAHMA -21BPS1045

#include<stdio.h>
void Quicksort(int arr[],int low,int high);   // Prototyping
int Partition(int arr[],int start,int end);   // Prototyping

void Quicksort(int arr[],int low,int high)
{
	if(low<high)
	{
		int loc=Partition(arr,low,high);
		Quicksort(arr,low,loc-1);            // Sort for 0 to pivot-1 position
		Quicksort(arr,loc+1,high);           // Sort for pivot+1 to last position
	}
}

int Partition(int arr[],int start,int end)
{
	int pivot=arr[start];                    // First eleent as pivot
	int left=start+1;                        // incremenet left by 1
	int right=end;
	int temp1,temp2;
	while(left<=right)
	{
		while(arr[left]<=pivot)
		{
			left++;
		}
		while(arr[right]>pivot)
		{
			right--;
		}
		if(left<right)
		{
			temp1=arr[left];
			arr[left]=arr[right];
			arr[right]=temp1;
		}
	}
	if(left>right)
	{
		temp2=arr[start];
		arr[start]=arr[right];
		arr[right]=temp2;	
	}
	return right;                                // Return position of pivot
}

int main()
{
	int num;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];
	printf("\nEnter the elements in the array :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	Quicksort(array,0,num-1);
	printf("\nArray after Sorting :- ");
	for(int i=0;i<num;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}

// Input -> 8 -> 5 3 8 1 4 6 2 7
// Output -> 1 2 3 4 5 6 7 8
