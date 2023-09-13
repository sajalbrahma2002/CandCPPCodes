//3c - Classes in CPP - Arithmetic operation on N prime numbers 
//SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Prime
{
	int prime[10];
	int sum,diff;
	public:
		void indata(int num)
		{
			sum=0;
			diff=0;
			for(int i=0;i<num;i++)
			{
				cout<<"\nEnter Prime Number "<<i+1<<" :- ";
				cin>>prime[i];
				sum=sum+prime[i];
			}
			cout<<"\nSum of "<<num<<" prime numbers entered :- "<<sum<<endl;
			diff=prime[0];
			for(int j=1;j<num;j++)
			{
				diff=diff-prime[j];
			}
			cout<<"\nDifference of "<<num<<" prime numbers entered :- "<<diff<<endl;
		}
		
};

int main()
{
	int n;
	Prime obj;
	cout<<"\nEnter the number of prime numbers to be entered :- ";
	cin>>n;
	obj.indata(n);
	return 0;
}
