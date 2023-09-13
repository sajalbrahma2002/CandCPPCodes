// Practice Exercise 2
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

int main()
{
	int mod,count=0,pos[10],y=0,d,n=0;
	long long num,temp;      // To save big int values
	printf("Enter the number :- ");
	scanf("%lld",&num);
	printf("\nEnter the digit to be searched :- ");
	scanf("%d",&d);
	temp=num;                // Storing the entered value for backup
	int a=0,i=0;
	do
	{
		mod=num%10;          // Finding modulus
		n++;                 // Counting total digits in the number
		if(mod==d)           // if modulus is equal to entered digit
		{
			count++;         // counting the number of times the digit occured in the whole number
			pos[a]=i;        // Storing the position of digit in the number from backward direction
			a++;             // incrementing the position
			y=1;             // to indicate we found the digit in the number
	    }
	    i++;                 // incrementing the position
		num=num/10;	         // removing the last number(modulus) till number not equal to 0	
	}while(num!=0);
	if(y==1)
	{
		printf("\Digit %d occured in the number. ",d);
		printf("\nNo of times digit %d occured in the number :- %d",d,count);
		printf("\nPositions at which %d occurs in the number :- ",d);
		for(int y=a-1;y>=0;y--)      // Decrement loop to print the occurence of digit from start and not from last
		{
			printf("%d ",n-pos[y]);  // Since positions were stored from backward direction so subtracting it from n
		}                            
	}
	else
	{
		printf("\nDigit %d does not occur in the number. ",d);
	}
	return 0;
}

// Input = 4325648944
// Output = 1 6 9 10
