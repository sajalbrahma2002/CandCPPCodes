// Ques 11 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

// Base class Admission
class Admission
{
	int student,cash;	
	public:
		Admission()
		{
			student =0;
			cash =0;
		}
		Admission(int a,int b)
		{
		    student = a;
		    cash = b;
	    }
	    void display()
	    {
	    	cout<<"\n\nTotal students to pay fee :- "<<student;
	    	cout<<"\nTotal cash to be collected :- "<<cash;
		}	
};


// Derive class Student1 for category 1-5
class Student1 : public Admission
{
	public:
		int total1=0;
		void calculate()
		{
			int n1;
			cout<<"\nEnter Installment No (1-3) :- ";
			cin>>n1;
			if(n1==1)
			{
				cout<<"\nInstallment Amount to be paid :- 10000";
				total1=total1+10000;
			}
			else if(n1==2)
			{
				cout<<"\nInstallment Amount to be paid :- 12000";
				total1=total1+12000;
			}
			else if(n1==3)
			{
				cout<<"\nInstallment Amount to be paid :- 10000";
				total1=total1+10000;
			}
			else
			{
				cout<<"\nInappropiate Installment Number !";
			}
		}
		
		int amount1()
		{
			return total1;
		}
};

// Derive class Student2 for categroy 6-8
class Student2 : public Admission 
{
	public:
		int total2=0;
		void calculate()
		{
			int n2;
			cout<<"\nEnter Installment No (1-3) :- ";
			cin>>n2;
			if(n2==1)
			{
				cout<<"\nInstallment Amount to be paid :- 12000";
				total2=total2+12000;
			}
			else if(n2==2)
			{
				cout<<"\nInstallment Amount to be paid :- 14000";
				total2=total2+14000;
			}
			else if(n2==3)
			{
				cout<<"\nInstallment Amount to be paid :- 12000";
				total2=total2+12000;
			}
			else
			{
				cout<<"\nInappropiate Installment Number !";
			}
		}
		
		int amount2()
		{
			return total2;
		}
};

// Derive class Student3 for category 9-10
class Student3 : public Admission
{
	public:
		int total3=0;
		void calculate()
		{
			int n3;
			cout<<"\nEnter Installment No (1-3) :- ";
			cin>>n3;
			if(n3==1)
			{
				cout<<"\nInstallment Amount to be paid :- 15000";
				total3=total3+15000;
			}
			else if(n3==2)
			{
				cout<<"\nInstallment Amount to be paid :- 16000";
				total3=total3+16000;
			}
			else if(n3==3)
			{
				cout<<"\nInstallment Amount to be paid :- 15000";
				total3=total3+15000;
			}
			else
			{
				cout<<"\nInappropiate Installment Number !";
			}
		}
		
		int amount3()
		{
			return total3;
		}
};

// Derive class Student4 for category 11-12
class Student4 : public Admission
{
	public:
		int total4=0;
		void calculate()
		{
			int n4;
			cout<<"\nEnter Installment No (1-3) :- ";
			cin>>n4;
			if(n4==1)
			{
				cout<<"\nInstallment Amount to be paid :- 20000";
				total4=total4+20000;
			}
			else if(n4==2)
			{
				cout<<"\nInstallment Amount to be paid :- 18000";
				total4=total4+18000;
			}
			else if(n4==3)
			{
				cout<<"\nInstallment Amount to be paid :- 20000";
				total4=total4+20000;
			}
			else
			{
				cout<<"\nInappropiate Installment Number !";
			}
		}
		
		int amount4()
		{
			return total4;
		}
};

int main()
{
	int num1,num2,num,studcat;
	cout<<"Enter the total number of students in the school :- ";
	cin>>num1;
	cout<<"\nEnter the number of students who has recieved scholarships :- ";
	cin>>num2;
	num=num1-num2;
	Student1 obj1;
	Student2 obj2;
	Student3 obj3;
	Student4 obj4;
	for(int i=0;i<num;i++)
	{
		cout<<"\nEnter the student category 1-5 / 6-8 / 9-10 / 11-12 :- ";
		cin>>studcat;
		if(studcat>=1 && studcat<=5)
		{
			cout<<"Installment 1 Fee :- 10000"<<endl;
			cout<<"Installment 2 Fee :- 12000"<<endl;
			cout<<"Installment 3 Fee :- 10000"<<endl;
			obj1.calculate();
		}
		else if(studcat>=6 && studcat<=8)
		{
			cout<<"Installment 1 Fee :- 12000"<<endl;
			cout<<"Installment 2 Fee :- 14000"<<endl;
			cout<<"Installment 3 Fee :- 12000"<<endl;
			obj2.calculate();
		}
		else if(studcat>=9 && studcat<=10)
		{
			cout<<"Installment 1 Fee :- 15000"<<endl;
			cout<<"Installment 2 Fee :- 16000"<<endl;
			cout<<"Installment 3 Fee :- 15000"<<endl;
			obj3.calculate();
		}
		else if(studcat>=11 && studcat<=12)
		{
			cout<<"Installment 1 Fee :- 20000"<<endl;
			cout<<"Installment 2 Fee :- 18000"<<endl;
			cout<<"Installment 3 Fee :- 20000"<<endl;
			obj4.calculate();
		}
		else
		{
			cout<<"\nWrong Category Entered !";
		}
	}
	int total=obj1.amount1()+obj2.amount2()+obj3.amount3()+obj4.amount4();
	Admission obj(num,total);
	obj.display();
	return 0;
}
