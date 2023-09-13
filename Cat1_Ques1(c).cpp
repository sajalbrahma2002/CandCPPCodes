// 1C. Creating arrays to print events,registration fees, venue , coordinator name and contact details
// Include the option to select next event
// Display the events selected and its details 
#include<stdio.h>

int main()
{
	int choice,i,x=5,a=0;
	char reply;
	int ch[10];
	char event[5][30]={"Science Quiz","Paintings & Arts","Dance Competition","Science Exibition","Sports Day"};
	int fee[]={200,100,150,500,400};
	char venue[5][30]={"Science Lab","LA Hall","Function Ground","Event Hall","Sports Feild"};
	char Cname[5][30]={"Aakash Singh","Megha Agarwal","Aishwarya Gupta","Prabhakar Mishra","Mohit Singh"};
	int long contact[]={9876463521,9846383939,9834274949,9658362827,9236944880};
	
	do
	{
	   	printf("\n\nThe Events organised by the School :- \n");
	   	for(i=0;i<5;i++)
	   	{
	   		printf("%d. %s",i+1,event[i]);
	   		printf("\n");
		}
		printf("\nEnter your choice :- ");
		scanf(" %d",&choice);
		ch[a]=choice;
		a++;
		if(choice==1)
		{
			printf("\nEvent :- %s ",event[choice-1]);
			printf("\nRegistration Fees :- %d ",fee[choice-1]);
			printf("\nVenue :- %s ",venue[choice-1]);
			printf("\nCname :- %s ",Cname[choice-1]);
			printf("\nContact Details :- %ld ",contact[choice-1]);
		}
		else if(choice==2)
		{
			printf("\nEvent :- %s ",event[choice-1]);
			printf("\nRegistration Fees :- %d ",fee[choice-1]);
			printf("\nVenue :- %s ",venue[choice-1]);
			printf("\nCname :- %s ",Cname[choice-1]);
			printf("\nContact Details :- %ld ",contact[choice-1]);
		}
		else if(choice==3)
		{
			printf("\nEvent :- %s ",event[choice-1]);
			printf("\nRegistration Fees :- %d ",fee[choice-1]);
			printf("\nVenue :- %s ",venue[choice-1]);
			printf("\nCname :- %s ",Cname[choice-1]);
			printf("\nContact Details :- %ld ",contact[choice-1]);
		}
		else if(choice==4)
		{
			printf("\nEvent :- %s ",event[choice-1]);
			printf("\nRegistration Fees :- %d ",fee[choice-1]);
			printf("\nVenue :- %s ",venue[choice-1]);
			printf("\nCname :- %s ",Cname[choice-1]);
			printf("\nContact Details :- %ld ",contact[choice-1]);
		}
		else if(choice==5)
		{
			printf("\nEvent :- %s ",event[choice-1]);
			printf("\nRegistration Fees :- %d ",fee[choice-1]);
			printf("\nVenue :- %s ",venue[choice-1]);
			printf("\nCname :- %s ",Cname[choice-1]);
			printf("\nContact Details :- %ld ",contact[choice-1]);
		}
		else
		{
			printf("\nInvalid Choice ");
		}
	printf("\nDo you want to select more events(max 5) :- ");
	scanf(" %c",&reply);
	}while(reply=='y'||reply=='Y');
	printf("\nThe Events selected by him with its details are :-\n");
	for(i=0;i<a;i++)
	{
		printf("\nEvent :- %s ",event[ch[i]-1]);
		printf("\nRegistration Fees :- %d ",fee[ch[i]-1]);
		printf("\nVenue :- %s ",venue[ch[i]-1]);
		printf("\nCname :- %s ",Cname[ch[i]-1]);
		printf("\nContact Details :- %ld ",contact[ch[i]-1]);
		printf("\n\n");
	}
	return 0;
}
