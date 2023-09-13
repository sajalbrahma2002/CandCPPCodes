// Ques 1(b) - FAT Practice
// SAJAL BRAHMA 

#include<stdio.h>
int main()
{
	char c[] = "BCSE2022";
	char *p = c;
	printf("%s", p+(p[3]-p[1])+2);
	return 0;
}
// Ans : 2022
