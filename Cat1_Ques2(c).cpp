//Performing mixing of two arrays
#include <stdio.h>
#include <stdlib.h>
void type1(int a,char*p,char*q)
{
    char ans1[201];
    int tracker1=0;
    int tracker2=0;
    for(int i=0;i<a;i++)
    {
        if(i%2==0)
        {
            ans1[i]=*(p+tracker1);
            tracker1++;
        }
        else
        {
            ans1[i]=*(q+tracker2);
            tracker2++;
        }

    }
    for(int i=0;i<a;i++)
    {
        printf("%c ",ans1[i]);
    }
    printf("\n");

}
void type2(int a,int g,char*p,char*q)
{
    char ans2[100];
    int flag=0;
    int h=a-g;
    int tracker1=0;
    int tracker2=0;
    for(int i=0;i<a;i++)
    {
       if(flag==0)
       {
           if(g>=2)
           {
                ans2[i]=*(p+tracker1);
                tracker1++;
				i++;
                ans2[i]=*(p+tracker1);
                tracker1++;
                g=g-2;
           }
           else
           {
                ans2[i]=*(p+tracker1);
                tracker1++;
           }
           flag=1;
       }
       else
       {
           if(h>=2)
           {
               ans2[i]=*(q+tracker2);
               tracker2++;
			   i++;
			   ans2[i]=*(q+tracker2);
			   tracker2++;
			   h=h-2;
           }
           else
           {
               ans2[i]=*(q+tracker2);
            tracker2++;
           }
           flag=0;
       }
   }
    for(int i=0;i<a;i++)
    {
        printf("%c ",ans2[i]);
    }
    printf("\n");
}

int main()
{
    char s1[100];
    char s2[100];
    printf("\nEnter String 1 :- ");
    scanf("%[^\n]%*c",s1);
    printf("\nEnter String 2 :- ");
    scanf("%[^\n]%*c",s2);
    printf("\n");
    int a=0;
    int g=0;
    for(int i=0;s1[i]!='\0';i++)
    {
        a++;
        g++;
    }
    for(int i=0;s2[i]!='\0';i++)
    {
        a++;
    }
    type1(a,&s1[0],&s2[0]);
    type2(a,g,&s1[0],&s2[0]);
    return 0;
}
