// Ques 9 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string author[5]={"ABC","JKL","PQR","STU","XYZ"};
	string title[5]={"abc","jkl","pqr","stu","xyz"};
	int price[5]={200,150,300,250,170};
	string publisher[5]={"aa","bb","cc","dd","ee"};
	int stock[5]={5,6,9,4,7};
	string titles ,authors;
	cout<<"Enter Book Title :- ";
	cin>>titles;
	cout<<"\nEnter Book Author :- ";
	cin>>authors;
	int num,temp=0;
	for(int i=0;i<5;i++)
	{
		if(author[i]==authors && title[i]==titles)
		{
			temp=1;
			cout<<"\nBook Available "<<endl;
			cout<<"Author :- "<<author[i]<<endl;
			cout<<"Title :- "<<title[i]<<endl;
			cout<<"Publisher :- "<<publisher[i]<<endl;
			cout<<"Price :- "<<price[i]<<endl;
			cout<<"Stock :- "<<stock[i]<<endl;
			cout<<"\nEnter the number of book coopies to be required :- ";
			cin>>num;
			if(num>stock[i])
			{
				cout<<"\nRequired No of stocks not available in stock !";
			}
			else
			{
				cout<<"Total Cost :- "<<num*price[i]<<endl;
			}
		}
	}
	if(temp==0)
	{
		cout<<"\nBook Not Available !";
	}
	return 0;
}
