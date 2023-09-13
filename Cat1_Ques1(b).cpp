// 1B. Create two arrays where the following operations on first array are reflected on second array 
//  A. Addition of characters to one array and their ASCII code to another array 
//  B. Deletion of characters from one array and their ASCII code from another array
//  C. Modify character from one array and delete their ASCII code from another
#include<stdio.h>

int main()
{
	int array1[100];
	int choice,i=0,j=0,x,y,temp1=0,temp2=0;
	char array2[100];
	char c1,c2;
    do
    {
		printf("\nChoose One of the following :- ");
		printf("\n\n1. Addition of characters :-  ");
		printf("\n2. Deletion of characters :- ");
		printf("\n3. Modification of characters :- ");
		printf("\n4. Exit \n");
		printf("\nChoose your option :- ");
		scanf("%d",&choice);
		//addition of characters
	    if(choice==1)
		{
		    printf("\nEnter the character to be added :- ");
		    scanf(" %c",&c1);
		    array1[i]=(int)c1;
			array2[j]=c1;
			i++;
			j++;
		    printf("\nArray after addition of character :- ");
			printf("\nDisplaying Integer array :- ");
			for(x=0;x<i;x++)
			{
				printf("%d ",array1[x]);
			}
			printf("\nDisplaying character array :- ");				
			for(y=0;y<j;y++)
			{
			   printf("%c ",array2[y]);
			}
		}
					
		//deletion of characters		
		if(choice==2)
		{
			printf("\nEnter character to be deleted :- ");
		    scanf(" %c",&c1);
	        for(x=0;x<i;x++)
	        {
	        	if(array2[x]==c1)
		      	{
			   		temp1=1;
	        		break;
				}
			}
			while(x<i && temp1==1)
			{
				array2[x]=array2[x+1];
				x++;
		    }
		    i--;
		    for(x=0;x<i;x++)
		    {
				if(array1[x]=(int)c1)
				{
					break;
				}
			}
			while(x<j && temp1==1)
			{
				array1[x]=array1[x+1];
				x++;
			}
			j--;
			printf("\nArray after addition of character :- ");
	        printf("\nDisplaying Integer array :- ");
			for(x=0;x<i;x++)
			{
				printf("%d ",array1[x]);
			}
			printf("\nDisplaying character array :- ");
			for(y=0;y<j;y++)
			{
				printf("%c ",array2[y]);
	     	}
	    }
	    
	    
		//Modification of characters
		if(choice==3)
		{
			printf("\nEnter the character to be modified :- ");
			scanf(" %c",&c1);
		    printf("\nEnter the character to which is should be modified/replaced :- ");
		    scanf(" %c",&c2);
			for(x=0;x<j;x++)
			   {
			       if(array2[j]==c2);
			       	{
			        	array2[x]=c1;
	                    temp2=1;
	                    break;
			     	}
			  }
			if(temp2==0)
			{
			    printf("\nCharacter not found !!");
                continue;
			}
			else
			{
				for(x=0;x<i;x++)
				{
					if(array1[x]=(int)c1)
					{
						break;
					}
				}
				while(x<j)
				{
					array1[x]=array1[x+1];
					x++;
				}
				i--;
			}
			printf("\nArray after modification of character :- ");
		    printf("\nDisplaying Integer array :- ");
			for(x=0;x<i;x++)
			{
				printf("%d ",array1[x]);
			}
			printf("\nDisplaying character array :- ");
			for(y=0;y<j;y++)
			{
				printf("%c ",array2[y]);
			}
		}
	}while(choice==1||choice==2||choice==3);
	return 0;
}
