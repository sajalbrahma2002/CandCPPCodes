//Program using if-else if
#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i;
	float temp;
	printf("Enter the number of temperatures whose range is to be checked :- ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	  {
	  	 printf("\nEnter the Temperature whose range is to checked :- ");
	  	 scanf("%f",&temp);
	  	 if(temp<20)
	  	   {
	  	   	 printf("\nTemperature Is low !!");
		   }
	  	 else if(temp>=20 && temp<=30)
		         {
		   	       printf("\nTempertaure Is Medium !!");
	             }
	          else if(temp>30)
	             {
	       	       printf("\nTemperature Is High !!");
		         }
	  }
	return 0;
}
