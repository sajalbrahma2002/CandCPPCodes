//Pointer as function (series starting with 1)
#include<stdio.h>
#include<conio.h>
int sumfunc(int *num1);
int main()
{
	int num,temp;
	printf("Enter the number for fiboniacci series :- ");
	scanf("%d",&num);
	temp=sumfunc(&num);   // value is passed by reference or address is passed
	printf("\nSum :- %d",temp);
	return 0;
}

int sumfunc(int *num1)
{
	int i=1,a=0,b=1,c,sum=0;
	printf("\n %d",b);
	while(i<*num1)
	{
		c=a+b;
		a=b;
		b=c;
		printf("\n %d",c);
		sum=sum+c;
		i++;
	}
	return sum;
}
