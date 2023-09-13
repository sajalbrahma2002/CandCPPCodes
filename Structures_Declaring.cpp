//Implementing Basic Structure ,Declaring the structure objects and printing the values
#include<stdio.h>

struct student
{
	char name[20];
	int roll;
	float marks;
	char grade;
};

int main()
{
	struct student stud1 = {"Aiden",10005,96.2,'A'};
	struct student stud2 = {"Elizabeth",10013.,93.8,'A'};
	struct student stud3 = {"Connor",10009,88.5,'B'};
	struct student stud4;
	stud4 = stud2;
	printf("Name :- %s   Roll :- %d   Marks :- %f   Grade :- %c\n",stud1.name,stud1.roll,stud1.marks,stud1.grade);
    printf("Name :- %s   Roll :- %d   Marks :- %f   Grade :- %c\n",stud2.name,stud2.roll,stud2.marks,stud2.grade);	
    printf("Name :- %s   Roll :- %d   Marks :- %f   Grade :- %c\n",stud3.name,stud3.roll,stud3.marks,stud3.grade); 
    printf("\n\n\After Copying :-\n");
	printf("Name :- %s   Roll :- %d   Marks :- %f   Grade :- %c\n",stud4.name,stud4.roll,stud4.marks,stud4.grade);
    return 0;
}
