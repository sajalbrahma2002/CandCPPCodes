// Ques 12(b) - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
#include<cmath>
using namespace std;

template<class T>
T Power(T base,int exp)
{
	T a=pow(base,exp);
	return a;
}

int main()
{
	int b1,e1;
	cout<<"Enter the base for the calculation :- ";
	cin>>b1;
	cout<<"\nEnter the exponent for the calculation :- ";
	cin>>e1;
	int j = Power(b1,e1);
	cout<<"\nAns :- "<<j<<endl;
	float b2;
	int e2;
	cout<<"Enter the base for the calculation :- ";
	cin>>b2;
	cout<<"\nEnter the exponent for the calculation :- ";
	cin>>e2;
	float k = Power(b2,e2);
	cout<<"\nAns :- "<<k<<endl;
}
