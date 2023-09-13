//3a- Structures in C - Arithmetic operation on N polynomials
//SAJAL BRAHMA - 21BPS1045

#include<stdio.h>

struct Calculate
{
	int a,b,c;
};

int main()
{
    int n,sum1=0,sum2=0,sum3=0,diff1=0,diff2=0,diff3=0;
    printf("\n Enter the number of polynomials to perform arithmetic operations :- ");
    scanf("%d",&n);
	struct Calculate obj[n];
	printf("\nEnter the cofficients a,b,c in the polynomial of form ax^2+bx+c :- ");
	for(int i=0;i<n;i++)
	{
		printf("\nEnter cofficient a of polynomial %d :- ",i+1);
		scanf("%d",&obj[i].a);
		printf("\nEnter cofficient b of polynomial %d :- ",i+1);
		scanf("%d",&obj[i].b);
		printf("\nEnter cofficient c of polynomial %d :- ",i+1);
		scanf("%d",&obj[i].c);
	}
	printf("\nPerforming Addition of %d polynomials :- ",n);
	for(int j=0;j<n;j++)
	{
		sum1=sum1+obj[j].a;
		sum2=sum2+obj[j].b;
		sum3=sum3+obj[j].c;
	}
	printf("\nFinal Polynomial after adding %d polynomials :- (%d) x^2 + (%d) x + (%d) ",n,sum1,sum2,sum3);
	printf("\nPerforming Difference of %d polynomials :- ",n);
	diff1=obj[0].a;
	diff2=obj[0].b;
	diff3=obj[0].c;
	for(int k=1;k<n;k++)
	{
		diff1=diff1-obj[k].a;
		diff2=diff2-obj[k].b;
		diff3=diff3-obj[k].c;
	}
	printf("\nFinal Polynomial after Difference of %d polynomials :- (%d) x^2 + (%d) x + (%d) ",n,diff1,diff2,diff3);
	return 0;
}
