//Array of Pointers(series starting with 1)
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,fab[20];
	int *ptr[20];
	printf("Enter the number for the fiboniacci series :- ");
	scanf("%d",&num);
	int a=0,b=1,c,i,sum=0;
	fab[0]=1;
	for(i=1;i<num;i++)
	{
		c=a+b;
		a=b;
		b=c;
		fab[i]=c;
	}
	for(i=0;i<num;i++)
	{
		ptr[i]=&fab[i];
	}
	for(i=0;i<num;i++)
	{
		printf("\n %d ",*ptr[i]);
		sum=sum+*ptr[i];
	}
	printf("\nSum :- %d",sum);
	return 0;
}
