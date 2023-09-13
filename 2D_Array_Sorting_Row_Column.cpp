// 2D Array Sorting - rowwise and column wise seperately
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int row,col,key;
	printf("Enter the number of rows in the 2D array :- ");
	scanf("%d",&row);
	printf("\nEnter the number of columns in the 2D array :- ");
	scanf("%d",&col);
	int arr1[row][col];
	int arr2[row][col];
	printf("\nEnter array elements :- \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&arr1[i][j]);
			arr2[i][j]=arr1[i][j];
		}
	}
	// for sorting rowwise
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
	//printing after rowwise sorting
	printf("\nArray after sorting rowwise :-");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	// for sorting columnwise
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
	//printing after columnwise sorting
	printf("\nArray after sorting columnwise :-");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
}

// Input - 3x3 -> 3 2 1 6 5 4 9 8 7
// Output - 123 456 789 123 456 789
