// Perfect Number in a given range
#include<stdio.h>
#include<conio.h>
int main()
{
	int x,a,b,i,j,arr[20],total=0,sum;
	printf("Enter the First Number of the range :- ");
	scanf("%d",&a);
	printf("\nEnter the Last Number of the range :- ");
	scanf("%d",&b);
	for(x=a;x<=b;x++)
	{
		i=1,j=0,sum=0;
		while(i<x)
		{
			if(x%i==0)
			{
				arr[j]=i;
				j++;
				sum=sum+i;
			}
		    i++;
		}
	    if(sum==x)
	    {
	    	printf("\n%d - ",sum);
	    	total=total+sum;
	    	for(int m=0;m<j;m++)
	    	{
	    		printf("%d ",arr[m]);
			}
		}
	}
	printf("\nSum :- %d",total);
	return 0;
}
