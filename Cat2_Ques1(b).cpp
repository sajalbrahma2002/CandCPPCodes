//1b - using static data members and member functions to predict the stocks exchange
//SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Stock
{
	static float tcs;
	static float wipro;
	static float rolex;
	float tcsprice,wiproprice,rolexprice;
	public:
		void indata()
		{
			cout<<"\nEnter previous week TCS Stock Price :- ";
			cin>>tcs;
			cout<<"\nEnter previous week WIPRO Stock Price :- ";
			cin>>wipro;
			cout<<"\nEnter previous week ROLEX Stock Price :- ";
			cin>>rolex;
		}
		
		void calculate()
		{
			tcsprice=1.1*tcs;
			tcsprice=1.01*tcsprice;
			cout<<"\nPredicted TCS Stock Price :- "<<tcsprice<<endl;
			wiproprice=1.2*wipro;
			wiproprice=1.01*wiproprice;
			cout<<"\nPredicted WIPRO Stock Price :- "<<wiproprice<<endl;
			rolexprice=0.88*rolex;
			rolexprice=1.01*rolexprice;
			cout<<"\nPredicted ROLEX Stock Price :- "<<rolexprice<<endl;
		}
};

float Stock::tcs=0;
float Stock::wipro=0;
float Stock::rolex=0;

int main()
{
	Stock obj;
	obj.indata();
	obj.calculate();
	return 0;
}
