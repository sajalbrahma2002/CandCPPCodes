// To calculate the profit earned by given stocks at start and end of the day
// SAJAL BRAHMA - 21BPS1045
#include<stdio.h>

int main()
{
   int array1[3][2],array2[3][2],temp;
   float sum=0;
   printf("\nSAJALBRAHMA -21BPS1045\n");
   printf("Start of the day :- \n");
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<2;j++)
     {
        scanf("%d",&array1[i][j]);
     }
   }
   printf("\nEnd of the day :- \n");
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<2;j++)
     {
        scanf("%d",&array2[i][j]);
     }
   }
   printf("\nTotal Profit : - ");
   for(int i=0;i<3;i++)
   {
     for(int j=0;j<2;j++)
     {
        temp=(array1[i][j]-array2[i][j]);
        if(i==0)
        {
          sum=sum+(temp*0.75);
        }
        else if(i==1)
        {
          sum=sum+(temp*0.55);
        }
        else
        {
          sum=sum+(temp*1.20);
        }
     }
   }
   printf("%.2f",sum);
   return 0;
}

// INPUT = Start of the day     End of the day
//         42 54                27 31
//         36 27                28 15
//         34 30                28 22
// OUTPUT = 56.30
