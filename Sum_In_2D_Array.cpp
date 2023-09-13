// To sum the numbers in rows and column in 2D array
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int row,col,sum=0;
	printf("Enter the numbers of row in the 2D array :- ");
	scanf("%d",&row);
    printf("Enter the numbers of column in the 2D array :- ");
	scanf("%d",&col);
	int array[row][col];   // Dynamic allocation of the size of the array
	printf("\nEnter the elements in the array :- ");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&array[i][j]);
			sum=sum+array[i][j];
		}
	}
	printf("\nTotal sum of numbers in the 2D array :- %d",sum);
	return 0;
}

// Input -> 3 x 3 -> 1 2 3 4 5 6 7 8 9
// Output = 45
