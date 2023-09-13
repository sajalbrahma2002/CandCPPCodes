// Practice Exercise 1
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,d,temp=0,count=0,pos[10];
	printf("Enter the number of digits to be entered for the number :- ");
	scanf("%d",&num);
	int array[num];  //Dynamic allocation of size of string
	printf("\nEnter the number :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nEnter the digit d to be found in the number :- ");
	scanf("%d",&d);
	int a=0;
	for(int i=0;i<num;i++)
	{
		if(array[i]==d)
		{
			count++;
			pos[a]=i+1;
			a++;
			temp=1;
		}
	}
	if(temp==1)
	{
		printf("\Digit %d occured in the number. ",d);
		printf("\nNo of times digit %d occured in the number :- %d",d,count);
		printf("\nPositions at which %d occurs in the number :- ",d);
		for(int y=0;y<a;y++)
		{
			printf("%d ",pos[y]);
		}
	}
	else
	{
		printf("\Digit %d does not occur in the number. ",d);
	}
	return 0;
}

// Input = 4 3 2 5 6 4 8 9 4 4
// Output = 1 6 9 10
