//2A Define varaibles and initialize the varibles and perform the following operations  
// A. Same values of variable inside(main) and outside(local) functions(call by reference)
// B. Different values of variables inside(main) and outside(local) functions (call by reference)

#include<stdio.h>
void call_val(int a,int b);         // function prototyping
void call_ref(int *x,int *y);       // function prototyping
int main()
{
	int num1,num2;
	printf("\nEnter number 1 :- ");
	scanf("%d",&num1);
	printf("\nEnter number 2 :- ");
	scanf("%d",&num2);
	printf("\n\nNumbers before swaping :- Num 1 - %d , Num 2 - %d",num1,num2);
	//passing value as argument
	call_val(num1,num2);
	printf("\nNumbers after swaping(call by value) in main function :- Num 1 - %d , Num 2 - %d",num1,num2);
	//passing the address of the variable
	call_ref(&num1,&num2);   
	printf("\nNumbers after swaping(call by reference) :- Num 1 - %d , Num 2 - %d",num1,num2);
	return 0;
}

// call by value(value)
void call_val(int a,int b)
{
	int value;
	value=a;
	a=b;
	b=value;
	printf("\n\nNumbers after swaping by call by value inside a local function :- Num 1 - %d ,Num 2 - %d",a,b);
}

//call by reference(address)
void call_ref(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("\n\nNumbers after swaping by call by value inside a local function :- Num 1 - %d ,Num 2 - %d",*x,*y);
}


