// CAT2 Ques2B Alternative
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Employee
{
	public:
		static float bp;
		static float da;
		static float hra;
		static void indata(float bp1)
		{
			bp=bp1;
		}
};

float Employee :: bp=0;
float Employee :: da=0;
float Employee :: hra=0;

class Bankmanager : public Employee
{
	public:
		static void setdata1()
		{
			da=0.4*bp;
			hra=0.1*bp;
		}
		
		float salary1()
		{
			setdata1();
			return bp+da+hra+1000;
		}
};

class Asstmanager : public Employee
{
	public:
		static void setdata2()
		{
			da=0.3*bp;
			hra=0.1*bp;
		}
		
		float salary2()
		{
			setdata2();
			return bp+da+hra+1000;
		}
};

class Cashier : public Employee
{
	public:
		static void setdata3()
		{
			da=0.1*bp;
			hra=0.02*bp;
		}
		
		float salary3()
		{
			setdata3();
			return bp+da+hra+1000;
		}
};

int main()
{
	Employee obj;
	Bankmanager obj1;
	Asstmanager obj2;
	Cashier obj3;
	float basicpay;
	cout<<"\nEnter the Basic Pay :- ";
	cin>>basicpay;
	obj.indata(basicpay);
	cout<<"\nBank Manager's Salary :- "<<obj1.salary1();
	cout<<"\nAssistant Bank Manager Salary :- "<<obj2.salary2();
	cout<<"\nCashier Salary :- "<<obj3.salary3();
	return 0;
}

