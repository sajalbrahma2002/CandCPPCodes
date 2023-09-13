// Find kth largest element and if sum of digits of the number is equal to index its a Magic Number
// SAJAL BRAHMA - 21BPS0145

#include<stdio.h>

int main()
{
	int num,temp,k,mod=0,sum=0,index;
	printf("Enter size of the array :- ");
	scanf("%d",&num);
	int array[num],arr[num];
	printf("\nEnter array elements in the array :- ");
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
		arr[i]=array[i];
	}
	for(int i=0;i<num-1;i++)
	{
		for(int j=0;j<num-i-1;j++)
		{
			if(array[j]<array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("\nEnter the kth largest element to be found as a magic number :- ");
	scanf("%d",&k);
	if(k<=num)
	{
		for(int i=0;i<num;i++)
		{
			if(array[k-1]==arr[i])
			{
				index=i;
			}
		}
		temp=array[k-1];
		while(temp!=0)
		{
			mod=temp%10;
			sum=sum+mod;
			temp=temp/10;
		}
		if(sum==index)
		{
			printf("\n%d Largest Element is :- %d",k,array[k-1]);
			printf("\nOriginal Array :- ");
			for(int i=0;i<num;i++)
	        printf("%d ",arr[i]);
			printf("\nMagic Number %d at position :- %d",array[k-1],index);
		}
	}
	else
	{
		printf("\nArray does not contain more than %d elements .",num);
	}
	return 0;
}

// Input -> 7 -> 1 3 12 19 13 2 15 ->3
// Output -> 13 , 4
