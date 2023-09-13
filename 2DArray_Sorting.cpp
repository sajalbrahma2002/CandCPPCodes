// 2D Array Sorting - 2D to 1D array and Sorting
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int row,col,temp;
	printf("Enter no of rows in the matrix :- ");
	scanf("%d",&row);
	printf("\nEnter no of column in the matrix :- ");
	scanf("%d",&col);
	int array[row][col];
	printf("\nEnter array elements :- \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	int arr[row*col];
	int k=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			arr[k]=array[i][j];
			k++;
		}
	}
	for(int i=0;i<k-1;i++)
	{
		for(int j=0;j<k-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	int x=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			array[i][j]=arr[x];
			x++;
		}
	}
	printf("\nArray after sorting :- \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	return 0;
}

// Input -> 3,3 -> 9 8 7 6 5 4 3 2 1
// Output -> 1 2 3 4 5 6 7 8 9
