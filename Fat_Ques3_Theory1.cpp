// Ques 3 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Registration
{
	int count,total,amount;
	public:
		Registration()
		{
			count=0;
			amount=0;
			total=0;
		}
		
		void indata()
		{
			cin>>amount;
			count++;
			total=total+amount;
		}
		void display()
		{
			cout<<"\n"<<count<<"\n"<<total;
		}
};

int main()
{
	Registration obj;
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		obj.indata();
	}
	obj.display();
	return 0;
}

// Ans : 3 5000 6000 9000 -> 3 20000

