// Sort Colours in an array 
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char sort[5][10];

void Arrange(char arr[][10],int n)
{
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(strcmp(arr[i],"Green")==0)
		{
			strcpy(sort[j],arr[i]);
			j++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(strcmp(arr[i],"Yellow")==0)
		{
			strcpy(sort[j],arr[i]);
			j++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(strcmp(arr[i],"Black")==0)
		{
			strcpy(sort[j],arr[i]);
			j++;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s ",sort[i]);
	}
}

int main()
{
	int num;
	printf("Enter the number of objects in the array :- ");
	scanf("%d",&num);
	char array[num][10];
	printf("\nEnter the strings :- \n");
	for(int i=0;i<num;i++)
	{
		scanf("%s",&array[i]);
	}
	Arrange(array,num);
}
