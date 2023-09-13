// Program to sort a 2D array row wise and column wise using insertion sort
// SAJAL BRAHMA
#include<stdio.h>

int main()
{
	int row,col,key;
	printf("Enter the number of rows in the array :- ");
	scanf("%d",&row);
	printf("\nEnter the number of column in the array :- ");
	scanf("%d",&col);
	int arr1[row][col];
	int arr2[row][col];
	printf("\nEnter array elements :- \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			arr2[i][j]=arr1[i][j];
		}
	}
	
	// for sorting row wise
	for(int i=0;i<row;i++)
	{
		for(int j=1;j<col;j++)
		{
			key=arr1[i][j];
			int k=j-1;
			while(k>=0 && key<arr1[i][k])
			{
				arr1[i][k+1]=arr1[i][k];
				k--;
			}
			arr1[i][k+1]=key;
		}
	}
	printf("\n Array after sorting Row wise :- \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	
	// for sorting column wise
	for(int j=0;j<col;j++)
	{
		for(int i=1;i<row;i++)
		{
			key=arr2[i][j];
			int k=i-1;
			while(k>=0 && key<arr2[k][j])
			{
				arr2[k+1][j]=arr2[k][j];
				k--;
			}
			arr2[k+1][j]=key;
		}
	}
	printf("\n Array after sorting Column wise :- \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}

// Input -> 3 X 3 -> 5 3 6 16 1 11 21 8 9
// Output -> 3 5 6 1 11 16 8 9 21 , 5 16 21 1 3 8 6 9 11
