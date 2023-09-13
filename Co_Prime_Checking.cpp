//to check if two entered numbers are co prime or not
#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,temp;
	printf("Enter the first number :- ");
	scanf("%d",&num1);
	printf("\nEnter the Second number :- ");
	scanf("%d",&num2);
	for(int i=1;i<=num1;i++)
	{
		if(num1%i==0&&num2%i==0)
		{
			temp=i;
		}
	}
	if(temp==1)
	{
		printf("\nThe two entered numbers are co primes !");
	}
	else
	{
		printf("\nThe two eneterd numbers are not co primes !");
	}
	return 0;
}
