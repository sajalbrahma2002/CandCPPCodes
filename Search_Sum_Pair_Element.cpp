// Searching for pair of elements whose sum is equal to entered number
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

void Search(int arr[],int n,int x)
{
	int p1[n/2];
	int p2[n/2];
	int a=0,sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			sum=arr[i]+arr[j];
			if(sum==x)
			{
				p1[a]=arr[i];
				p2[a]=arr[j];
				a++;
			}
		}
	}
	printf("Sets :- \n");
	for(int i=0;i<a;i++)
	{
		printf("%d  %d \n",p1[i],p2[i]);
	}
}

int main()
{
	int num,key;
	printf("\nenter the size of the array :- ");
	scanf("%d",&num);
	int array[num];
	printf("\nEnter the array elements in the sorted order :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nEnter the element whose sum pair elements are to be searched :- ");
	scanf("%d",&key);
	Search(array,num,key);
	return 0;
}

// Input -> 10 -> 1 2 3 4 5 6 7 8 9 10 -> 10
// Output -> 1 9 ,2 8 ,3 7 ,4 6 ,5 5 ,6 4 ,7 3 ,8 2 ,9 1.
