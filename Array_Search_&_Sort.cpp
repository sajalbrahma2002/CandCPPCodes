// Searching & Sorting
// 21BPS1045 - SAJAL BRAHMA

#include<stdio.h>

int main()
{
	int array[10],n,num,temp1=0,temp2;
	printf("Enter the number of integer to be enter in the array :- ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nEnter the integer to be searched in the array :- ");
	scanf("%d",&num);
	for(int i=0;i<n;i++)
	{
		if(num==array[i])
		{
			temp1=1;
			printf("\nNumber Found !");
		}
	}
	if(temp1==0)
	{
		printf("\nNumber Not Found !");
	}
	printf("\nArray After Sorting :- ");
	for(int a=0;a<n;a++)
	{
		for(int b=a+1;b<n;b++)
		{
			if(array[a]>array[b])
			{
				temp2=array[a];
				array[a]=array[b];
				array[b]=temp2;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}

// write the code in text editor and save it in home
// to check if the code is correct -> cc Filename.c (in terminal)
// to run the program -> ./a.out (in terminal)
