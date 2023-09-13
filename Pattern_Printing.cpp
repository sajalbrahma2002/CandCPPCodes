// Pattern Printing
#include<stdio.h>
int main()
{
   //Half Pyramid 
   int i, j, rows;
   printf("Enter the number of rows for the pyramid :- ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
    {
      for(j=1;j<=i;j++)
	   {
         printf("* ");
       }
      printf("\n");
   }
   
   // Full Pyramids 
   int space,k=0;
   printf("\nEnter the number of rows for the pyramid :- ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++,k=0) 
     {
        for(space=1;space<=rows-i;space++)
		  {
             printf("  ");
          }    
        while (k!=(2*i)-1)
		  {
             printf("* ");
             k++;
          }
        printf("\n");
     }  
   
   // Half Pyramids of Numbers
   printf("\nEnter the number of rows for half Pyramid of numbers :- ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
		 {
            printf("%d ",j);
         }  
        printf("\n");
    }
    
    // Full Pyramids Of Numbers
   int count=0,count1=0;
   printf("Enter the number of rows for Pyramid of Numbers :- ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++) 
    {
      for(space=1;space<=rows-i;space++) 
	  {
         printf("  ");
         count++;
      }
      while(k!=(2*i)-1)
	   {
         if(count<=rows-1) 
		  {
            printf("%d ",i+k);
            count++;
          }   
		 else 
		  {
            count1++;
            printf("%d ",(i+k-(2*count1)));
          }
         k++;
       }
      count1=count=k=0;
      printf("\n");
    }
    
   //Inverted Pyramids
   printf("Enter the number of rows for Inverted Pyramid :- ");
   scanf("%d",&rows);
   for(i=rows;i>=1;i--) 
    {
      for(space=0;space<rows-i;space++)
         printf("  ");
      for (j = i;j<=(2*i)-1;j++)
         printf("* ");
      for(j=0;j<i-1;j++)
         printf("* ");
      printf("\n");
   }
  return 0;
}
