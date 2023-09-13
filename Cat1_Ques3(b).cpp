//3B Perfrom the following operations on three arrays and print the results
// A. Square the numbers and store the numebrs in same index using address of variables
// B. Print highest element from all the three arrays using address of variables
#include<stdio.h>
#include<string.h>

int main()
{
	//ARRAY 1
	int i,num1,array1[100];
	int *ptr1,*temp1;                                                             // declaring the pointers
	printf("\t\t\t\t\t\tARRAY 1");
	printf("\nEnter the number of variables to be entered in the array :- ");
	scanf("%d",&num1);
	for(i=0;i<num1;i++)
	{
		printf("\nEnter the Element %d :- ",i+1);                                 // initializing the values
		scanf("%d",&array1[i]);
	}
	ptr1=array1;                                                                  // pointer pointing to an array
	for(i=0;i<num1;i++)
	{
		*ptr1=(*ptr1)*(*ptr1);                                                    // squaring and saving it in the same index
		ptr1++;
	}
	temp1=array1;                                                                 // pointer pointing to an array
	printf("\nDisplaying the variables using pointers !!!");
	printf("\nThe variables after squaring and saving it in the same index :- ");
	for(i=0;i<num1;i++)
	{
		printf("%d  ",*temp1);
		temp1++;
	}
	printf("\nDisplaying the variables using array !!!");
	printf("\nThe variables after squaring and saving it in the same index :- ");
	for(i=0;i<num1;i++)
	printf("%d  ",array1[i]);
	
	//Program to find the highest in the array 1
	int max1,*xyz1;                                                               // declaring pointer variable                                                             
	max1=array1[0];                                                               // storing the first variable to a new variable(maximum value)
	xyz1=array1;                                                                  // pointer pointing to the array
	xyz1++;
	for(i=0;i<num1-1;i++)
	{
		if(*xyz1>max1)                                                            // checking for maximum value
		{
			max1=*xyz1;
		}
     	xyz1++;
	}
	printf("\nThe Highest Variable in the even array is :- %d",max1);
	
	
	//ARRAY 2
	int num2,array2[100];
	int *ptr2,*temp2;                                                             // declaring the pointers
	printf("\n\t\t\t\t\t\tARRAY 2");
	printf("\nEnter the number of variables to be entered in the array :- ");
	scanf("%d",&num2);
	for(i=0;i<num2;i++)
	{
		printf("\nEnter the Element %d :- ",i+1);                                 // initializing the values
		scanf("%d",&array2[i]);
	}
	ptr2=array2;                                                                  // pointer pointing to an array
	for(i=0;i<num2;i++)
	{
		*ptr2=(*ptr2)*(*ptr2);                                                    // squaring and saving it in the same index
		ptr2++;
	}
	temp2=array2;                                                                 // pointer pointing to an array
	printf("\nDisplaying the variables using pointers !!!");
	printf("\nThe variables after squaring and saving it in the same index :- ");
	for(i=0;i<num2;i++)
	{
		printf("%d  ",*temp2);
		temp2++;
	}
	printf("\nDisplaying the variables using array !!!");
	printf("\nThe variables after squaring and saving it in the same index :- ");
	for(i=0;i<num2;i++)
	printf("%d  ",array2[i]);
	
	//Program to find the highest in the array 1
	int max2,*xyz2;                                                               // declaring pointer variable                                                             
	max2=array2[0];                                                               // storing the first variable to a new variable(maximum value)
	xyz2=array2;                                                                  // pointer pointing to the array
	xyz2++;
	for(i=0;i<num2-1;i++)
	{
		if(*xyz2>max2)                                                            // checking for maximum value
		{
			max2=*xyz2;
		}
     	xyz2++;
	}
	printf("\nThe Highest Variable in the even array is :- %d",max2);
	
	
	//ARRAY 3
	int num3,array3[100];
	int *ptr3,*temp3;                                                             // declaring the pointers
	printf("\n\t\t\t\t\t\tARRAY 3");
	printf("\nEnter the number of variables to be entered in the array :- ");
	scanf("%d",&num3);
	for(i=0;i<num3;i++)
	{
		printf("\nEnter the Element %d :- ",i+1);                                 // initializing the values
		scanf("%d",&array3[i]);
	}
	ptr3=array3;                                                                  // pointer pointing to an array
	for(i=0;i<num3;i++)
	{
		*ptr3=(*ptr3)*(*ptr3);                                                    // squaring and saving it in the same index
		ptr3++;
	}
	temp3=array3;                                                                 // pointer pointing to an array
	printf("\nDisplaying the variables using pointers !!!");
	printf("\nThe variables after squaring and saving it in the same index :- ");
	for(i=0;i<num3;i++)
	{
		printf("%d  ",*temp3);
		temp3++;
	}
	printf("\nDisplaying the variables using array !!!");
	printf("\nThe variables after squaring and saving it in the same index :- ");
	for(i=0;i<num3;i++)
	printf("%d  ",array3[i]);
	
	//Program to find the highest in the array 3
	int max3,*xyz3;                                                               // declaring pointer variable                                                             
	max3=array3[0];                                                               // storing the first variable to a new variable(maximum value)
	xyz3=array3;                                                                  // pointer pointing to the array
	xyz3++;
	for(i=0;i<num3-1;i++)
	{
		if(*xyz3>max3)                                                            // checking for maximum value
		{
			max3=*xyz3;
		}
     	xyz3++;
	}
	printf("\nThe Highest Variable in the even array is :- %d",max3);
	return 0;
}
