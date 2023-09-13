// Binary Search Using Recurrsion Function
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int BinarySearch(int arr[],int n,int x,int a,int b)
{
	int z=0,mid=0;
	while(a<=b)
	{
		mid=(a+b)/2;
		if(x==arr[mid])
		{
			z=1;
			return 1;
		}
		else if(x>arr[mid])
		{
			a=mid+1;
			BinarySearch(arr,n,x,a,b);
		}
		else
		{
			b=mid-1;
			BinarySearch(arr,n,x,a,b);	
		}
	}
	if(z==0)
	{
		return -1;
	}
}

int main()
{
	int num,key,temp;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];
	printf("\nEnter the elements in the array :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nEnter the element to be searched :- ");
	scanf("%d",&key);
	for(int i=0;i<num-1;i++)
	{
		for(int j=0;j<num-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	int low=0;
	int high=num-1;
	int ans=BinarySearch(array,num,key,low,high);
	if(ans==1)
	{
		printf("\nElement Found!");
	}
	else
	{
		printf("\nElement Not Found!");
	}
	return 0;
}

// Input -> 10 -> 10 9 8 7 6 5 4 3 2 1 -> 8
// Output -> Element Found!
