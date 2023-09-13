// Single Dimensional Array 
#include<stdio.h>
#include<conio.h>
int main()
{ 
   int i,j,k,num,array1[10];
   printf("Enter the number of elements to insert in an array1[max 10] :- ");
   scanf("%d",&num);
   // to insert the given number of elements in an array
   for(i=0;i<num;i++) 
   {
   	  printf("\nEnter value for 1 D array1[%d]:- ", i);
      scanf("%d", &array1[i]);
   }
   // to display the elements in an array
   printf("\nSingle Dimensional array elements:- \n");
   for(i=0; i<num; i++) 
   {
      printf("%d ", array1[i]);
   }   
   // to insert element in already created array
   int element;
   printf("\nEnter the element to be inserted in already created array1[%d] :- ",num);
   scanf("%d",&element);
   if(num==10)
     {
     	printf("\nArray is full . No Extra element can be added!!");
     }
    else
     {
     	array1[num]=element;
     	printf("\nSingle Dimensional array elements after addition of element[0-%d]:- ",num);
        for(i=0; i<=num; i++) 
         {
            printf("%d ",array1[i]);
         }
        num=num+1;
	 }
	// to delete duplicate elements in an array
	int temp=num;
	for (i = 0;i<num;i ++)  
     {  
	    for (j=i+1;j<num;j++)  
         {  
            if(array1[i]==array1[j])            
              {  
                for (k=j;k<num-1;k++)           
                  {  
                    array1[k]=array1[k+1];  
                  }  
                num--;                        
                j--;      
             }  
        }  
    } 
    // to display elements in an array after deletion of duplicate elemenet 
	printf("\nSingle Dimensional array elements after deletion of duplicate element[0-%d] :- ",num-1);
        for(i=0; i<num; i++) 
         {
            printf("%d ",array1[i]);
         } 
    // to delete an element from the list 
    int choice,num2,index,pos;
    printf("\nTo delete a specific element from array type 1 and to delete element from position type 2 :- ");
    scanf("%d",&choice);
    // to delete a specific element from the array
    if(choice==1)
      {
      	  printf("\nEnter the element to be deleted from the array :- ");
      	  scanf("%d",&num2);
      	  for(i=0;i<num;i++)
      	    {
      	    	if(array1[i]==num2)
      	    	   {
      	    	   	  index=i;
      	    	   	  break;
				   }
			}
		  if(index!=-1)
		    {
		    	for(i=index;i<num;i++)
		    	  {
		    	  	 array1[i]=array1[i+1];
				  }
				  num=num-1;
				// to display elements in an array after deletion of specific elemenet  
				printf("\nSingle Dimensional array elements after deletion of specific element[0-%d] :- ",num-1);
                for(i=0;i<num;i++) 
                 {
                     printf("%d ",array1[i]);
                 } 
			}
		  else
		    {
		    	printf("\nElement not found in the array .");
			}
	  }
	// to delete element on the basis of position of element in the array
	else if(choice==2)
	  {
	  	 printf("\nEnter the position of element to delete the element from the list :- ");
	  	 scanf("\n%d",&pos);
	  	 if(pos>=num+1)
	  	   {
	  	   	  printf("\nDeletion Not possible !!");
		   }
		  else
		   {
		   	  for(i=pos-1;i<num;i++)
		   	    {
		   	    	array1[i]=array1[i+1];  	    	
				}
				num=num-1;
			  // to display elements in an array after deletion of elemenet from a specific position
			  printf("\nSingle Dimensional array elements after deletion of specific element[0-%d] :- ",num-1);
                for(i=0;i<num; i++) 
                 {
                     printf("%d ",array1[i]);
                 } 
		   }
	  }
	else
	  {
	  	  printf("\nInvalid Input ");
	  }
    // to search a particular element in the array and display its postion
    int num3;
	printf("\nEnter the element to be searched from the array :- ");
    scanf("%d",&num3);
      	  for(i=0;i<num;i++)
      	    {
      	    	if(array1[i]==num3)
      	    	   {
      	    	   	  printf("\nThe position of %d in the array[1-%d] is :- %d",num3,num,i+1);
				   }
			}
	// to check non zero value in a particular position
	int pos1;
	printf("\nEnter the position to check the element is a non zero value [1-%d]:- ",num);
	scanf("%d",&pos1);
	if(array1[pos1-1]!=0)
	  {
	  	 printf("\nThe Element at postion %d is %d and it is a non zero value !",pos1,array1[pos1-1]);
	  }
	else
	  {
	  	 printf("\nThe Element at postion %d is %d and it is a zero value !",pos1,array1[pos1-1]);
	  }
    //creating one more array and comparing it with prevoius array
    int array2[10];
    for(i=0;i<num;i++) 
     {
   	  printf("\nEnter value for 1 D array2[%d]:- ", i);
      scanf("%d", &array2[i]);
     }
    for(i=0;i<num;i++)
        {
        	printf("\n array1[%d] = %d and array2[%d] = %d",i,array1[i],i,array2[i]);
        	if(array1[i]==array2[i])
        	  {
        	  	 printf("\t They are equal ");
			  }
			else if(array1[i]>array2[i])
			  {
			  	 printf("\t The element of first array is greater than element in second array ");
			  }
			else
			  {
			  	 printf("\t The element for second array is greater than element in first array ");
			  }
		}
   // to calculate sum of all elements in the array1 and array2
   int sum1=0,sum2=0;
   for(i=0;i<num;i++)
     {
     	 sum1=sum1+array1[i];
     	 sum2=sum2+array2[i];
	 }
   printf("\nThe sum of elements in array1 is :- %d",sum1);
   printf("\nThe sum of elements in array2 is :- %d",sum2);
  
   // to display the number of elements in array1 and array2
   printf("\nThe no of elements in array1 is :- %d",num);
   printf("\nThe no of elements in array2 is :- %d",num);
   return 0;  
}
