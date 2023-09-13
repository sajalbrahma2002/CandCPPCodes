//3C. Perform the following operations on three arrays and print the results
// A. Make an even numbered array even if odd number is enetered from address using address
// B. Print the lowest element in the array using address of variables
#include<stdio.h>
#include<string.h>

int main()
{
	// Array 1
	int i,num1,j=0;
	int array1[100],array_even1[100];
	int *ptr1;                                                                  //declaring a pointer 
	printf("\t\t\t\t\t\tARRAY 1");
	printf("\nEnter the number of variables to be entered in the variable :- ");
	scanf("%d",&num1);
	for(i=0;i<num1;i++)                                                         //initializing values from user
	{
		printf("\nEnter the element %d :- ",i+1);
		scanf("%d",&array1[i]);	
	}
	//copying even variables to another array using pointer (address of variable)
	ptr1=array1;                                                               //storing array address to a pointer variable
	for(i=0;i<num1;i++)
	{
	    if(*ptr1%2==0)                                                         // checking for even variables
		{
			array_even1[j]=*ptr1;                                              // storing the even variables to another array using pointers
			j++;
		}
		ptr1++;
    }
    //displaying the even variables 
	printf("\nThe even numbers in the array are :- ");
	for(i=0;i<j;i++)
	{
		printf("%d ",array_even1[i]);
	}
	
	//executing the program for lowest element in the array 1
	int *temp1;                                                                // declaring a pointer 
	int min1=array_even1[0];                                                   // storing the first variable to a new variable(minimum value)
	temp1=array_even1;                                                         // storing array address to a pointer
	temp1++;
	for(i=0;i<j-1;i++)
	{
		if(*temp1<min1)                                                        // checking for minimum value
		{
			min1=*temp1;
		}
     	temp1++;
	}
	printf("\nThe Lowest Variable in the even array is :- %d",min1);
	
	// Array 2
	int num2;
	int array2[100],array_even2[100];
	int *ptr2;                                                                 // declaring a pointer    
	printf("\n\t\t\t\t\t\tARRAY 2");
	printf("\nEnter the number of variables to be entered in the variable :- ");
	scanf("%d",&num2);
	for(i=0;i<num2;i++)
	{
		printf("\nEnter the element %d :- ",i+1);                              // initializing values from user
		scanf("%d",&array2[i]);	
	}
	//copying even variables to another array using array
	ptr2=array2;                                                               //storing array address to a pointer variable 
	j=0;
	for(i=0;i<num2;i++)
	{
	    if(*ptr2%2==0)                                                         // checking for even variables
		{
			array_even2[j]=*ptr2;                                              // storing even variables into another array using pointers        
			j++;
		}
		ptr2++;
    }
    //displaying the even variables 
	printf("\nThe even numbers in the array are :- ");
	for(i=0;i<j;i++)
	{
		printf("%d ",array_even2[i]);
	}
	
	//executing the program for lowest element in the array
	int *temp2;                                                                // declaring a pointer                                            
	int min2=array_even2[0];                                                   // storing the first variable to a new variable(minimum value)
	temp2=array_even2;                                                         // storing array address to a pointer
	temp2++;
	for(i=0;i<j-1;i++)
	{
		if(*temp2<min2)                                                        // checking for minimum value 
		{
			min2=*temp2;
		}
     	temp2++;
	}
	printf("\nThe Lowest Variable in the even array is :- %d",min2);
	
	// Array 3
	int num3;
	int array3[100],array_even3[100];
	int *ptr3;                                                                 // declare a pointer
	printf("\n\t\t\t\t\t\tARRAY 3");
	printf("\nEnter the number of variables to be entered in the variable :- ");
	scanf("%d",&num3);
	for(i=0;i<num3;i++)
	{
		printf("\nEnter the element %d :- ",i+1);                              // initializing values from user
		scanf("%d",&array3[i]);	
	}
	//copying even variables to another array using array
	ptr3=array3;                                                               // storing array address to a pointer variable
	j=0;
	for(i=0;i<num3;i++)
	{
	    if(*ptr3%2==0)                                                         // checking for even variables
		{
			array_even3[j]=*ptr3;                                              // storing even variables into another array using pointers 
			j++;
		}
		ptr3++;
    }
    //displaying the even variables 
	printf("\nThe even numbers in the array are :- ");
	for(i=0;i<j;i++)
	{
		printf("%d ",array_even3[i]);
	}
	
	//executing the program for lowest element in the array
	int *temp3;                                                                // declare a pointer
	int min3=array_even3[0];                                                   // storing the first variable to a new variable(minimum value)
	temp3=array_even3;                                                         // storing array address to a pointer
	temp3++;
	for(i=0;i<j-1;i++)
	{
		if(*temp3<min3)                                                        // checking for mimimum values
		{
			min3=*temp3;
		}
     	temp3++;
	}
	printf("\nThe Lowest Variable in the even array is :- %d",min3);
	return 0;
}
