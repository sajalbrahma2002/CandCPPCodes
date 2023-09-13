// Ques 12 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

template<class T>
class GenCalculator
{
	T num1,num2;
	public:
		GenCalculator(T a,T b)
		{
			num1=a;
			num2=b;
		}
		
		T add()
		{
			return num1+num2;
		}
		
		T subtract()
		{
			if(num1>=num2)
			return num1-num2;
			else
			return num2-num1;
		}
		
		T product()
		{
			return num1*num2;
		}
		
		T divide()
		{
			return num1/num2;
		}
};

int main()
{
	int x1,y1;
	cout<<"Enter value of x :- ";
	cin>>x1;
	cout<<"\nEnter value of y :- ";
	cin>>y1;
	GenCalculator<int>obj1(x1,y1);
	cout<<"Addition :- "<<obj1.add()<<endl;
    cout<<"Subtraction :- "<<obj1.subtract()<<endl;
    cout<<"Multiplication :- "<<obj1.product()<<endl;
    cout<<"Division :- "<<obj1.divide()<<endl;
    
	float x2,y2;
	cout<<"Enter value of x :- ";
	cin>>x2;
	cout<<"\nEnter value of y :- ";
	cin>>y2;
	GenCalculator<float>obj2(x2,y2);
	cout<<"Addition :- "<<obj2.add()<<endl;
    cout<<"Subtraction :- "<<obj2.subtract()<<endl;
    cout<<"Multiplication :- "<<obj2.product()<<endl;
    cout<<"Division :- "<<obj2.divide()<<endl;
    
	double x3,y3;
	cout<<"Enter value of x :- ";
	cin>>x3;
	cout<<"\nEnter value of y :- ";
	cin>>y3;
	GenCalculator<double>obj3(x3,y3);
	cout<<"Addition :- "<<obj3.add()<<endl;
    cout<<"Subtraction :- "<<obj3.subtract()<<endl;
    cout<<"Multiplication :- "<<obj3.product()<<endl;
    cout<<"Division :- "<<obj3.divide()<<endl;
    return 0;
}
