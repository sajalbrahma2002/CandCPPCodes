// Ques 4 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;

class Cuboid
{
	int length,breadth,height;
	public:
		Cuboid()
		{
			length=0;
			breadth=0;
			height=0;
		}
		
		void indata(int a,int b)
		{
			length=a;
			breadth=a;
			height=b;
		}
		
		void indata(int x,int y,int z)
		{
			length=x;
			breadth=y;
			height=z;
		}
		
		void volume()
		{
			cout<<"Volume : "<<length*breadth*height<<endl;
		}
};

int main()
{
	Cuboid obj1,obj2,obj3;
	obj1.volume();
	obj2.indata(5,6);
	obj2.volume();
	obj3.indata(4,5,6);
	obj3.volume();
	return 0;
}
// Ans : 0 150 120
