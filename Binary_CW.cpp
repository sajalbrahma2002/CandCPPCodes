// Binary Search Classwork
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
  int num,low,mid=0,high,temp,key,x=0;
  printf("SAJAL BRAHMA -21BPS1045");
  printf("\nEnter the size of the array :- ");
  scanf("%d",&num);
  int array[num];
  printf("\nEnter the elements in tha array :- ");
  for(int i=0;i<num;i++)
  {
     scanf("%d",&array[i]);
  }
  printf("\nEnter the element to be searched :- ");
  scanf("%d",&key);
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
   }
  printf("\nArray after Sorting :- ");
  for(int i=0;i<num;i++)
   {
      printf("%d ",array[i]);
   }
  low=0;
  high=num-1;
  while(low<=high)
  {
     mid=(low+high)/2;
     if(key==array[mid])
     {
        x=1;
        printf("\nElement Found !");
        break;
     }
     else if(key>array[mid])
     {
        low=mid+1;
     }
     else
     {
         high=mid-1;
     }
   }
   if(x==0)
   {
      printf("Element not Found !");
   }
  return 0;
}

