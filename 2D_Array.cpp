// Two Dimensional Arrays
#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,num1,num2,array1[10][10];
   printf("\nEnter the number of rows for the 2D Array[max 10] :- ");
   scanf("%d",&num1);
   printf("\nEnter the number of columns for the 2D Array [max 10] :- ");
   scanf("%d",&num2);
   //inserting elements in a 2D array
   for(i=0; i<num1;i++) 
    {
      for(j=0;j<num2;j++) 
	    {
           printf("\nEnter value for 2D Array[%d][%d]:",i,j);
           scanf("%d", &array1[i][j]);
        }
    }
   //Displaying elements of 2D array 
   printf("\nTwo Dimensional array elements :-\n");
   for(i=0; i<num1; i++) 
     {
       for(j=0;j<num2;j++) 
	     {
           printf("%d ",array1[i][j]);
           if(j==num1-1)
		    {
              printf("\n");
            }
         }
     }
   
   //Insert the elements in all the odd numbered position of the array
   for (i=0;i<num1;i++)
    {
      for(j=0;j<num2;j++)
        {
          if(i%2!=0&&j%2!=0)
		    {
               printf("\nEnter value for odd numbered position array[%d][%d]:",i,j);
               scanf("%d",&array1[i][j]);
            }
        }
    }

   //Insert the elements in all the even numbered position of the array*/
  for(i=0;i<num1;i++)
    {
      for (j=0;j<num2;j++)
        {
          if(i%2==0&&j%2==0)
		    {
              printf("\nEnter value for even numbered position array[%d][%d]:",i,j);
              scanf("%d",&array1[i][j]);
            }
        }
    }

   //Remove the elements from all the odd numbered position of the array
   int k;
   for(i=0;i<num1;i++)
     {
       for(j = 0;j<num2;j++)
         {
            if(j%2!=0)
			 {
               for(k=j-1;k<num2;k++)
			    {
                   array1[i][k]=array1[i][k+1];
                }
             }
         }
     }

   //Remove the elements from all the even numbered position of the array
    for(i=0;i<num1;i++)
     {
       for(j=0;j<num2;j++)
        {
           if(j%2==0)
		     {
               for(k=j-1;k<num2;k++)
			     {
                    array1[i][k]=array1[i][k+1];
                 } 
             }
        }
    }

   //Search the given element in the array and print it's position
   int element;
   printf("\nEnter the element to be searched in the 2D array :- ");
   scanf("%d",&element);
   for(i = 0;i<num1;i++)
     {
       for(j=0;j<num2;j++)
        {
           if(array1[i][j]==element)
		     {
                printf("\nElement Found in 2D array[%d,%d] ",i,j);
             }
        }
    }

   //Check whether the array has non zero values in a position
    int pos1,pos2;
    printf("\nEnter the row position :- ");
	scanf("%d",&pos1);
	printf("\nEnter the column position :- ");
	scanf("%d",&pos2);
    if(array1[pos1][pos2]!= 0)
      {
        printf("\nThe value is a non zero value.");
      }
    else
     {
        printf("\nThe value is a zero value.");
     }

   //Create one more 2D array and compare the 2D arrays for values
   int array2[10][10];
   //inserting elements in a 2D array
   for(i=0; i<num1;i++) 
    {
      for(j=0;j<num2;j++) 
	    {
           printf("\nEnter value for 2D Array[%d][%d]:",i,j);
           scanf("%d", &array2[i][j]);
        }
    }
   //Displaying elements of 2D array 
   printf("\nTwo Dimensional array elements :-\n");
   for(i=0; i<num1; i++) 
     {
       for(j=0;j<num2;j++) 
	     {
           printf("%d ",array2[i][j]);
           if(j==num1-1)
		    {
              printf("\n");
            }
         }
     }

   //Compare the two ID char arrays for values
   for(i=0;i<num1;i++)
     {
     	for(j=0;j<num2;j++)
     	  {
     	  	 printf("\n array1[%d][%d] = %d and array2[%d][%d] = %d",i,j,array1[i][j],i,j,array2[i][j]);
        	if(array1[i][j]==array2[i][j])
        	  {
        	  	 printf("\t They are equal ");
			  }
			else if(array1[i][j]>array2[i][j])
			  {
			  	 printf("\t The element of first array is greater than element in second array ");
			  }
			else
			  {
			  	 printf("\t The element for second array is greater than element in first array ");
			  }
		   }
	 }

   // Find the sum of all elements in an array
   int sum1=0,sum2=0;
   for (i=0;i<num1;i++)
     {
       for(j=0;j<num2;j++)
      {
         sum1=sum1+array1[i][j];
         sum2=sum2+array2[i][j];
      }
      
    }
   printf("\nThe sum of elements in 1st array is :- %d",sum1);
   printf("\nThe sum of elements in 2nd array is :- %d",sum2);
   
   //Find the maximum elements in both the arrays 
   int max1=0,max2=0;
   for(i=0;i<num1;i++)
     {
      for(j=0;j<num2;j++)
        {
          if(array1[i][j]>max1)
		   {
              max1=array1[i][j];
           }
        }
     }
   printf("\nThe maximun element in array1 is :- %d",max1);
   for(i=0;i<num1;i++)
     {
      for(j=0;j<num2;j++)
        {
          if(array2[i][j]>max2)
		   {
              max2=array1[i][j];
           }
        }
     }
   printf("\nThe maximun element in array2 is :- %d",max2);
   // Find the minimum elements in both the array
   int min1=0,min2=0;
   for(i=0;i<num1;i++)
     {
       for(j=0;j<num2;j++)
        {
           if(array1[i][j]<min1)
		    {
              min1=array1[i][j];
            }  
        }
    }
   printf("\nThe minimum element in array1 is :- %d",min1);
   for(i=0;i<num1;i++)
     {
       for(j=0;j<num2;j++)
        {
           if(array2[i][j]<min2)
		    {
              min2=array2[i][j];
            }  
        }
    }
   printf("\nThe minimum element in array1 is :- %d",min1);
   return 0;
}
