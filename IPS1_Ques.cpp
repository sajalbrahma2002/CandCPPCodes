// IPS 1 - Prime Numbers in Fibonacci Series
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<conio.h>

int main()
{
	int num,i,num1=0,num2=1,num3,array[50],j=2;
	printf("Enter the range of the fibonacci series :- ");
	scanf("%d",&num);
	array[0]=0;
	array[1]=1;
	for(i=2;i<=num;i++)
	{
		num3=num1+num2;
		num1=num2;
		num2=num3;
	    array[j]=num3;
	    if(num3>100)
	    {
		   break;
	    }
	    j++;
	}
	printf("\nThe Faboniacci terms till the entered range %d is :- ",num);
	for(int a=0;a<j;a++)
	{
	 printf("%d ",array[a]);
    }
    printf("\nThe Prime Number in the Faboniacci Terms in the given Range :- ");
	int x,y,temp,z=1;
	int first=array[0];
	int last=array[j-1];
	for(x=first;x<=last;)
	{
		if(x>1)
		{
		    temp=0;
		    for(y=2;y<=(x/2);y++)
		    {
		     	if(x%y==0)
			    {   
			        temp=1;
				    break;
			    }  
		   }
		   if(temp==0)
		   {  
		    	printf("%d ",x);
		   }
	   }
	   if(z<j)
		{  
		    x=array[z];
			z++;
		} 
	   else
		{
		   	break;
	    }	
   }  
   return 0;
}
