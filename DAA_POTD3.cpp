// Problem of the Day
// SAJAL BRAHMA - 21BPS1045
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of books to be shifted :- ";
    cin>>num;
    int ramu=0,somu=0;
    int flag;
    int i=1;
    while(num!=0)
    {
        //for odd trip
        if(i%2!=0)
        {
            //checking for ramu first
            if(i<=num)
            {
               ramu=ramu+i;
               num=num-i;
               
               //checking for somu
               if((2*i)<=num)
               {
                    somu=somu+(2*i);
                    num=num-(2*i);
               }
               else
               {
                   somu=somu+num;
                   num=0;
                   flag=1;
               }
            }
            else
            {
                ramu=ramu+num;
                num=0;
                flag=0;
            }
        }
        
        // for even trip
        else
        {
            //checking for ramu first
            if((2*i)<=num)
            {
               ramu=ramu+(2*i);
               num=num-(2*i);
  
               //checking for somu
               if(i<=num)
               {
                    somu=somu+i;
                    num=num-i;
               }
               else
               {
                   somu=somu+num;
                   num=0;
                   flag=1;
               }
            }
            else
            {
                ramu=ramu+num;
                num=0;
                flag=0;
            }
        }
        i=i+1;
    }
    cout<<"Total trips :- "<<i-1<<endl;
    cout<<"Books shifted by Ramu :- "<<ramu<<endl;
	cout<<"Books shifted by Somu :- "<<somu<<endl;
    if(flag==0)
       cout<<"Last Books shifted by Ramu";
    else
       cout<<"Last Books shifted by Somu";
    return 0;
}
