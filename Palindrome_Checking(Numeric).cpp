// to check for if entered number is a palimdrome or not
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,rem=0,rev=0,temp;
	printf("Enter the number to check for palindrome :- ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	if(temp==rev)
	{
		printf("\n%d is a palindrome number !");
	}
	else
	{
		printf("\n%d is not a palindrome number !");
    }
    return 0;
}
