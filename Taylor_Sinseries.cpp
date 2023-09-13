// to print a taylor series (sin series)
#include <stdio.h>
#include<conio.h>
#include <math.h>
int fact(int x);   //function prototyping

int main()
{
	float num,num1,sum=0;
	int i,j,limit;

	printf("Enter the value of x of sinx series(taylor series):- ");
	scanf("%f",&num);

	printf("Enter the limit upto which you want to expand the series:- ");
	scanf("%d",&limit);

	num1=num;
	//Converting num to radian value (pi/180)
	num = num*(3.14/180);

	for(i=1,j=1;i<=limit;i++,j=j+2)
	{
		if(i%2!=0)
		 {  
			sum=sum+pow(num,j)/fact(j);
		 }
		else
		 {
			sum=sum-pow(num,j)/fact(j);
	     }
	}
	printf("Sin(%0.1f):- %f",num1,sum);
	return 0;
}

// Function to calculate the factorial 
int fact(int x)
{
	int i,fact1=1;
	for(i=1;i<=x;i++)
	  {
		fact1=fact1*i;
      }
	return fact1;
}

