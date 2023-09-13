// PAT1 - Express Number in products of prime number
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
#include<math.h>
using namespace std;

void Find_Prime_Factors(int x)
{
	cout<<"\nThe prime factors are :- ";
	while(x%2 == 0)
	{
		cout<<"2 ";
		x=x/2;
	}
	
	for(int i=3;i<=sqrt(x);i=i+2)
	{
		while(x%i==0)
		{
			cout<<i<<" ";
			x=x/i;
		}
	}
	if(x>2)
	  cout<<x;
}

int main()
{
	int num;
	cout<<"Enter the number :- ";
	cin>>num;
	Find_Prime_Factors(num);
	return 0;
}

// Eg - 27685
// Output - 5 7 7 113
