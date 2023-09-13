// Challenging Task - Type Conversion
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<conio.h>

int main()
{
	int decimal[10],num,i,j,k,temp;
	printf("Enter the number of decimal numbers to be entered in array [max 10] :- ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		//Entering the Decimal Numbers
		printf("\nEnter Number %d :- ",i+1);
		scanf("%d",&decimal[i]);
	}
	
	//Displaying the Decimal Numbers
	printf("\nThe Entered Decimal Numbers are :- ");
	for(i=0;i<num;i++)
	{
		printf("%d ",decimal[i]);
	}
    
    // Calculating the binary of each number in the array decimal
	int binary[10][10],length1[10],x=0,y;
	for(i=0;i<num;i++)
	{
		// Saving the Number in the array decimal to a temporary variable
		temp=decimal[i];
		for(j=0;temp>0;j++)
		{
			// Saving the binary values to a 2D array binary[][]
			binary[i][j]=temp%2;
			temp=temp/2;
		}
		// Saving the length of the binary number in an array
		length1[x]=j;
		x++;				
	}
	
	y=0;
	// Displaying the inverted Binary Converion of the Decimal number
	for(i=0;i<num;i++)
	{
		printf("\n\nThe Inverted Binary Conversion of the Number %d :- ",decimal[i]);
		for(k=0;k<length1[y];k++)
		{
			printf("%d",binary[i][k]);
		}
		printf("\n");
		// Checking if y does not exceed x
		if(y<x)
		{
			y++;
		}
		else
		{
			break;
		}
	}
	
	// Saving the actual binary of the number in a 2D array result1[][]
	int result1[10][10],z;
	y=0;
	for(i=0;i<num;i++)
	{
		z=length1[y];
		for(k=0;z>0;k++,z--)
		{
			result1[i][z-1]=binary[i][k];
		}
		if(y<x)
		{
			y++;
		}
		else
		{
			break;
		}
	}
	
	// displaying the binary number of the decimal numbers
	y=0;
	for(i=0;i<num;i++)
	{
		printf("\nThe Binary Conversion of the Number %d is :- ",decimal[i]);
		for(k=0;k<length1[y];k++)
		{
			printf("%d",result1[i][k]);
		}
		if(y<x)
		{
			y++;
		}
		else
		{
			break;
		}
		printf("\n");
	}
	
	
	
	// Calculating the hexadecimal of each number in the array decimal
	int hex[10][10],length2[10],a,m=0,n;
	for(i=0;i<num;i++)
	{
		// Saving the Number in the array decimal to a temporary variable
		temp=decimal[i];
		for(a=0;temp>0;a++)
		{
			// Saving the hexa values to a 2D array hex[][]
			hex[i][a]=temp%16;
			temp=temp/16;
		}
		// Saving the length of the hexa number in an array
		length2[m]=a;
		m++;				
	}
	
	n=0;
	// Displaying the inverted Hexadecimal Converion of the Decimal number
	for(i=0;i<num;i++)
	{
		printf("\n\nThe Inverted Hexadecimal Conversion of the Number %d :- ",decimal[i]);
		for(k=0;k<length2[n];k++)
		{
			printf("%d",hex[i][k]);
		}
		printf("\n");
		// Checking if n does not exceed m
		if(n<m)
		{
			n++;
		}
		else
		{
			break;
		}
	}
	
	// Saving the actual hexadecimal of the number in a 2D array result2[][]
	int result2[10][10],l;
	n=0;
	for(i=0;i<num;i++)
	{
		l=length2[n];
		for(k=0;l>0;k++,l--)
		{
			result2[i][l-1]=hex[i][k];
		}
		if(n<m)
		{
			n++;
		}
		else
		{
			break;
		}
	}
	
	// displaying the hexadecimal number of the decimal numbers
	n=0;
	for(i=0;i<num;i++)
	{
		printf("\nThe Hexadecimal Conversion of the Number %d is :- ",decimal[i]);
		for(k=0;k<length2[n];k++)
		{
			printf("%d",result2[i][k]);
		}
		if(n<m)
		{
			n++;
		}
		else
		{
			break;
		}
		printf("\n");
	}
	
	return 0;
}
