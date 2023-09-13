//Structures in C
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//declaring the structure student
struct student
{
	//structure members
	char *name;
	int roll;
	float marks;
	char grade;
	char result[10];       // declaring array within structure
}stud1;                    //declaring object stud1 of student

int main()
{
	struct student stud2;          // declaring object stud2 of student
	//initializing , accessing structure members
	stud1={"Akash Singh",324,97.23,'A',{'P','a','s','s'}};                    // initializing all members and array member using braces 
	stud2.name = "LaurenAlexis";                                              // initializing members individully 
	stud2.roll=456;
	stud2.marks=96.98;
	stud2.grade='A';
	strcpy(stud2.result,"Pass");
	printf("Name of Student :- %s \nRoll of Student :- %d  \nMarks of student :- %f  \nGrade of student :- %c \nResult of student :- %s \n",stud1.name,stud1.roll,stud1.marks,stud1.grade,stud1.result);
	printf("Name of Student :- %s \nRoll of Student :- %d  \nMarks of student :- %f  \nGrade of student :- %c \nResult of student :- %s \n",stud2.name,stud2.roll,stud2.marks,stud2.grade,stud2.result);
	return 0;
}
