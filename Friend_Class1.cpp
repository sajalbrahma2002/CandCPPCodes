// SAJAL BRAHMA - 21BPS1045
// Friend Class Class Assignment
// Define a class called store,
// Display the number of items in the first three stores using base class object
// Display the number of items in the next two stores using friend class

#include<iostream>
using namespace std;

class Store                                                  // base class Store
{
	friend class Derivedstore;                               // friend class Derivedstore 
	private:
		char item1[20],item2[20],item3[20];                  // declaring 3 private variables for items of char type string
		
	public:
		void inputdata()                                     // public member function to input data                                  
		{
			cout<<"\nEnter Product 1 :- ";
			cin>>item1;
			cout<<"\nEnter Product 2 :- ";
			cin>>item2;
			cout<<"\nEnter Product 3 :- ";
			cin>>item3;
		}
		void displaydata()                                    // public member function to display data
		{
			cout<<"\nProduct 1 :- "<<item1<<endl;
			cout<<"\nProduct 2 :- "<<item2<<endl;
			cout<<"\nProduct 3 :- "<<item3<<endl;
		}
		
};

class Derivedstore                                            // Friend Class definition
{
	public:
		void display(Store &obj)                              // public member function to display data taking address of object of base class
		{
			cout<<"\nProduct 1 :- "<<obj.item1<<endl;
			cout<<"\nProduct 2 :- "<<obj.item2<<endl;
			cout<<"\nProduct 3 :- "<<obj.item3<<endl;		
		}		
};

int main()
{
	Store obj1,obj2,obj3,obj4,obj5;                           // declaring 5 object of base class
	Derivedstore temp1,temp2;                                 // declaring 2 object of friend class
	cout<<"\nEnter Items for Store 1(Electronics Store) :- ";
	obj1.inputdata();                                         // input 3 items for store 1 
	cout<<"\nEnter Items for Store 2(Garment Store) :- ";
	obj2.inputdata();                                         // input 3 items for store 2
	cout<<"\nEnter Items for Store 3(Sports Store) :- ";
	obj3.inputdata();                                         // input 3 items for store 3
	cout<<"\nEnter Items for Store 4(Stationary Store) :- ";
	obj4.inputdata();                                         // input 3 items for store 4
	cout<<"\nEnter Items for Store 5(Food Store) :- ";
	obj5.inputdata();                                         // input 3 items for store 5
	
	//Displaying items for store 1,2,3 using base class(Store)
	cout<<"\nDisplaying Items of Store 1(Electronics) using base class Store :- ";
	// Displaying 3 items for store 1 using base class(Store) object obj1
	obj1.displaydata();                                       
	cout<<"\nDisplaying Items of Store 2(Garments) using base class Store :- ";
	// Displaying 3 items for store 2 using base class(Store) object obj2
	obj2.displaydata();                                       
	cout<<"\nDisplaying Items of Store 3(Sports) using base class Store :- ";
	// Displaying 3 items for store 3 using base class(Store) object obj3
	obj3.displaydata();                           
	
	//displaying items for store 4,5 using friend class(Derivedstore)            
	cout<<"\nDisplaying Items of Store 4(Stationary) using Friend class DerivedStore :- ";
	// Displaying 3 items for store 4 using friend class(Derivedstore) object temp1 and passing address of base class(Store) object obj4
	temp1.display(obj4);                                      
	cout<<"\nDisplaying Items of Store 5(Food) using Friend class DerivedStore :- ";
	// Displaying 3 items for store 5 using friend class(Derivedstore) object temp 2 and passing address of base class(Store) object obj5
	temp2.display(obj5);                                      
	return 0;
}
