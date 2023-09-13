//3A Perform the following operations on three arrays and print the results
// A. Performing arithmetic operations using address of variables and storing them at same index of various arrays (add in array 1,sub in array 2 and prod in array 3)
// B. Comparing variables at same index of two arrays and printing the higher of the two 
#include<stdio.h>
#include<string.h>

int main()
{
	//ARRAY 1
	int i,num1,array1[100],add1[100],sub1[100],prod1[100];
	printf("\t\t\t\t\t\tARRAY 1");
	printf("\nEnter the number of variables to be entered in the array 1 :- ");
	scanf("%d",&num1);
	for(i=0;i<num1;i++)
	{
		printf("\nEnter the element %d :- ",i+1);
		scanf("%d",&array1[i]);
	}
	
	//Performing addition arithemtic
	printf("\nPerfroming Arithmetic operations on Array 1 :- ");
	printf("\nAdding 5 to each variable in the array 1 :- ");
	int *a1=array1;
	for(i=0;i<num1;i++)
	{
		add1[i]=*a1+5;
		a1++;
	}
	printf("\n\nArray 1 after addition of 5 to each variable :- ");
	for(i=0;i<num1;i++)
	{
		printf("%d ",add1[i]);
	}
	
	
	//ARRAY 2
	int num2,array2[100];
	printf("\n\n\t\t\t\t\t\tARRAY 2");
	printf("\nEnter the number of variables to be entered in the array 2 :- ");
	scanf("%d",&num2);
	for(i=0;i<num2;i++)
	{
		printf("\nEnter the element %d :- ",i+1);
		scanf("%d",&array2[i]);
	}
	
	//Performing subtraction arithemtic
	printf("\nPerfroming Arithmetic operations on Array 2 :- ");
	printf("\nSubtracting 10 to each variable in the array 2 :- ");
	int *s1=array2;
	for(i=0;i<num2;i++)
	{
		sub1[i]=*s1-10;
		s1++;
	}
	printf("\n\nArray 2 after subtraction of 10 from each variable :- ");
	for(i=0;i<num2;i++)
	{
		printf("%d ",sub1[i]);
	}
	
	
	//ARRAY 3
	int num3,array3[100];
	printf("\n\t\t\t\t\t\tARRAY 3");
	printf("\nEnter the number of variables to be entered in the array 3 :- ");
	scanf("%d",&num3);
	for(i=0;i<num3;i++)
	{
		printf("\nEnter the element %d :- ",i+1);
		scanf("%d",&array3[i]);
	}
	
	//Performing multiplication arithemtic
	printf("\nPerfroming Arithmetic operations on Array 3 :- ");
	printf("\nMultipying each variable by itself in the array 3 :- ");
	int *p1=array3;
	for(i=0;i<num3;i++)
	{
		prod1[i]=(*p1)*(*p1);
		p1++;
	}
	printf("\n\nArray 3 after multipliying each variable by itself :- ");
	for(i=0;i<num3;i++)
	{
		printf("%d ",prod1[i]);
	}
	
	
	//Printing the higher of two values in same index of two arrays
	int arr1[100],arr2[100],num;
	int *xyz1,*xyz2;
	printf("\n\nEnter the number of variables to be entered in array 1 and array 2 for comparing :- ");
	scanf("%d",&num);
	printf("\n\nEnter elements for array 1 :- ");
	for (i=0;i<num;i++)
	{
		printf("\nEnter element %d :- ",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("\n\nEnter elements for array 2 :- ");
	for(i=0;i<num;i++)
	{
		printf("\nEnter element %d :- ",i+1);
		scanf("%d",&arr2[i]);
	}
	xyz1=arr1;
	xyz2=arr2;
	for(i=0;i<num;i++)
	{
		if(*xyz1>*xyz2)
		{
			printf("\nHigher variable at index %d out of two arrays is :- %d",i+1,*xyz1);
		}
		else if(*xyz1<*xyz2)
		{
			printf("\nHigher variable at index %d out of two arrays is :- %d",i+1,*xyz2);
		}
		else 
		{
			printf("\nBoth the variables at index %d are equal :- %d",i+1,*xyz1);
		}
		xyz1++;
		xyz2++;
	}
	return 0;
}
	
	

