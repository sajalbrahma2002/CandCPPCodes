//3a Classes in CPP - Arithmetic operation on N polynomials
//SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Calculate
{
	int a[10],b[10],c[10];
	int sum1,sum2,sum3,diff1,diff2,diff3;
	public:
		void indata(int num)
		{
			cout<<"\nEnter the cofficient a,b,c of polynomial of form ax^2+bx+c :- "<<endl;
			for(int i=0;i<num;i++)
			{
				cout<<"\nEnter cofficient a of polynomial "<<i+1<<" :- ";
				cin>>a[i];
		        cout<<"\nEnter cofficient b of polynomial "<<i+1<<" :- ";
		        cin>>b[i];
		        cout<<"\nEnter cofficient c of polynomial "<<i+1<<" :- ";
		        cin>>c[i];
			}
		}
		void calculate(int num1)
		{
			sum1=0;
			sum2=0;
			sum3=0;
			diff1=a[0];
			diff2=b[0];
			diff3=c[0];
			for(int j=0;j<num1;j++)
			{
				sum1=sum1+a[j];
				sum2=sum2+b[j];
			    sum3=sum3+c[j];	
			}
			cout<<"\nThe Final Polynomial after adding "<<num1<<" polynomial is :- ("<<sum1<<") x^2 + ("<<sum2<<") + ("<<sum3<<")"<<endl;
			for(int k=1;k<num1;k++)
			{
				diff1=diff1-a[k];
				diff2=diff2-b[k];
				diff3=diff3-c[k];
			}
			cout<<"\nThe Final Polynomial after difference "<<num1<<" polynomial is :- ("<<diff1<<") x^2 + ("<<diff2<<") x + ("<<diff3<<")"<<endl;
		}
};

int main()
{
	int n;
	Calculate obj;
	cout<<"\nEnter the number of polynomials to be used for arithmetic operation :- ";
	cin>>n;
	obj.indata(n);
	obj.calculate(n);
	return 0;
}
