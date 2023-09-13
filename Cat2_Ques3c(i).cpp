//3c Structure in C - Arithmetic operation on N negative numbers
//SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

struct Negnumber
{
	int num;
};

int main()
{
	int n,sum=0,prod=1;
	printf("\nEnter the number of negative numbers on which arithmetic operations is to be performed :- ");
	scanf("%d",&n);
	struct Negnumber obj[n];
	for(int i=0;i<n;i++)
	{
		printf("\nEnter Negative Number %d :- ",i+1);
		scanf("%d",&obj[i].num);
		sum=sum+obj[i].num;
		prod=prod*obj[i].num;
	}
	printf("\nSum of %d prime numbers entered :- %d",n,sum);
	printf("\nProduct of %d prime numbers entered :- %d",n,prod);
	return 0;
}
