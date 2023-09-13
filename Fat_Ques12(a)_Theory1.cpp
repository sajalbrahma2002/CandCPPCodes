// Ques 12(a) - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<iostream>
using namespace std;
#include<cstring>

template<class T>
int search(T *a,int x,T y)
{
	int z;
	for(int i=0;i<x;i++)
	{
		if(*a==y)
		{
			z=i;
		}
		a++;
	}
	return z;	
}

int main()
{
	int array1[10],num1,k1;
	cout<<"Enter the number of elements to be entered in array [max 10] :- ";
	cin>>num1;
	for(int i=0;i<num1;i++)
	{
		cin>>array1[i];
	}
	cout<<"\nEnter the element to be searched in the array :- ";
	cin>>k1;
	int p = search(array1,num1,k1);
	cout<<"\nThe index of the searched element is :- "<<p;
	int num2;
	char k2,array2[10];
	cout<<"\nEnter the number of elements to be entered in array [max 10] :- ";
	cin>>num2;
	for(int i=0;i<num2;i++)
	{
		cin>>array2[i];
	}
	cout<<"\nEnter the element to be searched in the array :- ";
	cin>>k2;
	int q = search(array2,num2,k2);
	cout<<"\nThe index of the searched element is :- "<<q;
	return 0;
}

// Ans : 5 , 2 4 5 6 7 , 5 -> 2 // 8 , a s d f g h j k ,g -> 4 
