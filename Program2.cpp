// To display the diagonal elements
// SAJAL BRAHMA - 21BPS1045
#include<stdio.h>

int main()
{
  int array[4][4];
  printf("\nSAJALBRAHMA -21BPS1045\n");
  printf("Enter the elements in the 4x4 matrix :- \n");
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
       scanf("%d",&array[i][j]);
    } 
  }
  printf("\nDiagonal Elemnts :- \n");
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
       if(i==j)
       {
         printf("%d ",array[i][j]);
       }
    } 
  }
  printf("\n");
  for(int i=0,j=3;i<4,j>=0;i++,j--)
  {
    printf("%d ",array[i][j]);
  }
  return 0;
}

// INPUT = 5 7 9 4
//         2 4 7 3
//         1 5 9 2
//         3 7 4 8

// OUTPUT = 5 4 9 8
//          4 7 5 3
