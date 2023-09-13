// To display the numbers of days covid cases are higher or equal to prevoius consecutive days 
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int num,count,j;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];
	printf("\nEnter the no of cases for %d days :- ",num);
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	for(int i=0;i<num;i++)
	{
		count=0;
		if(i==0)
		{
			printf("%d ",i+1);
		}
		else
		{
			for(j=i-1;j>=0;j--)
			{
				if(array[i]>=array[j])
				{
					count++;
					if(count==i)
					{
						printf("%d ",i+1);
					}
					continue;
				}
				else
				{
				    int max=j;
				    int z=j;
				    while(array[i]<array[z] && z>0)
				    {
				   	    if(array[max]<array[z-1])
				   	    {
				   	    	max=z-1;
						}
						z--;
				    }
				    j=max;
				    printf("%d ",j+1);
				    break;	
				}
			}
	   }		
	}
	return 0;
}

// Input = 10 -> 223 14 155 354 483 599 701 701 601 133
// Output = 1 1 1 4 5 6 7 8 8 8
