// Insertion Sorting With Printing Every Pass 
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
  int num,temp,j;
  printf("SAJAL BRAHMA - 21BPS1045");
  printf("\nEnter the size of the array :- ");
  scanf("%d",&num);
  int array[num];
  printf("\nEnter the elements in tha array :- ");
  for(int i=0;i<num;i++)
  {
     scanf("%d",&array[i]);
  }
  for(int i=1;i<num;i++)
  {
     temp=array[i];
     j=i-1;
     while(j>=0 && array[j]>temp)
     {
         array[j+1]=array[j];
         j--;
     }
     array[j+1]=temp;
     printf("\nPass %d :- ",i);
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


        
