//Three Dimensional Array
#include<stdio.h>
#include<conio.h>
int main()
{
  int x,y,z,i,j,k,array1[5][5][5];
  printf("\nEnter the dimensions of 3D array in the form array1[x][y][z] :-");
  scanf("%d %d %d",&x,&y,&z);
  //inserting elements in 3D array
  for(i=0;i<x;i++)
   {
     for(j=0;j<y;j++)
       {
          for(k = 0;k<z;k++)
            {
            	printf("\nArray1[%d][%d][%d] :- ",i,j,k);
                scanf("%d",&array1[i][j][k]);
            }
      }
   }

  // Displaying elements in 3D array
  printf("\nThe elements of 3D arrays[1] are :\n");
  for(i=0;i<x;i++)
   {
     for(j=0;j<y;j++)
       {
          for(k = 0;k<z;k++)
            {
               printf("array1[%d][%d][%d] = %d", i, j, k,array1[i][j][k]);
           }
      }
   }
   
   //to insert element at a paticular position in a 3D array
   int pos1,pos2,pos3,num1;
   printf("\Enter Dimension 1 :- [1-5]");
   scanf("%d",&pos1);
   printf("\Enter Dimension 2 :- [1-5]");
   scanf("%d",&pos2);
   printf("\Enter Dimension 3 :- [1-5]");
   scanf("%d",&pos3);
   printf("\nEnter the element to be inserted at that particular position :- ");
   scanf("%d",num1);
   if(pos1>=1 && pos1<=5 && pos2>=1 && pos2<=5 && pos3>=1 && pos3<=5)
     {
	    array1[pos1-1][pos2-1][pos3-1]=num1;
     }
   printf("\nThe elemnets of 3D arrays are :\n");
   
   //to display 3D array after insertion of element
   for(i=0;i<x;i++)
    {
      for(j=0;j<y;j++)
        {
          for(k = 0;k<z;k++)
            {
               printf("array1[%d][%d][%d] = %d", i, j, k,array1[i][j][k]);
           }
       }
    }
    
	// to search a particular element and print its position
    int element;
    printf("\nEnter the element whose positioned is to be located :- ");
    for(i= 0;i<x;i++)
	  {
        for(j=0;j<y;j++)
		  {
            for(k=0;k<z;k++)
			  {
                if(array1[i][j][k]==element)
				 {
                    printf("\nThe element %d is found at position (%d, %d, %d) :- ", element,i+1,j+1,k+1);
                 }
             }
         }
     }
   //Check for non zero values at a position (a, b, c)
   for(i= 0;i<x;i++)
	  {
        for(j=0;j<y;j++)
		  {
            for(k=0;k<z;k++)
			  {
                if(array1[i][j][k]==0)
				 {
                    printf("\nThe element %d at position (%d, %d, %d) is a zero value.",array1[i][j][k],i+1,j+1,k+1);
                 }
                else
                 { 
                    printf("\nThe element %d at position (%d, %d, %d) is non zero value.",array1[i][j][k],i,j,k);
				 }
             }
         }
     } 
  //to create another 3D array
  int array2[5][5][5];
  for(i=0;i<x;i++)
   {
     for(j=0;j<y;j++)
       {
          for(k = 0;k<z;k++)
            {
            	printf("\nArray2[%d][%d][%d] :- ",i,j,k);
                scanf("%d",&array1[i][j][k]);
            }
      }
   }

  // Displaying elements in 3D array
  printf("\nThe elements of 3D arrays[2] are :\n");
  for(i=0;i<x;i++)
   {
     for(j=0;j<y;j++)
       {
          for(k = 0;k<z;k++)
            {
               printf("array1[%d][%d][%d] = %d", i, j, k,array2[i][j][k]);
           }
      }
   }
   
   // to compare elements of two 3D arrays
   for(i=0;i<x;i++)
     {
     	for(j=0;j<y;j++)
     	  {
     	  	 for(k=0;k<z;k++)
     	  	   {
				  printf("\n array1[%d][%d][%d] = %d and array2[%d][%d][%d] = %d",i,j,k,array1[i][j][k],i,j,k,array2[i][j][k]);
        	      if(array1[i][j][k]==array2[i][j][k])
        	        {
        	  	        printf("\t They are equal ");
			        }
			      else if(array1[i][j][k]>array2[i][j][k])
			       {
			  	        printf("\t The element of first array is greater than element in second array ");
			       }    
	 	          else
			       {
			  	        printf("\t The element for second array is greater than element in first array ");
			       }
		      }
	    }
     } 
     
   // to display sum of all elements in two 3D arrays
   int sum1=0,sum2=0;
   for(i= 0;i<x;i++)
	  {
        for(j=0;j<y;j++)
		  {
            for(k = 0;k<z;k++)
			 {
                sum1=sum1+array1[i][j][k];
                sum2=sum2+array2[i][j][k];
		     }
          }
      }
   printf("\nThe sum of all elements in array1 is :- %d",sum1);
   printf("\nThe sum of all elements in array2 is :- %d",sum2);
	
   //to find Maximum element in 3D array
   int max1,max2=0;
   for(i=0;i<x;i++)
	  {
        for(j=0;j<y;j++)
		  {
            for(k=0;k<z;k++)
			  {
                if (array1[i][j][k]>= max1)
				 {
                    max1=array1[i][j][k];
                 }
             }
         }
      }
   printf("Maximum element in the 1st 3D array is :- %d", max1);
   for(i=0;i<x;i++)
	  {
        for(j=0;j<y;j++)
		  {
            for(k=0;k<z;k++)
			  {
                if (array2[i][j][k]>= max2)
				 {
                    max2=array2[i][j][k];
                 }
             }
         }
      }
   printf("Maximum element in the 2nd 3D array is :- %d", max2);
    
   return 0;

}
