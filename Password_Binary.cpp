// To create Password using Date Of Birth
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	// input date of birth from user
	long int num;
	int i,j,bin1[30],bin2[30];
	printf("Enter the Date Of Birth In numerical Form :- ");
	scanf("%ld",&num);
	
	// converting decimal to binary number 
	for(i=0;num>0;i++)
	  {
	  	bin1[i]=num%2;
	  	num=num/2;
	  }
	num=i;
	int temp=i;
	int num2=i;
	for(i=0;num>0;i++,num--)
	   {
	   	 bin2[num-1]=bin1[i];
	   }
	
	// print the binary number
	printf("\nThe Binary Equivalent is :- ");
	for(j=0;j<temp;j++)
	  {
	  	printf("%d",bin2[j]);
	  }
	
	// inversing the bit of binary number
	for(i=0;i<temp;i++)
	  {
	    if(bin2[i]==1)
	      bin2[i]=0;
	    else
	      bin2[i]=1;
      }
    
	// displaying binary number after inversing the bits
	printf("\nThe Binary Equivalent after inversing the bits :- ");
	for(int j=0;j<temp;j++)
	  {
	  	printf("%d",bin2[j]);
	  }

	// coverting the binary to decimal number
	long int num1=0,dec=0;
	for(i=0;num2>0;i++,num2--)
	  {
	  	num1=bin2[i]*pow(2,num2-1);
	  	dec=dec+num1;
	  }
	
	// printing the decimal number after the inversion of binary number   
	printf("\nThe Equivalent Decimal Of Binary Number After Inversion is :- %ld",dec);
	
	// Applying operation on the decimal number 
	int number;
	number = dec/2;
	printf("\nThe number after dividing by 2 :- %d",number);
	
	//displaying the password
	printf("The Final Password is :- %d%d",number,number);
	
	return 0;
}
