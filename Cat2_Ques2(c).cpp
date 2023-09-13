//2c - Access Public and Private data members and member function in derived class
//SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Holidays
{
	int t_days,govt_hdays,university_hdays,unexpected_hdays;
	public:
		void indata()
		{
			cout<<"\nEnter the total numbers of days in a year :- ";
			cin>>t_days;
			cout<<"\nEnter number of government announced holidays :- ";
			cin>>govt_hdays;
			cout<<"\nEnter number of university announced holidays :- ";
			cin>>university_hdays;
			cout<<"\nEnter number of unexpected holidays :- ";
			cin>>unexpected_hdays;
		}
		int display()
		{
			return t_days-govt_hdays-university_hdays-unexpected_hdays;
		}
};

class Workingdays : public Holidays
{
	public:
		void Displaydays()
		{
			int w_days;
			indata();
			w_days=display();
			cout<<"\nThe Total Working Days :- "<<w_days<<endl;
		}
};

int main()
{
	Workingdays obj;
	obj.Displaydays();
	return 0;
}
