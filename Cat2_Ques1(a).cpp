//1a - Using static data members and static member functions 
//SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Salary
{
	static float bp1;
	static float bp2;
	static float bp3;
	float da1,da2,da3,hra1,hra2,hra3;
	public:
	    void indata()
		{
			cout<<"\nEnter Basic Pay for Bank Manager :- ";
			cin>>bp1;
			cout<<"\nEnter Basic Pay for Assitant Bank Manager :- ";
			cin>>bp2;
			cout<<"\nEnter Basic Pay for Cashier :- ";
			cin>>bp3;
		}
		
		float salary1()
		{
			da1=0.4*bp1;
			hra1=0.1*bp1;
			return bp1+da1+hra1+1000;
		}
		
		float salary2()
		{
			da2=0.3*bp2;
			hra2=0.1*bp2;
			return bp2+da2+hra2+1000;
		}
		
		float salary3()
		{
			da3=0.4*bp3;
			hra3=0.1*bp3;
			return bp3+da3+hra3+1000;
		}
};

float Salary::bp1=0;
float Salary::bp2=0;
float Salary::bp3=0;

int main()
{
	Salary obj;
	obj.indata();
	cout<<"\nThe Salary of Bank Manager is :- "<<obj.salary1()<<endl;
	cout<<"\nThe Salary of Assistant Bank Manager is :- "<<obj.salary2()<<endl;
	cout<<"\nRhe Salary of Cashier is :- "<<obj.salary3()<<endl;
	return 0;
}

