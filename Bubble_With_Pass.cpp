// Bubble Sorting With Printing Every Pass 
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
  int num,temp;
  printf("SAJAL BRAHMA - 21BPS1045");
  printf("\nEnter the size of the array :- ");
  scanf("%d",&num);
  int array[num];
  printf("\nEnter the elements in tha array :- ");
  for(int i=0;i<num;i++)
  {
     scanf("%d",&array[i]);
  }
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
     printf("\nPass %d :- ",i+1);
     for (int k=0;k<num;k++)
     {
        printf("%d ",array[k]);
     }
   }
   printf("\nArray after Sorting :- ");
   for(int i=0;i<num;i++)
   {
      printf("%d ",array[i]);
   }
   return 0;
 } 

