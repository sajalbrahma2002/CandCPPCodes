//3c Classes in CPP - Arithmetic operation on N negative numbers 
//SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Negative
{
	int num[10];
	int sum,prod;
	public:
		void indata(int num1)
		{
			sum=0;
			prod=1;
			for(int i=0;i<num1;i++)
			{
				cout<<"\nEnter Negative Number "<<i+1<<" :- ";
				cin>>num[i];
				sum=sum+num[i];
			}
			cout<<"\nSum of "<<num1<<" negative numbers entered :- "<<sum<<endl;
			for(int j=0;j<num1;j++)
			{
				prod=prod*num[j];
			}
			cout<<"\nProduct of "<<num1<<" negative numbers entered :- "<<prod<<endl;
		}
};

int main()
{
	int n;
	Negative obj;
	cout<<"\nEnter the number of negative numbers to be entered :- ";
	cin>>n;
	obj.indata(n);
	return 0;
}
