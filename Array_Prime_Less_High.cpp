// Print the closest prime number less than and more than of every array element
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
int Prime1(int n);
int Prime2(int n);

int Prime1(int n)
{
	int a=n-1;
	int flag,temp;
	for(int i=a;i<=a;i--)
	{
		flag=0;
		for(int j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			temp=i;
			break;
		}
	}
	if(flag==0)
	return temp;
	else 
	return 1;
}

int Prime2(int n)
{
	int a=n+1;
	int flag,temp;
	for(int i=a;i>=a;i++)
	{
		flag=0;
		for(int j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			temp=i;
			break;
		}
	}
	if(flag==0)
	return temp;
	else 
	return 1;
}

int main()
{
	int num;
	printf("Enter the size of array :- ");
	scanf("%d",&num);
	printf("\nEnter array elements :- ");
	int array[num];
	int arrless[num];
	int arrhigh[num];
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
		arrless[i]=Prime1(array[i]);
		arrhigh[i]=Prime2(array[i]);
	}
	for(int i=0;i<num;i++)
	{
		printf("%d %d %d ",arrless[i],array[i],arrhigh[i]);
	}
	return 0;
	
}

// Input -> 3 -> 10 20 30
// Output -> 7 10 11 19 20 23 29 30 31
