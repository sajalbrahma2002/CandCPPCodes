// Search a number in an array
//SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,k,temp=0;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num]; // Dynamic allocation of the size of the array
	printf("\nEnter the elements in the array :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nEnter the element to be searched in the array :- ");
	scanf("%d",&k);
	for(int i=0;i<num;i++)
	{
		if(array[i]==k)
		{
			temp=1;
			printf("\nThe element %d is found in the position :- %d",k,i+1);
		}
	}
	if(temp==0)
	{
		printf("\nElement not found in the array!");
	}
	return 0;
}

// Input = 10 -> 1 2 3 4 5 6 7 8 9 0 -> 7
// Output = 7
