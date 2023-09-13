// Multilevel Inheritance - Public Inheritance
// Multilevel Inheritance - In CPP a class not only can derive a class from a base class but also derive a class from the derived class 
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

// class 1
// class Electronics to save details of purchase in Electronics Store and a base class for class Garment
class Electronics
{
	//item names as data members and are privately declared
	float phone,laptop,headphones;
	public:
		//public member function setdata1 to set value of private datamembers of class Electronics
		void setdata1(float ph1,float lp1,float hp1)
		{
			phone=ph1;
			laptop=lp1;
			headphones=hp1;
		}
		
		//public member function costcal1 to calculate and display total purchase in Electronic Store
	    void costcal1()
	    {
		    cout<<"\nThe Cost of purchase in Electronic Store is :- "<<phone+laptop+headphones<<endl;
	    }
		
		//public member function Total1 to return total purchase in Electronics Store	
	    float Total1()
     	{
		    return phone+laptop+headphones;
	    }
};

// class 2
// class Garment to save details of purchase in Garment Store and a base class for class Food and a derived class for class Electronics
class Garment : public Electronics
{
	//item names as data members and are privately declared
	float shirt,pant,shoes;
	public:
		//public member function setdata2 to set value of private datamembers of class Garment
		void setdata2(float ph2,float lp2,float hp2,float st1,float pt1,float sh1)
		{
			shirt=st1;
			pant=pt1;
			shoes=sh1;
			//calling baseclass public member function setdata1 to pass values to class Electronics and save values to private variables of class Electronics
			setdata1(ph2,lp2,hp2);
		}
		
		//public member function costcal2 to calculate and display total purchase in Garment Store
		void costcal2()
		{
			//calling baseclass public member function costcal1 to calculate and display cost purchase in Electronic Store
			costcal1();
			cout<<"\nThe Cost of purchase in Garment Store is :- "<<shirt+pant+shoes<<endl;
		}
		
		//public member function Total2 to return total purchase in Garment Store
		float Total2()
		{
			return shirt+pant+shoes;
		}
};

// class 3
// class Provision to save details of purchase in Provision Store and a derived class for class Garment and is base class of class Stationary
class Provision : public Garment
{
	//item names as data members and are privately declared
	float rice,wheat,flour;
	public:
		//public member function setdata3 to set value of private datamembers of class Provision
		void setdata3(float ph3,float lp3,float hp3,float st2,float pt2,float sh2,float r1,float w1,float f1)
		{
			rice=r1;
			wheat=w1;
			flour=f1;
			//calling baseclass public member function setdata2 to pass values to class Garment and save values to private variables of class Garment
			setdata2(ph3,lp3,hp3,st2,pt2,sh2);
		}
		
		//public member function costcal3 to calculate and display total purchase in Provision Store
		void costcal3()
		{
			//calling baseclass public member function costcal2 to calculate and display cost purchase in Garment Store
			costcal2();
			cout<<"\nThe Cost of purchase in Provision Store is :- "<<rice+wheat+flour<<endl;			
	    }
	    
	    //public member function Total3 to return total purchase in Provision Store
	    float Total3()
	    {
	    	return rice+wheat+flour;
		}
};

// class 4s
// class Stationary to save details of purchase in Stationary Store and a derived class for class Provison and base class of Skincare
class Stationary : public Provision
{
	//item names as data members and are privately declared 
	float pencil,pen,colours;
	public:
		//public member function setdata4 to set value of private datamembers of class Stationary
		void setdata4(float ph4,float lp4,float hp4,float st3,float pt3,float sh3,float r2,float w2,float f2,float pc1,float pn1,float cl1)
		{
			pencil=pc1;
			pen=pn1;
			colours=cl1;
			//calling baseclass public member function setdata3 to pass values to class Provision and save values to private variables of class Provision
			setdata3(ph4,lp4,hp4,st3,pt3,sh3,r2,w2,f2);
		}
		
		//public memeber function costcal4 to calculate and display total purchase in Stationary Store
		void costcal4()
		{
			//calling baseclass public member function costcal3 to calculate and display cost purchase in Provision Store
			costcal3();
			cout<<"\nThe Cost Of Purchase in Stationary Shop is :- "<<pencil+pen+colours<<endl;
	    } 
	    
