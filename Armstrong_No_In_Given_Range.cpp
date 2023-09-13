//to check armstrong number in a range
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,rem,sum,temp;
	printf("Enter the starting range :- ");
	scanf("%d",&a);
	printf("\nEnter the Last range :- ");
	scanf("%d",&b);
	for(int i=a;i<=b;i++)
	{
		temp=i;
		sum=0;
		while(temp>0)
		{
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d ",sum);
		}
	}
	return 0;
}
