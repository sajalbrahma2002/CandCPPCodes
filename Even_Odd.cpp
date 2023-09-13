// To count the no of odd and even number in an array
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,even=0,odd=0;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];  // Dynamic allocation of size of the array
	printf("\nEnter the elements in the array :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}	
	}
	printf("\nTotal Even numbers in the array :- %d",even);
	printf("\nTotal Odd numbers in the array :- %d",odd);
	return 0;
}

// Input = 10-> 1 2 3 4 5 6 7 8 9 0
// Output = 5,5
