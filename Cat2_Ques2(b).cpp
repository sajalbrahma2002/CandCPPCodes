//2b Accessing Private & Public data members & member functions using multilevel inheritance
//SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

//class Floor1 to save details of purchase in Floor1 and a base class for class Floor2
class Floor1
{
	//item names as data members and are privately declared
	float phone,laptop,headphones;
	public:
		//public member function setdata1 to set value of private datamembers of class Floor1
		void setdata1(float ph1,float lp1,float hp1)
		{
			phone=ph1;
			laptop=lp1;
			headphones=hp1;
		}
		
		//public member function costcal1 to calculate and display total purchase in Floor1
	    void costcal1()
	    {
		    cout<<"\nThe Cost of purchase in Floor 1 is :- "<<phone+laptop+headphones<<endl;
	    }
		
		//public member function Total1 to return total purchase in Floor1	
	    float Total1()
     	{
		    return phone+laptop+headphones;
	    }
};

//class Floor2 to save details of purchase in Floor2 and a base class for class Floor3 and a derived class for class Floor1
class Floor2 : public Floor1
{
	//item names as data members and are privately declared
	float shirt,pant,shoes;
	public:
		//public member function setdata2 to set value of private datamembers of class Floor2 
		void setdata2(float ph2,float lp2,float hp2,float st1,float pt1,float sh1)
		{
			shirt=st1;
			pant=pt1;
			shoes=sh1;
			//calling baseclass public member function setdata1 to pass values to class Floor1 and save values to private variables of class Floor1
			setdata1(ph2,lp2,hp2);
		}
		
		//public member function costcal2 to calculate and display total purchase in Floor2
		void costcal2()
		{
			//calling baseclass public member function costcal1 to calculate and display cost purchase in Floor1
			costcal1();
			cout<<"\nThe Cost of purchase in Floor 2 is :- "<<shirt+pant+shoes<<endl;
		}
		
		//public member function Total2 to return total purchase in Floor2
		float Total2()
		{
			return shirt+pant+shoes;
		}
};

//class Floor3 to save details of purchase in Floor3 and a derived class for class Floor2
class Floor3 : public Floor2
{
	//item names as data members and are privately declared
	float rice,wheat,flour;
	public:
		//public member function setdata3 to set value of private datamembers of class Floor3 
		void setdata3(float ph3,float lp3,float hp3,float st2,float pt2,float sh2,float r1,float w1,float f1)
		{
			rice=r1;
			wheat=w1;
			flour=f1;
			//calling baseclass public member function setdata2 to pass values to class Floor2 and save values to private variables of class Floor2
			setdata2(ph3,lp3,hp3,st2,pt2,sh2);
		}
		
		//public member function costcal3 to calculate and display total purchase in Floor3
		void costcal3()
		{
			//calling baseclass public member function costcal2 to calculate and display cost purchase in Floor2
			costcal2();
			cout<<"\nThe Cost of purchase in Floor 3 is :- "<<rice+wheat+flour<<endl;			
	    }
	    
	    //public member function total3 to return total purchase in Floor3
	    float Total3()
	    {
	    	return rice+wheat+flour;
		}
};

int main()
{
	//declaring an object obj of type class Floor3 
	Floor3 obj;
	//declaring varaibles to input item prices
	float ph,lp,hp,st,pt,sh,w,r,f;
	
	//Input prices of items in floor 1
	cout<<"\nEnter product prices for Floor 1 (Electronics) :- "<<endl;
	cout<<"\nEnter price of mobile phone :- ";
	cin>>ph;
	cout<<"\nEnter price of laptop :- ";
	cin>>lp;
	cout<<"\nEnter price of headphone :- ";
	cin>>hp;
	
	//Input prices of items in floor 2
	cout<<"\nEnter product prices for Floor 2 (Garments) :- "<<endl;
	cout<<"\nEnter price of shirt :- ";
	cin>>st;
	cout<<"\nEnter price of pant :- ";
	cin>>pt;
	cout<<"\nEnter price of shoes :- ";
	cin>>sh;
	
	//Input prices of items in floor 3
	cout<<"\nEnter product prices for Floor 3 (Eatables) :- "<<endl;
	cout<<"\nEnter price of rice :- ";
	cin>>r;
	cout<<"\nEnter price of wheat :- ";
	cin>>w;
	cout<<"\nEnter price of flour :- ";
	cin>>f;
	
	//calling publlic member function of class Floor3 to save values to variables of classes Floor1 , Floor2 & Floor3
	obj.setdata3(ph,lp,hp,st,pt,sh,r,w,f);
	
	//calling publlic member function of class Floor3 to display cost of purchase in Floor1 , Floor2 & Floor3
	obj.costcal3();
	
	//calling public member fucntion of all 3 classes to calculate total purchase and display total purchase
	cout<<"\nTotal purchase is :- "<<obj.Total1()+obj.Total2()+obj.Total3()<<endl;
	return 0;
	
}
