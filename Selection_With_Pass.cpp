// Selection Sorting With Printing Every Pass 
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
  int num,temp,min;
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
    min=i;
    for(int j=i+1;j<num;j++)
    {
      if(array[j]<array[min])
      {
         min=j;
      }
    }
    if(min!=i)
    {
       temp=array[i];
       array[i]=array[min];
       array[min]=temp;
    }
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

  
