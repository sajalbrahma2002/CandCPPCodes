//Calculate the sum of N terms in Fibonacci Series
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,num1=0,num2=1,num3,sum=0;
	printf("Enter the Range to calculate in the fibonacci series :- ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	  {
	  	if(i<=1)
	  	  {
	  	  	num3=i;
	      }
	    else
	      {
	      	num3=num1+num2;
	      	num1=num2;
	      	num2=num3;
		  }
		sum=sum+(num3*num3);
	  }
	printf("\nThe Sum Of Squares Of Terms in fibonacci series is :- %d",sum);
	return 0;
}
