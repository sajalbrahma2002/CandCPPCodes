// Multiple Inheritance - Public Inheritance
// Multiple Inheritance - A class can inherit properties from more than one parent class
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

// Base class 1
// class Manager to save details of Manager
class Manager
{
	char name1[30];
	float salary1;
	public:
		void indata1()
		{
			cout<<"\nEnter Manager's Name :- ";
			cin>>name1;
			cout<<"\nEnter Manager's Salary :- ";
			cin>>salary1;
		}
		
		void display1()
		{
			cout<<"\nManager's Name :- "<<name1<<endl;
			cout<<"\nManager's Salary :- "<<salary1<<endl;
		}
};

// Base class 2
// class Asstmanager to save details of Assistant Manager
class Asstmanager
{
	char name2[30];
	float salary2;
	public:
		void indata2()
		{
			cout<<"\nEnter Assistant Manager's Name :- ";
			cin>>name2;
			cout<<"\nEnter Assistant Manager's Salary :- ";
			cin>>salary2;
		}
		
		void display2()
		{
			cout<<"\nAssistant Manager's Name :- "<<name2<<endl;
			cout<<"\nAssistant Manager's Salary :- "<<salary2<<endl;
		}
};

// Base class 3
// class Finmanager to save data of Finance Manager
class Finmanager
{
	char name3[30];
	float salary3;
	public:
		void indata3()
		{
			cout<<"\nEnter Finance Manager's Name :- ";
			cin>>name3;
			cout<<"\nEnter Finance Manager's Salary :- ";
			cin>>salary3;
		}
		
		void display3()
		{
			cout<<"\nFinance Manager's Name :- "<<name3<<endl;
			cout<<"\nFinance Manager's Salary :- "<<salary3<<endl;
		}
};

// Base class 4
// class HRmanager to save data of Human Resourse Manager
class HRmanager
{
	char name4[30];
	float salary4;
	public:
		void indata4()
		{
			cout<<"\nHuman Resourse Manager's Name :- ";
			cin>>name4;
			cout<<"\nHuman Resourse Manager's Salary :- ";
			cin>>salary4;
		}
		
		void display4()
		{
			cout<<"\nAssistant Manager's Name :- "<<name4<<endl;
			cout<<"\nAssistant Manager's Salary :- "<<salary4<<endl;
		}
};

// Base class 5
// class Administrator to save details of Administrator
class Administrator
{
	char name5[30];
	float salary5;
	public:
		void indata5()
		{
			cout<<"\nEnter Administrator's Name :- ";
			cin>>name5;
			cout<<"\nEnter Administrator's Salary :- ";
			cin>>salary5;
		}
		
		void display5()
		{
			cout<<"\nAdministrator's Name :- "<<name5<<endl;
			cout<<"\nAdministrator's Salary :- "<<salary5<<endl;
		}
};

// Base class 6
// class Employee to save details of Employee
class Employee
{
	char name6[30];
	float salary6;
	public:
		void indata6()
		{
			cout<<"\nEnter Employee's Name :- ";
			cin>>name6;
			cout<<"\nEnter Employee's Salary :- ";
			cin>>salary6;
		}
		
		void display6()
		{
			cout<<"\nEmployee's Name :- "<<name6<<endl;
			cout<<"\nEmployee's Salary :- "<<salary6<<endl;
		}
};

// Derieved class Complany Inheriting class Manager,Asstmanager,Finmanager,HRmanager,Administrator and Employee publicly
class Company : public Manager,public Asstmanager ,public Finmanager , public HRmanager ,public Administrator , public Employee
{
	public:
		void indata()
		{
			indata1();
			indata2();
			indata3();
			indata4();
			indata5();
			indata6();
		}
		
		void display()
		{
			display1();
			display2();
			display3();
			display4();
			display5();
			display6();
		}
		
};

int main()
{
	Company obj;
	obj.indata();
	obj.display();
	return 0;
}
