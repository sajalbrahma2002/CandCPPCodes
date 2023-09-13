// IPS 2 - Arithmetic Operation on 2 Numbers and Factorial of difference of 2 numbers
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<conio.h>
void My_Arithmetic(int &x,int &y);
int Factorial(int z);

int main()
{
	int num1,num2,num;
	printf("\nEnter number 1 :- ");
	scanf("%d",&num1);
	printf("\nEnter number 2 :- ");
	scanf("%d",&num2);
	if(num1==0&&num2==0)
	{
		printf("\nZeroes");
	}
	else if(num1>num2)
	{
		num=num1-num2;
		My_Arithmetic(num1,num2);
	}
	else
	{
		num=num2-num1;
		My_Arithmetic(num2,num1);
	}
	
	if(num>1)
	{
		printf("\nthe Factorial Of the difference of 2 number is :- %d",Factorial(num));
	}
}

void My_Arithmetic(int &x,int &y)
{
	printf("\nAddition :- %d",x+y);
	printf("\nSuntraction :- %d",x-y);
	printf("\nMultiplication :- %d",x*y);
	printf("\nDivision :- %d",x/y);
	
}

int Factorial(int z)
{
	if(z>=1)
	return z*Factorial(z-1);
	else
	return 1;
}
