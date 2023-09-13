// PAT 2 - S^3>N>S>R && gcd(R,S)=1
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

int main()
{
	int n,s,r;
	cout<<"Enter the value of n :- ";
	cin>>n;
	cout<<"\nEnter the value of r :- ";
	cin>>r;
	cout<<"\nEnter the value of s :- ";
	cin>>s;
	int temp,i=2;
	while(i<=(n/2))
	{
		if(n%i==0)
		{
			if(i>=r)
			{
				temp=i-r;
			    if(temp%s==0)
			    {
				   cout<<i<<endl;
			    }
			}
		}
		i=i+1;
	}
	
	temp=n-r;
	if(temp%s==0)
	{
		cout<<n<<endl;
	}
	return 0;
}

// 1796760,03,137 -> 3,140,414,3565,7812,19320
// 1796760,93,137 -> 93,230,504,4340,12834,598920
