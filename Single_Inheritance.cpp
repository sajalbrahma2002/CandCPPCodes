// Single Inheritance - Public Inheritance
// Single Inheritance - It enables a derived class to inherit properties and behaviour from a single parent class
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

// Defining Base Class Store and declaring the variable publicly
class Store
{
	public:
	char item1[20],item2[20],item3[20];
	int price1,price2,price3;

};

// Defining Derived Class Shop of Base Class Store and accessing the variables of base class
// Acccessing the variables and giving values and displaying the values of the varaibles using member functions indata() & display()
class Shop : public Store
{
	public:
		void indata()
		{
			cout<<"\nEnter Item 1 :- ";
			cin>>item1;
			cout<<"\nEnter Price Of Item 1 :- ";
			cin>>price1;
			cout<<"\nEnter Item 2 :- ";
			cin>>item2;
			cout<<"\nEnter Price Of Item 2 :- ";
			cin>>price2;
			cout<<"\nEnter Item 3 :- ";
			cin>>item3;
			cout<<"\nEnter Price Of Item 3 :- ";
			cin>>price3;
		}
		
		void display()
		{
			cout<<"\nItem 1 :- "<<item1<<"\tPrice :- "<<price1<<endl;
			cout<<"\nItem 2 :- "<<item2<<"\tPrice :- "<<price2<<endl;
			cout<<"\nItem 3 :- "<<item3<<"\tPrice :- "<<price3<<endl;
		}
		
		int total()
		{
			return price1+price2+price3;
		}
};

int main()
{
	Shop obj;           // Creating object obj of class Shop type
	obj.indata();       // Calling the member function indata() using object obj
	obj.display();      // Calling the member function display() using object obj
	cout<<"\nTotal Amount Spend to buy the products :- "<<obj.total();
	return 0;
}
