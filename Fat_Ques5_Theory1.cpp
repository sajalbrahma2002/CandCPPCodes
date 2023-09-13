// Ques 5 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

struct marks
{
	int mark1,mark2,mark3,mark4;
};
int main()
{
	int num,sum=0;
	printf("\nEnter num of students :- ");
	scanf("%d",&num);
	struct marks stud[num];
	for(int i=0;i<num;i++)
	{
		scanf("%d",&stud[i].mark1);
		scanf("%d",&stud[i].mark2);
		scanf("%d",&stud[i].mark3);
		scanf("%d",&stud[i].mark4);
	}
	
	for(int i=0;i<num;i++)
	{
		sum=stud[i].mark1+stud[i].mark2+stud[i].mark3+stud[i].mark4;
		if(sum>180)
		{
			printf("\nStudent No %d Eligible for genius test",i+1);
			if((stud[i].mark1*2)>80 && (stud[i].mark2*2)>80 && (stud[i].mark3*2)>80 && (stud[i].mark4*2)>80)
			{
				printf("\nStudent No %d Eligible for genius test 1",i+1);
			}
			else
			{
				printf("\nStudent No %d Eligible for genius test 2",i+1);
			}
		}
		else
		{
			printf("\nStudent No %d Not Eligible ",i+1);
		}
	}
	return 0;
}
// Ans : 3 50 45 50 45 50 50 50 35 23 34 34 25 -> Eligible Test / 1 Eligible Test 2 / Not Eligible
