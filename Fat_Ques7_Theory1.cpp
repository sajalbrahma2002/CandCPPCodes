// Ques 7 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverse_name(char *name,int len)
{
	char *ptr=name;
	char *qtr=name;
	int pos=0;
	while(!isspace(*name))
	{
		pos++;
		name++;
	}
	for(int i=0;i<=pos;i++)
	{
		qtr++;
	}
	for(int i=pos+1;i<len;i++)
	{
		printf("%c",*qtr);
		qtr++;
	}
	printf(" ");
	for(int i=0;i<pos;i++)
	{
		printf("%c",*ptr);
		ptr++;
	}
}

int main()
{
	char name[50];
	printf("Enter your name in the format <FirstName>< ><LastName> :- ");
	gets(name);
	int l =strlen(name);
	reverse_name(name,l);
	return 0;
}

// Ans : Sajal Brahma -> Brahma Sajal
