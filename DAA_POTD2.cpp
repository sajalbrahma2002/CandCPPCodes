// Problem of the Day 
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

int main()
{
    int x,temp=0;
    cout<<"Enter the seat number :- ";
    cin>>x;
    
    //For green
    if(x%6==0 || x%6==1)
    {
        if((x%6)==0)                         // for 6,12,18....
        {
            temp=x/6;
            if(temp%2==0)                    // for 12,24,36....
            cout<<"Opposite Seat :- "<<x-11<<endl;
            else                             // for 06,18,30....
            cout<<"Opposite Seat :- "<<x+1<<endl;
        }
        else                                 // for 01,07,13....
        {
            temp=(x-1)/6;
            if(temp%2==0)                    // for 01,13,25....
            cout<<"Opposite Seat :- "<<x+11<<endl;
            else                             // for 07,19,31....
            cout<<"Opposite Seat :- "<<x-1<<endl;
        }
        cout<<"Colour of the seat :- Green";
    }
    
    // For Orange                            // for 02,05,08....
    else if(x%3==2)                          
    {
        if(x%2==0)                           // for 02,08,14....
        {
            temp=(x-2)/3;
            if(temp%6==0)
            cout<<"Opposite Seat :- "<<x+9<<endl;
            else
            cout<<"Opposite Seat :- "<<x-3<<endl;
        }
        else                                 // for 05,11,17....
        {
            temp=(x+1)/6;
            if(temp%2==0)
            cout<<"Opposite Seat :- "<<x-9<<endl;
            else
            cout<<"Opposite Seat :- "<<x+3<<endl;
        }
        cout<<"Colour of the seat :- Orange";
    }
    
    // For Blue                               // for 03,04,09....
    else
    {
        if(x%2==0)
        {
            temp=x/2;
            if(temp%2==0)
            cout<<"Opposite Seat :- "<<x+5<<endl;
            else
            cout<<"Opposite Seat :- "<<x-7<<endl;
        }
        else
        {
            temp=(x+1)/2;
            if(temp%2==0)
            cout<<"Opposite Seat :- "<<x+7<<endl;
            else
            cout<<"Opposite Seat :- "<<x-5<<endl;
        }
        cout<<"Colour of the seat :- Blue";
    }
    return 0;
}
