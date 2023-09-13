// C - Final Assessment Test
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

// Declaring a structure to save details Exam
struct Exam
{
	int A,B,C,D;
};

int main()
{
	struct Exam obj;
	int num;
	printf("Enter the Number of Objective Questions :- ");
	scanf("%d",&num);
	printf("\nEnter Number of Questions whose option is A :- ");
	scanf("%d",&obj.A);
	printf("\nEnter Number of Questions whose option is B :- ");
	scanf("%d",&obj.B);
	printf("\nEnter Number of Questions whose option is C :- ");
	scanf("%d",&obj.C);
	printf("\nEnter Number of Questions whose option is D :- ");
	scanf("%d",&obj.D);
	if(obj.A+obj.B+obj.C+obj.D<=num)
	{
		if(obj.A>>obj.B && obj.A>>obj.C && obj.A>>obj.D)
		{
			printf("\n The marks obtained is :- %d",obj.A);
		}
		else if(obj.B>>obj.A && obj.B>>obj.C && obj.B>>obj.D)
		{
			printf("\n The marks obtained is :- %d",obj.B);
		}
		else if(obj.C>>obj.A && obj.C>>obj.B && obj.C>>obj.D)
		{
			printf("\n The marks obtained is :- %d",obj.C);
		}
		else if(obj.D>>obj.A && obj.D>>obj.B && obj.D>>obj.C)
		{
			printf("\n The marks obtained is :- %d",obj.D);
		}
		else
		{
			printf("\n The marks obtained is :- %d",obj.A+obj.B+obj.C+obj.D);
		}
	}
	else
	{
		printf("\n Invalid Input! ");
	}
	return 0;
}
