//To display the table of a number
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,num1,i;
	printf("Enter the number whose table is to be display :- ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	  {
	  	  num1=num*i;
		  printf("\n %d * %d = %d",num,i,num1);
	  }
	return 0;
}