	    //public member function Total4 to return total purchase in Stationary Store
	    float Total4()
	    {
	    	return pencil+pen+colours;
		}
};

// class 5
// class Skincare to save details of purchase in Stationary Store and a derived class for class Stationary  
class Skincare : public Stationary
{
	float shampoo,conditioner,hairoil;
	public:
		//public member function setdat4 to set value of private datamembers of class Skincare
		void setdata5(float ph5,float lp5,float hp5,float st4,float pt4,float sh4,float r3,float w3,float f3,float pc2,float pn2,float cl2,float sp1,float co1,float ho1)
		{
			shampoo=sp1;
			conditioner=co1;
			hairoil=ho1;
			//calling baseclass public member function setdat4 to pass value to class Stationary and save values to private variables of class Stationary
			setdata4(ph5,lp5,hp5,st4,pt4,sh4,r3,w3,f3,pc2,pn2,cl2);
		}
		
		//public member function costcal5 to calculate and display total purchase in Skincare Store
		void costcal5()
		{
			//calling baseclass public member function costcal4 to calculate and display cost purchase in Stationary Store
			costcal4();
			cout<<"\nThe Cost of Purchase In Skincare Store is :- "<<shampoo+conditioner+hairoil<<endl;
		}
		
		//public member function Total5 to return total purchase in Skincare Store
		float Total5()
		{
			return shampoo+conditioner+hairoil;
		}
};

int main()
{
	//declaring an object obj of type class Skincare
	Skincare obj;
	//declaring varaibles to input item prices
	float ph,lp,hp,st,pt,sh,w,r,f,pc,pn,cl,sp,co,ho;
	
	//Input prices of items in Electronics Store
	cout<<"\nEnter product prices for Electronics :- "<<endl;
	cout<<"\nEnter price of mobile phone :- ";
	cin>>ph;
	cout<<"\nEnter price of laptop :- ";
	cin>>lp;
	cout<<"\nEnter price of headphone :- ";
	cin>>hp;
	
	//Input prices of items in Garment Store
	cout<<"\nEnter product prices for Garments :- "<<endl;
	cout<<"\nEnter price of shirt :- ";
	cin>>st;
	cout<<"\nEnter price of pant :- ";
	cin>>pt;
	cout<<"\nEnter price of shoes :- ";
	cin>>sh;
	
	//Input prices of items in Provision Store
	cout<<"\nEnter product prices for Provisions :- "<<endl;
	cout<<"\nEnter price of rice :- ";
	cin>>r;
	cout<<"\nEnter price of wheat :- ";
	cin>>w;
	cout<<"\nEnter price of flour :- ";
	cin>>f;
	
	//Input prices of items in Stationary Store
	cout<<"\nEnter product prices for Stationaries :- "<<endl;
	cout<<"\nEnter price of pencil :- ";
	cin>>pc;
	cout<<"\nEnter price of pen :- ";
	cin>>pn;
	cout<<"\nEnter price of colour :- ";
	cin>>cl;
	
	//Input prices of items in Skincare
	cout<<"\nEnter product prices for Skincare :- "<<endl;
	cout<<"\nEnter price of shampoo :- ";
	cin>>sp;
	cout<<"\nEnter price of conditioner :- ";
	cin>>co;
	cout<<"\nEnter price of hair oil :- ";
	cin>>ho;
	
	//calling publlic member function of class Skincare to save values to variables of classes Electronics,Garment,Provision,Stationary & Skincare
	obj.setdata5(ph,lp,hp,st,pt,sh,r,w,f,pc,pn,cl,sp,co,ho);
	
	//calling publlic member function of class Skincare to display cost of purchase in Electronics,Garment,Provision,Stationary & Skincare
	obj.costcal5();
	
	//calling public member fucntion of all 5 classes to calculate total purchase and display total purchase
	cout<<"\nTotal purchase is :- "<<obj.Total1()+obj.Total2()+obj.Total3()+obj.Total4()+obj.Total5()<<endl;
	return 0;
	
}
