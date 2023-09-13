// To print the table of a number
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,num1,i=1;
	printf("Enter the number whose table is to be display :- ");
	scanf("%d",&num);
    do
	  {
	  	  num1=num*i;
		  printf("\n %d * %d = %d",num,i,num1);
		  i++;
	  }while(i<=10);
	return 0;
}
