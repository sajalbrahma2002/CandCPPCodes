#include<iostream>
#include<fstream>
#include<string>
using namespace std;

string user_id,user_pass;

//read existing user details from user.txt and match will user details if verified proceed furthur
void existing_user()
{
	cout<<"Enter User Id: ";
	cin>>user_id;
	cout<<"Enter User password : ";
	cin>>user_pass;
}

void new_user()
{
	cout<<"Enter User Id: ";
	cin>>user_id;
	cout<<"Enter User password : ";
	cin>>user_pass;
}

//login as admin with id and password and verify with the file for success
void admin_login()
{
	string admin_id,admin_pass;
	bool found = false;
	cout<<"Enter Admin Id: ";
	cin>>admin_id;
	cout<<"Enter Admin Password : ";
	cin>>admin_pass;
	ifstream f1("admin.txt");
	if(f1.is_open())
	{
		string line;
		while(getline(f1,line))
		{
			size_t pos = line.find(':');
			string fileusername = line.substr(0,pos);
			string filepassword = line.substr(pos+1);
			if( fileusername == user_id && filepassword == user_pass)
			{
				found = true;
				break;
			}
		}
	}
	f1.close();
	if(found)
	{
		cout<<"\nAdmin Login Successful.";
	}
	else
	{
		cout<<"\nInvalid User ID or Password.";
	}	
}

void user_login()
{
	int ch3,ch4=0;
	do
	{
	    cout<<"1. Existing User.\n";
	    cout<<"2. New User.\n";
	    cout<<"Enter your choice (1/2) : ";
	    cin>>ch3;
	    switch(ch3)
	    { 
		    case 1: existing_user();
		            ch4=0;
		            break;
		    case 2: new_user();
		            ch4=0;
		            break;
		    default:cout<<"\nInvalid Choice!";
		            ch4=0;
		            break;
	    }
	    if(ch3!=1 && ch3!=2)
	    {
	        cout<<"\nWant to log in again : (Yes ->1/ No -> 0) : ";
	        cin>>ch4;
	    }
    }while(ch4==1);
}

int main()
{
	int ch1,ch2=0;
	do
	{
	    cout<<"1. Login as Admin\n";
	    cout<<"2. Login as user.\n";
	    cout<<"Enter your choice (1/2) : ";
	    cin>>ch1;
	    switch(ch1)
	    {
		    case 1: admin_login();
		            ch2=0;
		            break;
		    case 2: user_login();
		            ch2=0;
		            break;
		    default:cout<<"Invalid choice";
		            ch2=0;
		            break;
	    } 
		if(ch1 != 1 && ch1 != 2) 
		{
	        cout<<"\nWant to login again!(Yes ->1/ No ->0 ): ";
	        cin>>ch2;
	    }
	}while(ch2==1);
	cout<<"\nThank you for using the app!";
	return 0;
}
