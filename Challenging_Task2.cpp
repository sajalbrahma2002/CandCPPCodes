// Challenging Task 2 - Classes - Inheritance & Pointers
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Employee
{
	protected:
		int basicpay;
	public:		
		virtual void getSalary(){}
		
};

class Driver : public Employee
{
	int salary1;
	public:
		virtual void getSalary()
		{
			cout<<"\nEnter Basic Pay :- ";
			cin>>basicpay;
			salary1=basicpay;
			cout<<"\nThe Salary of Driver is :- "<<salary1;
	    }
};			

class Developer : public Employee
{
	int salary2;
	double da,hra;
	public:
		virtual void getSalary()
		{
			cout<<"\nEnter the Basic Pay :- ";
			cin>>basicpay;
			salary2=basicpay;
			da=0.3*basicpay;
			hra=0.2*basicpay;
		    cout<<"\nThe Salary Of The Developer is :- "<<salary2+da+hra;	
		}
};

int main()
{
	Employee *ptr;
	char ch;
	cout<<"Enter your choice (R/D) :- ";
	cin>>ch;
	if(ch=='R')
	{
		Driver obj1;
		ptr=&obj1;
		ptr->getSalary();
	}
	else if(ch=='D')
	{
		Developer obj2;
		ptr=&obj2;
		ptr->getSalary();
	}
	else
	{
		cout<<"\nInvalid Choice! ";
	}
	return 0;
}
