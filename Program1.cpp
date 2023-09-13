// To print the local maxima (if previous and after element is lesser than the number)
// SAJAL BRAHMA - 21BPS1045 
#include<stdio.h>

int main()
{
  int array[11];
  printf("\nSAJALBRAHMA -21BPS1045\n");
  printf("Enter the elements in the array :- ");
  for(int i=0;i<11;i++)
  {
    scanf("%d",&array[i]);  
  }
  for(int i=1;i<10;i++)
  {
    if(array[i]>array[i-1] && array[i]>array[i+1])
    {
        printf("%d ",array[i]);
    }
  }
  return 0;
}

// INPUT = 25,19,22,23,21,12,10,17,11,13,10
// OUTPUT = 23 17 13
