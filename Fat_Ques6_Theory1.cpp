// Ques 6 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

 #include<stdio.h>
 
int* divisible(int *a,int x,int n)
{
	int y;
	int *b=a;
	for(int i=0;i<n;i++)
	{
		if(*a%x==0)
		{
			*a=0;
		}
		else
		{
			y=*a%x;
			*a=y;
		}
		a++;
	}	
	return b;
}
int main()
{
	int num,k;
	printf("Enter the size of integer array :- ");
	scanf("%d",&num);
	int array[num];
	for(int i=0;i<num;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\nEnter the number to check for divisibilty :- ");
	scanf("%d",&k);
	int *ptr=divisible(array,k,num);
	for(int j=0;j<num;j++)
	{
		printf("%d ",*ptr);
		ptr++;
	}
	return 0;
}
//Ans : 5 1 2 3 4 5 2 -> 1 0 1 0 1
