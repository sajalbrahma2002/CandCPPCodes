// Hierarchical Inheritance - Public Inheritance
// Hierarchical Inheritance - If more than one class is inherited from the same parent or base class
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

// Single Base class Employee with multiple derive classes
class Employee
{
	public:
	char name[40];
	int id;
	float salary;
	int long long phno;
};

// Derive class 1 
// class Manager saves details of manager  
class Manager : public Employee
{
	public:
		indata1()
		{
			cout<<"\nEnter Manager's Name :- ";
			cin>>name;
			cout<<"\nEnter Manager's ID :- ";
			cin>>id;
			cout<<"\nEnter Manager's Salary :- ";
			cin>>salary;
			cout<<"\nEnter Manager's Phone Number :- ";
			cin>>phno;
		}
		
		void display1()
		{
			cout<<"\nManager's Name :- "<<name<<endl;
			cout<<"\nManager's ID :- "<<id<<endl;
			cout<<"\nManager's Salary :- "<<salary<<endl;
			cout<<"\nManager's Phone Number :- "<<phno<<endl;
		}
};

// Derive class 2
// class Asstmanager save details of asst manager 
class Asstmanager : public Employee
{
	public:
		indata2()
		{
			cout<<"\nEnter Assistant Manager's Name :- ";
			cin>>name;
			cout<<"\nEnter Assistant Manager's ID :- ";
			cin>>id;
			cout<<"\nEnter Assistant Manager's Salary :- ";
			cin>>salary;
			cout<<"\nEnter Assistant Manager's Phone Number :- ";
			cin>>phno;
		}
		
		void display2()
		{
			cout<<"\nAssistant Manager's Name :- "<<name<<endl;
			cout<<"\nAssistant Manager's ID :- "<<id<<endl;
			cout<<"\nAssistant Manager's Salary :- "<<salary<<endl;
			cout<<"\nAssistant Manager's Phone Number :- "<<phno<<endl;
		}
};

// Derive class 3
// classFinmanager saves the details of Finance manager
class Finmanager : public Employee
{
	public:
		indata3()
		{
			cout<<"\nEnter Finance Manager's Name :- ";
			cin>>name;
			cout<<"\nEnter Finance Manager's ID :- ";
			cin>>id;
			cout<<"\nEnter Finance Manager's Salary :- ";
			cin>>salary;
			cout<<"\nEnter Finance Manager's Phone Number :- ";
			cin>>phno;
		}
		
		void display3()
		{
			cout<<"\nFinance Manager's Name :- "<<name<<endl;
			cout<<"\nFinance Manager's ID :- "<<id<<endl;
			cout<<"\nFinance Manager's Salary :- "<<salary<<endl;
			cout<<"\nFinance Manager's Phone Number :- "<<phno<<endl;
		}
};

// Derive class 4
// Class HRmanager saves details of HR Manager
class HRmanager : public Employee
{
	public:
		indata4()
		{
			cout<<"\nEnter Human Resourse Manager's Name :- ";
			cin>>name;
			cout<<"\nEnter Human Resourse Manager's ID :- ";
			cin>>id;
			cout<<"\nEnter Human Resourse Manager's Salary :- ";
			cin>>salary;
			cout<<"\nEnter Human Resourse Manager's Phone Number :- ";
			cin>>phno;
		}
		
		void display4()
		{
			cout<<"\nHuman Resourse Manager's Name :- "<<name<<endl;
			cout<<"\nHuman Resourse Manager's ID :- "<<id<<endl;
			cout<<"\nHuman Resourse Manager's Salary :- "<<salary<<endl;
			cout<<"\nHuman Resourse Manager's Phone Number :- "<<phno<<endl;
		}
};

// Derive class 5
// class Administrator saves details of Administrator 
class Administrator : public Employee
{
	public:
		indata5()
		{
			cout<<"\nEnter Administrator's Name :- ";
			cin>>name;
			cout<<"\nEnter Administrator's ID :- ";
			cin>>id;
			cout<<"\nEnter Administrator's Salary :- ";
			cin>>salary;
			cout<<"\nEnter Administrator's Phone Number :- ";
			cin>>phno;
		}
		
		void display5()
		{
			cout<<"\nAdministrator's Name :- "<<name<<endl;
			cout<<"\nAdministrator's ID :- "<<id<<endl;
			cout<<"\nAdministrator's Salary :- "<<salary<<endl;
			cout<<"\nAdministrator's Phone Number :- "<<phno<<endl;
		}
};

int main()
{
	// Declaring objects obj1,obj2,obj3,obj4 & obj5 for different derive classes
	Manager obj1;
	Asstmanager obj2;
	Finmanager obj3;
	HRmanager obj4;
	Administrator obj5;
	obj1.indata1();
	obj2.indata2();
	obj3.indata3();
	obj4.indata4();
	obj5.indata5();
	obj1.display1();
	obj2.display2();
	obj3.display3();
	obj4.display4();
	obj5.display5();
	return 0;
}

