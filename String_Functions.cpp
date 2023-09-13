// To Perform different String Functions
#include<stdio.h>
#include<string.h>

int main()
{
	char string1[50],string2[50];
    int l;
    //Performing Reading And Printing Of Strings
    printf("Performing Reading And Printing of String:-");
    printf("\nEnter the First String [max 50]:- ");
    scanf("%s",&string1);
    printf("\nThe Entered String is :- %s",string1);
    
    //Performing Strings Length Functions
    printf("\n\nPerfoming String Length Functions :- ");
    l=strlen(string1);
    printf("\neThe Length of string is :- %d",l);
    
    //Performing String to convert to lowercase
    printf("\n\nPerforming String to convert to lowercase :- ");
    printf("\nThe string after converting to lowercase :- %s",strlwr(string1));
    
    //Performing String to convert to uppercase
    printf("\n\nPerforming String to convert to uppercase :- ");
    printf("\nThe string after converting to uppercase :- %s",strupr(string1));
    
    //Performing Concatenation of Two Strings
    printf("\n\nPerforming Concatenation Function with 2 strings :- ");
    printf("\nEnter the Second String [max 50] :- ");
    scanf("%s",&string2);
    strcat(string1,string2);
    printf("\nString After Concatenation :- %s",string1);
    
    //Performing Concatenation Of Two Strings For First N characters
    printf("\n\nPerforming Concatenation for First N characters after One String :- ");
    int num;
	printf("\nEnter the value of N [0-%d] :- ",strlen(string2));
    scanf("%d",&num);
    strncat(string1,string2,num);
    printf("\nThe String after Concatenation of N characters after first String :- %s",string1);
    
    //Performing Strings to Copy in Another String
	printf("\n\nPerforming string to copy in another string :- ");
	strcpy(string1,string2);
	printf("\nThe string after copying in another in another string :- %s",string1);
	
	//Performing String to copy N characters in Another String
	printf("\n\nPerfoming String to copy N characters in another string :- ");
	char string3[50],string4[50];
	int num1;
	printf("\nEnter the First String [max 50]:- ");
    scanf("%s",&string3);
    printf("\nEnter the Second String [max 50] :- ");
    scanf("%s",&string4);
    printf("\nEnter the value of N [0-%d]:- ",strlen(string4));
	scanf("%d",&num1);
	strncpy(string3,string4,num1);
	printf("\nThe string after copying of N characters in another string :- %s",string3);
	
	//Performing Comparison Of Two Strings
	printf("\n\nCpmparing of two Strings :- ");
	char string5[50],string6[50];
	printf("\nEnter the First String [max 50]:- ");
    scanf("%s",&string5);
    printf("\nEnter the Second String [max 50] :- ");
    scanf("%s",&string6);
    if (strcmp(string5,string6)==0)
     {
         printf("\nstring 1 and String 2 are equal");
     }
	else
      {
         printf("\nString 1 and String 2 are different");
      }
      
    //Performing String Comparison For First N Characters
    printf("\n\nCpmparing of two Strings for First N characters :- ");
    int num2;
    printf("\nEnter the Value of N to compare for First N characters :- ");
    scanf("%d",&num2);
    if (strncmp(string5,string6,num2)==0)
     {
         printf("\nstring 1 and String 2 are equal");
     }
	else
      {
         printf("\nString 1 and String 2 are different");
      }
      
    //Performing to Compare two Strings without regard to case (stricmp can also be used)
    printf("\n\nCpmparing of two Strings without regard to case :- ");
	if (strcmpi(string5,string6)==0)
     {
         printf("\nstring 1 and String 2 are equal");
     }
	else
      {
         printf("\nString 1 and String 2 are different");
      }
      
    //Performing to compare two strings for N characrters without regard to case
    int num3;
    printf("\n\nCpmparing of two Strings for N characters without regard to case :- ");
	printf("\nEnter the value of N to compare the characters of strings without case :- ");
	scanf("%d",&num3);
	if(strnicmp(string5,string6,num3)==0)
     {
         printf("\nstring 1 and String 2 are equal");
     }
	else
      {
         printf("\nString 1 and String 2 are different");
      }
    
    //Performing String Function to Reverse a String
    printf("\n\nPerforming to Reverse a String :- ");
	strrev(string5);
	printf("\nString After Reversing :- %s",string5);
    
	return 0;
	
}
    
    
