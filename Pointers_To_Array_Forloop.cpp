//Pointers to arrays using for loop
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,fab[20];
	int *ptr;
	ptr=fab;
	printf("Enter the number for the fiboniacci series (max 20):- ");
	scanf("%d",&num);
	int a=0,b=1,c,i,sum=0;
	fab[0]=0;
	for(i=1;i<num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		fab[i]=c;
	}
	for(i=0;i<num;i++)
	{
		printf("\n%d ",*ptr);
		sum=sum+*ptr;
		ptr++;
	}
	printf("\nSum :- %d",sum);
}
