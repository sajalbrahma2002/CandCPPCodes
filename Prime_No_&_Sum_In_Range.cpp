//to print prime numbers in a given range and find their sum
#include<stdio.h>
#include<conio.h>

int main()
{
	int num1,num2,i,j,temp,sum=0;
	printf("Enter the Lower Range Value :- ");
	scanf("%d",&num1);
	printf("\nEnter the Upper Range Value :- ");
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++)
	{
		temp=0;
		for(j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				temp=1;
				break;
			}
		}
		if(temp==0)
		{
		  printf("%d ",i);
		  sum=sum+i;
	    }
	}
	printf("\nSum is = %d ",sum);
	return 0;	
}
