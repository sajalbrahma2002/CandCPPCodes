//Pointer to arrays (series starting with 0)
#include<stdio.h>
#include<conio.h>
int main()
{
	int num ,i,sum=0,a=0,b=1,c;
	int series[50];
	printf("Enter the Number for the fibonacci series :- ");
	scanf("%d",&num);
	series[0]=0;
	series[1]=1;
	i=1;
	while(i<num)
	{
		c=a+b;
		a=b;
		b=c;
		series[i+1]=c;
		i++;
	}
	int *ptr=series;
	//Printing elements and calculating sum using pointers
	for(i=0;i<num;i++)
	{
		printf("\n%d \t%d ",ptr,*ptr);
		sum=sum+(*ptr);
		ptr++;
	}
	printf("\nsum :- %d",sum);
	return 0;
}
