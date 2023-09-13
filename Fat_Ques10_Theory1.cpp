// Ques 10 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Game
{
	public:
		int score;
};

class Game1 : public Game
{
	public:
		void indata1()
		{
			cout<<"\nEnter Score scored in Game 1 :- ";
			cin>>score;
		}
		
		int score1()
		{
			return score;
		}		
};

class Game2 : public Game
{
	public:
		void indata2()
		{
			cout<<"\nEnter Score scored in Game 2 :- ";
			cin>>score;
		}
		
		int score2()
		{
			return score;
		}
};

int main()
{
	Game1 obj1;
	Game2 obj2;
	int num,ch;
	cout<<"Enter the number of times the game to be played :- ";
	cin>>num;
	int id[num],i=0,total=0,total1=0,total2=0,credits=0;
	int temp=num;
	while(num!=0)
	{
		cout<<"\nPress 1 for Game 1 and 2 for Game 2 :- ";
		cin>>ch;
		if(ch==1)
		{
			id[0]=(i*100)+(22*i);
			obj1.indata1();
			total1=total1+obj1.score1();
		}
		else if(ch==2)
		{
			id[0]=(i*100)+(22*i);
			obj2.indata2();
			total2=total2+obj2.score2();
		}
		else
		{
			cout<<"\nEnter Appropiate choice !";
		}
		num--;
	}
	total=total1+total2;
	cout<<"\nTotal Points Scored :- "<<total;
	// Checking total scored just in  game 2 and adding 1 credit if total>=100
	if(total2>=100)
	{
		credits=credits+1;
	}
	if(total<100)
	{
		credits-credits+1;
	}
	else if(total>=100 && total<150)
	{
		credits=credits+2;
	}
	else if(total>=150 && total<200)
	{
		credits=credits+3;
	}
	else if(total>=200 && total<250)
	{
		credits=credits+4;
	}
	else 
	{
		cout<<"\nInappropiate Score !";
	}
	cout<<"\nTotal Credits :- "<<credits;

	return 0;
}
