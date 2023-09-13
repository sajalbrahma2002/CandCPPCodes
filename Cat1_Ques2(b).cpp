// 2B. Find the Keprekar number in a given range

#include<stdio.h>
#include<math.h>
bool kaprekar(int x)
{
	int m,ans,sum;
	if(x==1)
	{
		return true;
	}
	int square=x*x;
	int temp=0;
	while(square)
	{
		temp++;
		square=square/10;
	}
	square=x*x;
	for(m=1;m<temp;m++)
	{
		ans=pow(10,m);
	    if(ans==x)
	    continue;
	    if (sum=(square/ans)+(square%ans));
	    if(sum==x)
	    {
		    return true;
	    }
    }
	return false;
}
int main()
{
	int num,i,array[100],y=0,temp,rem=0,sol=0;
	//to check for kaprekar numbers in a given range
	printf("\nEnter the number to check Kaprekar number in the range :- ");
	scanf(" %d",&num);
	printf("\n The Kaprekar number in the range are :- ");
	for(i=1;i<=num;i++)
	{
	    if(kaprekar(i))
	    {
	    	printf("%d ",i); // diplaying the kaprekar numbers in the given range
	    	array[y]=i;      // array to save kaprekar number seperately
	    	y++;
		}
	}
	return 0;
}
