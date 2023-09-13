// PAT Ques 2
// Prime Numbers and displaying prime numbers whose sum of digit is multiple of 5 
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int first,last,temp,prime[100],i,j=0,k,sum,rem,num,multiple[10],x=0;
	printf("\nEnter the Start of the range :- ");
	scanf("%d",&first);
	printf("\nEnter the End of the range :- ");
	scanf("%d",&last);
	while(first<last)
	{
		temp=0;
		if(first<=1)
	    {
		    ++first;
		    continue;
	    }
	
	    for(i=2;i<=(first/2);++i)
	    {
		    if(first%i==0)
		    {
			    temp=1;
			    break;
		    }
	   }
	   // Saving the prime numbers in an array prime
	   if(temp==0)
	   {
	        prime[j]=first;
	        j++;
	   }
	   
	   ++first;
   }
   
   // Displaying the prime numbers stored in array
   printf("\nThe Prime Numbers in the Given Range :- ");
   for(k=0;k<j;k++)
   {
   	    printf("%d ",prime[k]);
   }
   
   // Checking for prime numbers with sum of digits as multiple of 5 and storing it in an array multiple
   printf("\nThe Prime Numbers whose sum of digits is a multiple of 5 :- ");
   for(k=0;k<j;k++)
   {
   	    sum=0;
   	    num=prime[k];
   	    while(num>0)
   	    {
			rem=num%10;
   	    	sum=sum+rem;
   	    	num=num/10;
		}
		if(sum%5==0)
		{
			multiple[x]=prime[k];
			x++;
		}
   }
   
   // Displaying Prime numbers whose sum of digit is a multiple of 5
   for(k=0;k<x;k++)
   {
   	   printf("%d ",multiple[k]);
   }
   return 0;  
}



