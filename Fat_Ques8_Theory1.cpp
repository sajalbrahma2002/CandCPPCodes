// Ques 8 - FAT Practice
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<string.h>

struct Transaction
{
	char name[30];
	int t[10];
};

int main()
{
	int num,sum,total[10];
	float amount[10];
	printf("Enter the number of customer inputs :- ");
	scanf("%d",&num);
	struct Transaction obj[num];
	for(int i=0;i<num;i++)
	{
		sum=0;
		printf("\nEnter Customer %d Name :- ",i+1);
		scanf("%s",&obj[i].name);
		if(obj[i].name=="END")
		{
			break;
		}
		else
		{
		    for(int j=0;j<10;j++)
		    {
		        printf("\nEnter Transaction %d :- ",j+1);
		        scanf("%d",&obj[i].t[j]);
		        sum=sum+obj[i].t[j];
		    }
	    }
	    total[i]=sum;
	}
	int discount=0;
	for(int i=0;i<num;i++)
	{
	    if(total[i]<500)
	    {   
		    discount=0.05*total[i];
		    amount[i]=(total[i]-discount)/10;
	    }
	    else if(total[i]>=500 && total[i]<999)
	    {
		    discount=0.1*total[i];
		    amount[i]=(total[i]-discount)/10;
	    }
	    else if(total[i]>=1000 && total[i]<1999)
	    {
		    discount=0.15*total[i];
		    amount[i]=(total[i]-discount)/10;
	    }   
	    else
	    {
		    discount=0.2*total[i];
		    amount[i]=(total[i]-discount)/10;
	    }     
	}
	int temp;
	char tempname[30];
	for(int i=0;i<num;i++)
	{
		for(int j=i+1;j<num;j++)
		{
			temp=0;
		    if(amount[i]<amount[j])
		    {
			    temp=amount[j];
			    amount[j]=amount[i];
			    amount[i]=temp;
			    strcpy(tempname,obj[j].name);
			    strcpy(obj[j].name,obj[i].name);
			    strcpy(obj[i].name,tempname);
		    }
		}
	}
	for(int i=0;i<num;i++)
	{
		printf("\n Customer Name :- %s , Amount :- %d",obj[i].name,amount[i]);
	}
	return 0;
}
