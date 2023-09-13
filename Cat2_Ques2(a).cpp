//2a - Using Non - Friend member function & Friend Function defined outside class to access data members of class
//SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class CostProd
{
	int ingredient,labour,days,rental;
	public:
		void indata()
		{
			cout<<"\nEnter the cost of ingradients :- ";
			cin>>ingredient;
			cout<<"\nEnter cost of labour :- ";
			cin>>labour;
			cout<<"\nEnter number of days :- ";
			cin>>days;
			cout<<"\nEnter the rental cost of equipment :- ";
			cin>>rental;
		}
		int costcal();
		friend void costprod(CostProd obj);
};

int CostProd :: costcal()
{
	return ingredient+(labour*days)+rental;
}

void costprod(CostProd obj)
{
	cout<<"\nCost of ingredients :- "<<obj.ingredient;
	cout<<"\nCost of labour :- "<<obj.labour;
	cout<<"\nNumber of days :- "<<obj.days;
	cout<<"\nCost of rental of equipment :- "<<obj.rental;
	cout<<"\nTotal cost of Production accessing friend function defined outside class :- "<<obj.ingredient+(obj.labour*obj.days)+obj.rental<<endl;
}

int main()
{
	CostProd temp;
	temp.indata();
	cout<<"\nCost of Production accessing function defined outside class :- "<<temp.costcal()<<endl;
	costprod(temp);
	return 0;	
}

