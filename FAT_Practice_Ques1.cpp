// Anirban's FAT Question
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<stdlib.h>

struct node
{
	struct node *left;
	int data;
	struct node *right;
}*newnode,*temp,*ptr;

struct node *insert(struct node *head,int val)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->left=NULL;
	newnode->right=NULL;
	if(head==NULL)
	{
		head=newnode;
		temp=newnode;
	}
	else
	{
		temp=head;
		while(temp->right!=NULL)
		{
			temp=temp->right;
		}
		newnode->left=temp;
		temp->right=newnode;
	}
	return head;
}

void Calculate_reverse_sum(struct node *H1,struct node*H2)
{
	struct node *temp1=H1;
	struct node *temp2=H2;
		
	while(temp1->right!=NULL)
	{
		temp1=temp1->right;
	}
	
	while(temp2->right!=NULL)
	{
		temp2=temp2->right;
	}
	int num1=0;
	while(temp1!=NULL)
	{
		num1=num1*10+temp1->data;
		temp1=temp1->left;
	}
	int num2=0;
	while(temp2!=NULL)
	{
		num2=num2*10+temp2->data;
		temp2=temp2->left;
	}
	int sum=num1+num2;
	printf("\nThe sum after reversing both the numbers :- %d",sum);
	int a[10];
	int j=0;
	while(sum!=0)
	{
		a[j]=sum%10;
		j++;
		sum=sum/10;
	}
	for(int z=j-1;z>=0;z--)
	{
		if(a[z]==0)
		a[z]=1;
        else if(a[z]==1)
		a[z]=2;
		else if(a[z]==2)
		a[z]=3;
		else if(a[z]==3)
		a[z]=4;
		else if(a[z]==4)
		a[z]=5;
		else if(a[z]==5)
		a[z]=6;
		else if(a[z]==6)
		a[z]=7;
		else if(a[z]==7)
		a[z]=9;
		else if(a[z]==8)
		a[z]=9;
		else if(a[z]==9)
		a[z]=0;
	}
	printf("\nThe encrypted number of the sum of the reverse of two numbers :- ");
	for(int z=j-1;z>=0;z--)
	{
		printf("%d",a[z]);
	}
	
}

void reverse_check_encrypt(struct node *H1,struct node *H2)
{
	struct node *temp1=H1;
	struct node *temp2=H2;
	
	// to point temp1 to last mode of head1
	while(temp1->right!=NULL)
	{
		temp1=temp1->right;
	}
	
	// to point temp2 to last mode of head2
	while(temp2->right!=NULL)
	{
		temp2=temp2->right;
	}
	
	while(temp1!=NULL)
	{
		if(temp1->data==0)
		   temp1->data=1;
		else if(temp1->data==1)
		   temp1->data=2;
		else if(temp1->data==2)
		   temp1->data=3;
		else if(temp1->data==3)
		   temp1->data=4;
		else if(temp1->data==4)
		   temp1->data=5;
		else if(temp1->data==5)
		   temp1->data=6;
		else if(temp1->data==6)
		   temp1->data=7;
		else if(temp1->data==7)
		   temp1->data=8;
		else if(temp1->data==8)
		   temp1->data=9;
		else if(temp1->data==9)
		   temp1->data=0;
		temp1=temp1->left;
	}
	
	while(temp2!=NULL)
	{
	    if(temp2->data==0)
		   temp2->data=1;
		else if(temp2->data==1)
		   temp2->data=2;
		else if(temp2->data==2)
		   temp2->data=3;
		else if(temp2->data==3)
		   temp2->data=4;
		else if(temp2->data==4)
		   temp2->data=5;
		else if(temp2->data==5)
		   temp2->data=6;
		else if(temp2->data==6)
		   temp2->data=7;
		else if(temp2->data==7)
		   temp2->data=8;
		else if(temp2->data==8)
		   temp2->data=9;
		else if(temp2->data==9)
		   temp2->data=0;
		temp2=temp2->left;
	}
}

void display_list(struct node *head)
{
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->right;
	}
}

void display_reverse(struct node *head)
{
	temp=head;
	while(temp->right!=NULL)
	temp=temp->right;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->left;
	}
}

int main()
{
	int num,arr[10];
	struct node *head1=NULL;
	struct node *head2=NULL;
	for(int i=0;i<2;i++)
	{
		printf("Enter number %d :- ",i+1);
		scanf("%d",&num);
		int j=0;
		while(num!=0)
		{
			arr[j++]=num%10;
			num=num/10;
		}
		if(i==0)
		{
			for(int x=j-1;x>=0;x--)
		    {
		    	//printf("%d -> ",arr[x]);
			    head1=insert(head1,arr[x]);
		    }
		}
		if(i==1)
		{
			for(int x=j-1;x>=0;x--)
		    {
		    	//printf("%d -> ",arr[x]);
		     	head2=insert(head2,arr[x]);
		    }
		}
		printf("\n");
	}
	Calculate_reverse_sum(head1,head2);
	// to check the node in reverse manner and encrypt the data
	reverse_check_encrypt(head1,head2);
	printf("\nList after encrypting the first list :- ");
	display_list(head1);
	printf("\nList after encrypting the second list :- ");
	display_list(head2);
	printf("\nList after reversing the first encrypted list :- ");
	display_reverse(head1);
	printf("\nList after reversing the second encrypted list :- ");
	display_reverse(head2);
	return 0;
}

// Input - 123 , 789

// Output
T// he sum after reversing both the numbers :- 1308
// The encrypted number of the sum of the reverse of two numbers :- 2419
// List after encrypting the first list :- 2 3 4
// List after encrypting the second list :- 8 9 0
// List after reversing the first encrypted list :- 4 3 2
// List after reversing the second encrypted list :- 0 9 8
