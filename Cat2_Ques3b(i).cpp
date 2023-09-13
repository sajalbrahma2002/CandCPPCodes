//3b Structure in C - Arithmetic operation on N prime numbers
//SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

struct Primecal
{
	int prime;
};

int main()
{
	int n,sum=0,diff=0;
	printf("\nEnter the number of prime numbers on which arithmetic operations is to be performed :- ");
	scanf("%d",&n);
	struct Primecal obj[n];
	for(int i=0;i<n;i++)
	{
		printf("\nEnter Prime Number %d :- ",i+1);
		scanf("%d",&obj[i].prime);
		sum=sum+obj[i].prime;
	}
	diff=obj[0].prime;
	for(int j=1;j<n;j++)
	{
		diff=diff-obj[j].prime;
	}
	printf("\nSum of %d prime numbers entered :- %d",n,sum);
	printf("\nDifference of %d prime numbers entered :- %d",n,diff);
	return 0;
}
