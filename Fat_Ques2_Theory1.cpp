//Ques 2 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
int product_sum(int *a,int *b, int n)
{
	int *x=a;
	int *y=b;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum=sum+(*a+i)*(*b+j);
		}
	}
	printf("Sum :- %d",sum);
}

int main()
{
	int abc[]={1,2,3};
	int xyz[]={6,7,8};
	product_sum(abc,xyz,3);
	return 0;
}
// Ans : 126
