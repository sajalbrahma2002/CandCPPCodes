//To check if entered string is a palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char array[20];
	int i,length,temp=0;
	printf("Enter the string to check for palindrome :- ");
	scanf("%s",array);
	length=strlen(array);
	for(i=0;i<length;i++)
	{
		if(array[i]!=array[length-1-i])
		{
			temp=1;
			break;
		}
	}
	if(temp==0)
	{
		printf("\nEntered String is a palindrome !");
	}
	else
	{
		printf("\nEntered String is not a palindrome !");
	}
	return 0;
}
