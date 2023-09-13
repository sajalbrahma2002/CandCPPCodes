//1A. Accomplish the following tasks using a C program
// A. Calculate no of days/months/years taken to join VIT
// B. Check id birth year or joining year is a leap year
// C. Check if age >=19 and born in leap yearPrint given statement 1 else print statement 2 
#include<stdio.h>

int main()
{
	//difference between joining and birth date
	int bdate,bmonth,byear,jdate,jmonth,jyear,fdate,fmonth,fyear,temp=0;
	printf("\n Enter your Date of Birth (dd-mm-yyyy) :- ");
	scanf("%d-%d-%d",&bdate,&bmonth,&byear);
	printf("\n Enter the day you joined Vit(dd-mm-yyyy) :-");
	scanf("%d-%d-%d",&jdate,&jmonth,&jyear);
	//checking for if birth date is greater than joining date
	if(bdate>jdate)
	{
		//adding days for febrary
		if(jmonth==3)
		{
			//leap year is divisible by 400 but not 100
			if((jyear%4==0)&&(jyear%100!=0||jyear%400==0))
			{
				//adding 29 days to joining date for february in leap year
				jdate=jdate+29;    
			}
			else
			{
			    //adding 28 days to joining date for february not in leap year
				jdate=jdate+28;	
			}
		}
		//checking for months with 30 days and adding it to joining date
		else if(jmonth==4||jmonth==6||jmonth==8||jmonth==10||jmonth==12)
		{
			//adding 30 days to joining date
			jdate=jdate+30;
		}
		//checking for months with 31 days and adding it to joining date
		else
		{
			//addibg 31 days to joining date
			jdate=jdate+31;
		}
		jmonth=jmonth-1;
		
	}
	//checking for if birth month id greater than joining month
	if(bmonth>jmonth)
	{
		jmonth=jmonth+12;
		jyear=jyear-1;
	}
	//if joining date is greater than or equal to birth date & joining month is greater or equal to birth year
	fdate=jdate-bdate;
	fmonth=jmonth-bmonth;
	fyear=jyear-byear;
	printf("\nThe Difference in Birth date and joining date is (dd-mm-yyyy) :- %d days %d months %d years",fdate,fmonth,fyear);
	
	//checking if joining year or birth year is a leap year
	if((byear%4==0)&&(byear%100!=0||byear%400==0))
	{
		printf("\nBirth year is a leap year !!");
		temp=1;
		
	}
	else
	{
		printf("\nBirth year is not a leap year !!");
	}
	
	if((jyear%4==0)&&(jyear%100!=0||jyear%400==0))
	{
		printf("\nJoining Date is a leap year !!");
	}
	else
	{
		printf("\nJoining date is not a leap year !!");
	}
	
	//checking if age is above 19 and born in a leap year
	if(fyear>=19&&temp==1)
	{
		printf("\nI am lucky adult and adult means responsibility !!");
	}
	else
	{
		printf("\nI am aspiring to become an responsible adult !!");
	}
	return 0;
}
