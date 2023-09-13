//1c - Calculate attacks using static data members and member functions 
//SAJAL BRAHMA - 21BPS1045

#include <iostream>
using namespace std;
class Mcaffee
{
    static int firewall;
    static int detection;
    static int software;
    static int intrusion;
    static int testcase;
    static int vulnerability;
    public:
        static int HRdept()
        {  
           int total1;
           cout<<"\nEnter number of firewall bypassed attacks :- ";
           cin>>firewall;
           cout<<"\nEnter number of detection bypassed attacks :- ";
           cin>>detection;
           total1=firewall+detection+100;
           cout<<"\nTotal number of attacks to HR Department is : "<<total1<<endl;
        }
        
		static int tech()
        {
           int total2;
           cout<<"\nEnter number of software bypassed attacks :-";
           cin>>software;
           cout<<"\nEnter number of intrusion bypassed attacks :- ";
           cin>>intrusion;
           total2=software+intrusion+100;
           cout<<"\nTotal number of attacks to Tech Department = "<<total2<<endl;
        }

        static int testing()
        {
           int total3;
           cout<<"\nEnter number of testcase bypassed attacks :- ";
           cin>>testcase;
           cout<<"\nEnter number of vulnerabilities bypassed attack :- ";
           cin>>vulnerability;
           total3=testcase+vulnerability+100;
           cout<<"\nTotal number of attacks to testing department = "<<total3<<"\n";
        }
};

int Mcaffee::firewall=0;
int Mcaffee::detection=0;
int Mcaffee::software=0;
int Mcaffee::intrusion=0;
int Mcaffee::testcase=0;
int Mcaffee::vulnerability=0;

int main()
{
	Mcaffee obj;
	obj.HRdept();
	obj.tech();
	obj.testing();
	return 0;
}
