// Multipath Inheritance - Public Inheritance
// Multipath Inheritance - A class derived from other derived classes , which are derived from the same base or parent class
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

// Base class 1
// Base class company with multiple derive classes
class Company
{
	public:
		char name[50];
		int id;
		int salary;
		int long long phno;
};


// Derive class 1
// class Manager stores details of Manager
class Manager : public Company
{
	public:
		void indata1()
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
			cout<<"\nManager's Name :- "<<name;
			cout<<"\nManager's ID :- "<<id;
			cout<<"\nManager's Salary :- "<<salary;
			cout<<"\nManager's Phone Number :- "<<phno<<endl;
		}
		
		int Mgsalary()
		{
			return salary;
		}
};

// Derive class 2
// class Asstmanager stores details of Assistant Manager
class Asstmanager : public Company
{
	public:
		void indata2()
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
			cout<<"\nAssistant Manager's Name :- "<<name;
			cout<<"\nAssistant Manager's ID :- "<<id;
			cout<<"\nAssistant Manager's Salary :- "<<salary;
			cout<<"\nAssistant Manager's Phone Number :- "<<phno<<endl;
		}
		
		int AstMgsalary()
		{
			return salary;
		}
};

// Derive class 3
// class HRmanager stores details of HR Manager
class HRmanager : public Company
{
	public:
		void indata3()
		{
			cout<<"\nEnter Human Resourse Manager's Name :- ";
			cin>>name;
			cout<<"\nEnter Human Resiurse Manager's ID :- ";
			cin>>id;
			cout<<"\nEnter Human Resourse Manager's Salary :- ";
			cin>>salary;
			cout<<"\nEnter Human Resourse Manager's Phone Number :- ";
			cin>>phno;
		}
		
		void display3()
		{
			cout<<"\nHR Manager's Name :- "<<name;
			cout<<"\nHR Manager's ID :- "<<id;
			cout<<"\nHR Manager's Salary :- "<<salary;
			cout<<"\nHR Manager's Phone Number :- "<<phno<<endl;
		}
		
		int HRMgsalary()
		{
			return salary;
		}
};

// Derive class 4
// class Finmanager stores details of Finance Manager
class Finmanager : public Company
{
	public:
		void indata4()
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
		
		void display4()
		{
			cout<<"\nFinance Manager's Name :- "<<name;
			cout<<"\nFinance Manager's ID :- "<<id;
			cout<<"\nFinance Manager's Salary :- "<<salary;
			cout<<"\nFinance Manager's Phone Number :- "<<phno<<endl;
		}
		
		int FinMgsalary()
		{
			return salary;
		}
};

// Derive class 5
// class Administrator stores details of Administrator
class Administrator : public Company
{
	public:
		void indata5()
		{
			cout<<"\nEnter Administrator's Name :- ";
			cin>>name;
			cout<<"\nEnter Administrator's ID :- ";
			cin>>id;
			cout<<"\nEnter Adminitrator's Salary :- ";
			cin>>salary;
			cout<<"\nEnter Administrator's Phone Number :- ";
			cin>>phno;
		}
		
		void display5()
		{
			cout<<"\nAdministrator's Name :- "<<name;
			cout<<"\nAdministrator's ID :- "<<id;
			cout<<"\nAdministrator's Salary :- "<<salary;
			cout<<"\nAdministrator's Phone Number :- "<<phno<<endl;
		}
		int 
		Adsalary()
		{
			return salary;
		}
};

// Derive class 6
// class Employee stores details of Employee
class Employee : public Company
{
	public:
		void indata6()
		{
			cout<<"\nEnter Employee's Name :- ";
			cin>>name;
			cout<<"\nEnter Employee's ID :- ";
			cin>>id;
			cout<<"\nEnter Employee's Salary :- ";
			cin>>salary;
			cout<<"\nEnter Employee's Phone Number :- ";
			cin>>phno;
		}
		
		void display6()
		{
			cout<<"\nEmployee's Name :- "<<name;
			cout<<"\nEmployee's ID :- "<<id;
			cout<<"\nEmployee's Salary :- "<<salary;
			cout<<"\nEmployee's Phone Number :- "<<phno<<endl;
		}
		
		int Empsalary()
		{
			return salary;
		}
};

// Derive Class of multiple Base classes
// class Salary takes values of different people and prints the details of people with salary greater than 10000 in the Company
class Salary : public Manager,public Asstmanager,public HRmanager,public Finmanager,public Administrator,public Employee
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
			cout<<"\nDetails Of People in Company with salary greater than 10000 :- "<<endl;
			if(Mgsalary()>10000)
			{
				display1();
			}
			if(AstMgsalary()>10000)
			{
				display2();
			}
			if(HRMgsalary()>10000)
			{
				display3();
			}
			if(FinMgsalary()>10000)
			{
				display4();
			}
			if(Adsalary()>10000)
			{
				display5();
			}
			if(Empsalary()>10000)
			{
				display6();
			}
		}
		
};

int main()
{
	// Declaring object obj of class Salary type
	Salary obj;
	obj.indata();
	obj.display();
	return 0;
}
