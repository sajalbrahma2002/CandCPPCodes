// Count the Number of times VIT or VITCHENNAI appears in the Entered String
// SAJAL BRAHMA - 21BPS1045

#include<stdio.h>
#include<string.h>

int main()
{
	char array[100];
	int count1=0,count2=0;
	printf("Enter the string :- ");
	scanf("%s",&array);
	int len=strlen(array);
	int i=0;
	while(i<len)
	{
		if(array[i]=='V' || array[i]=='v')
		{
			if(array[i+1]=='I' || array[i+1]=='i')
			{
				if(array[i+2]=='T' || array[i+2]=='t')
				{
					if(array[i+3]=='C' || array[i+3]=='c')
					{
						if(array[i+4]=='H' || array[i+4]=='h')
						{
							if(array[i+5]=='E' || array[i+5]=='e')
							{
								if(array[i+6]=='N' || array[i+6]=='n')
								{
									if(array[i+7]=='N' || array[i+7]=='n')
									{
										if(array[i+8]=='A' || array[i+8]=='a')
										{
											if(array[i+9]=='I' || array[i+9]=='i')
											{
												count2++;
												i=i+10;
											}
											else
											{
												count1++;
												i=i+3;
											}
										}
										else
										{
											count1++;
						                    i=i+3;
										}
									}
									else
									{
										count1++;
						                i=i+3;	
									}
								}
								else
								{
									count1++;
						            i=i+3;	
								}
							}
							else
							{
								count1++;
						        i=i+3;
							}
						}
						else
						{
							count1++;
						    i=i+3;	
						}
					}
					else
					{
						count1++;
						i=i+3;
					}
				}
				else
				{
					i++;
				}
			}
			else
			{
				i++;
			}
		}
		else
		{
			i++;
		}
	}
	printf("\nTotal VIT :- %d",count1);
	printf("\nTotal VITCHENNAI :- %d",count2);
	return 0;
}

// Input -> VITvitchennaiVITCHENNAIvit
// Output -> 2,2
