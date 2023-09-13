// C++ - Final Assesment Test
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;


// Base class A to save details of player A
class A
{
	int R1,W1,C1;
	public:
		void indata_A()
		{
			cout<<"\nEnter the Runs scored by Player A :- ";
			cin>>R1;
			cout<<"\nEnter the Wickets taken by Player A :- ";
			cin>>W1;
			cout<<"\nEnter the Catches taken by Player A :- ";
			cin>>C1;
		}
		
		int Run1()
		{
			return R1;
		}
		
		int Wicket1()
		{
			return W1;
		}
		
		int Catch1()
		{
			return C1;
		}
};

// Base class B to save details of player B			
class B
{
	int R2,W2,C2;
	public:
		void indata_B()
		{
			cout<<"\nEnter the Runs scored by Player B :- ";
			cin>>R2;
			cout<<"\nEnter the Wickets taken by Player B :- ";
			cin>>W2;
			cout<<"\nEnter the Catches taken by Player B :- ";
			cin>>C2;
		}
		
		int Run2()
		{
			return R2;
		}
		
		int Wicket2()
		{
			return W2;
		}
		
		int Catch2()
		{
			return C2;
		}
};


// Derive class Compare inherting class A and B publicly to compare their stats		
class Compare : public A , public B
{
	public:
		void Comparision()
		{
			if(Run1()>Run2() && Wicket1()>Wicket2() && Catch1()>Catch2())
			{
				cout<<"\n A is better player than B in all fields.";
				cout<<"\n Runs A :- "<<Run1()<<"       Runs B :- "<<Run2();
				cout<<"\n Wickets A :- "<<Wicket1()<<"       Wickets B :- "<<Wicket2();
				cout<<"\n Catches A :- "<<Catch1()<<"       Catches B :- "<<Catch2();
			}
			else if(Run2()>Run1() && Wicket2()>Wicket1() && Catch2()>Catch1())
			{
				cout<<"\n B is better player than A in all fields.";
				cout<<"\n Runs A :- "<<Run1()<<"       Runs B :- "<<Run2();
				cout<<"\n Wickets A :- "<<Wicket1()<<"       Wickets B :- "<<Wicket2();
				cout<<"\n Catches A :- "<<Catch1()<<"       Catches B :- "<<Catch2();
			}
			else if( (Run1()>Run2() && Wicket1()>Wicket2()) || (Run1()>Run2() && Catch1()>Catch2()) || (Wicket1()>Wicket2() && Catch1()>Catch2()) )
			{
				cout<<"\n A is better player than B in two out of three feilds.";
				cout<<"\n Runs A :- "<<Run1()<<"       Runs B :- "<<Run2();
				cout<<"\n Wickets A :- "<<Wicket1()<<"       Wickets B :- "<<Wicket2();
				cout<<"\n Catches A :- "<<Catch1()<<"       Catches B :- "<<Catch2();
			}
			
			else if( (Run2()>Run1() && Wicket2()>Wicket1()) || (Run2()>Run1() && Catch2()>Catch1()) || (Wicket2()>Wicket1() && Catch2()>Catch1()))
			{
				cout<<"\n B is better player than A in two out of three feilds.";
				cout<<"\n Runs A :- "<<Run1()<<"       Runs B :- "<<Run2();
				cout<<"\n Wickets A :- "<<Wicket1()<<"       Wickets B :- "<<Wicket2();
				cout<<"\n Catches A :- "<<Catch1()<<"       Catches B :- "<<Catch2();
			}
			else 
			{
				cout<<"\n Both are Equal players ";
				cout<<"\n Runs A :- "<<Run1()<<"       Runs B :- "<<Run2();
				cout<<"\n Wickets A :- "<<Wicket1()<<"       Wickets B :- "<<Wicket2();
				cout<<"\n Catches A :- "<<Catch1()<<"       Catches B :- "<<Catch2();
			}			
		}
};

int main()
{
	Compare obj;
	obj.indata_A();
	obj.indata_B();
	obj.Comparision();
	return 0;
}
