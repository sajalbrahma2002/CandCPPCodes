// IPS3 Question - Average Marks
// SAJAL BRAHMA - 21BPS0145

#include<iostream>
using namespace std;

class Marks 
{
	double mark1A,mark1B,mark1C,mark2A,mark2B,mark2C,mark3A,mark3B,mark3C;
	double avg,avg1,avg2,avg3,avg4,avg5,avg6;
	public:
		void indata()
		{
			cout<<"\nEnter Marks Of Student 1 :- ";
			cout<<"\nEnter Marks 1 for Student 1 :- ";
			cin>>mark1A;
			cout<<"\nEnter Marks 2 for Student 1 :- ";
			cin>>mark1B;
			cout<<"\nEnter Marks 3 for Student 1 :- ";
			cin>>mark1C;
			cout<<"\nEnter Marks Of Student 2 :- ";
			cout<<"\nEnter Marks 1 for Student 2 :- ";
			cin>>mark2A;
			cout<<"\nEnter Marks 2 for Student 2 :- ";
			cin>>mark2B;
			cout<<"\nEnter Marks 3 for Student 2 :- ";
			cin>>mark2C;
			cout<<"\nEnter Marks Of Student 3 :- ";
			cout<<"\nEnter Marks 1 for Student 3 :- ";
			cin>>mark3A;
			cout<<"\nEnter Marks 2 for Student 3 :- ";
			cin>>mark3B;
			cout<<"\nEnter Marks 3 for Student 3 :- ";
			cin>>mark3C;
		}
		
		void avg_student()
		{
			avg1=(mark1A+mark1B+mark1C)/3;
			avg2=(mark2A+mark2B+mark2C)/3;
			avg3=(mark3A+mark3B+mark3C)/3;
			cout<<"\nThe average marks of the student :- "<<round(avg1);
			cout<<"\nThe average marks of the student :- "<<round(avg2);
			cout<<"\nThe average marks of the student :- "<<round(avg3);
			
		}
		
		void avg_course()
		{
			avg4=(mark1A+mark2A+mark3A)/3;
			avg5=(mark1B+mark2B+mark3B)/3;
			avg6=(mark1C+mark2C+mark3C)/3;
			cout<<"\nThe average of course 1 is :- "<<round(avg4);
			cout<<"\nThe average of course 2 is :- "<<round(avg5);
			cout<<"\nThe average of course 3 is :- "<<round(avg6);
		}
		
		void average()
		{
			avg=(mark1A+mark1B+mark1C+mark2A+mark2B+mark2C+mark3A+mark3B+mark3C)/9;
			cout<<"\nThe all over average of the courses :- "<<round(avg);
		}
		
		double round(double d)
		{
			double x=d*100.00;
			if(x<0)
			{
				x=x-0.5;
			}
			else
			{
				x=x+0.5;
			}
			int y=x;
			x=y/100.00;
			return x;
		}
};

int main()
{
	Marks obj;
	obj.indata();
	obj.avg_student();
	obj.avg_course();
	obj.average();
	return 0;
}
