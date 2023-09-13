// Ques 1 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<math.h>                              // math headerfile for using sqrt function

int main()
{
	int a,b,c;
	float d,p,q;
	printf("values of a,b,c?");
	scanf("%d %d %d",&a,&b,&c);               // use of & for inputing value from user
	d=b*b-4*a*c;
	if(d>0)
	{
		printf("real");
		p=(-b+sqrt(d))/(2*a);                 // use of brackets to avoid confusion during simplification
		q=(-b-sqrt(d))/(2*a);
		printf("the roots are %f %f",p,q);    // %f for float values
	}
	else if(d<0)
	printf("imaginary");
	else 
	{
		printf("real and equal");
		p=(-b+sqrt(d))/(2*a);                // use of brackets to avoid confusion during simplification
		q=(-b-sqrt(d))/(2*a);
		printf("the roots are %f %f",p,q);   // %f for float values
	}
	//return 0;
}
