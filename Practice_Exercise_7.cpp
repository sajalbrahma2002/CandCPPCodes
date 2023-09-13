// Find the number in the sorted list using binary search and 0 for low ,1 for high and 2 for match
// SAJAL BRAHMA - 21BPS1045
#include<stdio.h>

int main()
{
	int num,low,mid,high,key,count=0;
	printf("Enter the size of the array :- ");
	scanf("%d",&num);
	int array[num];
	printf("\nEnter the elements in the array in the sorted manner :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	low=0;
	high=num-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		printf("%d ",array[mid]);
		scanf("%d",&key);
		if(key==0)
		{
			low=mid+1;
			count++;
		}
		else if(key==1)
		{
			high=mid-1;
			count++;
		}
		else if(key==2)
		{
			count++;
			break;
		}
		else
		{
			printf("\nWrong Input");
		}
	}
	printf("\nTotal Comparisons :- %d",count);
	printf("\nIndex of the guessed number :- %d",mid);
	printf("\nNumber at that index :- %d",array[mid]);
	return 0;
}

// Input -> 20 -> 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
// Output 10 0 , 15 0 ,18 1 ,16 0,17 2 -> 5,16,17
