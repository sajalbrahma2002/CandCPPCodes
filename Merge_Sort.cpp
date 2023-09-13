// Merge Sort (Ascending Order)
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
void Mergesort(int arr[],int low,int high);
void Merge(int arr[],int l,int m,int h);

void Mergesort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid =(low+high)/2;
		Mergesort(arr,low,mid);
		Mergesort(arr,mid+1,high);
		Merge(arr,low,mid,high);
	}
}

void Merge(int arr[],int l,int m,int h)
{
	int i=l;
	int j=m+1;
	int k=l;
	int temp[20];
	while(i<=m && j<=h)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
		}
		k++;	
	}
	while(i<=m)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=h)
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	for(i=l;i<=h;i++)
	{
		arr[i]=temp[i];
	}
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
	
	// Mergesort function calling
	Mergesort(array,0,num-1);
	
	for(int i=0;i<num;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}

// Input -> 10 -> 10 9 8 7 6 5 4 3 2 1
//Output -> 1 2 3 4 5 6 7 8 9 10
