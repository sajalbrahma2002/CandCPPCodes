#include<stdio.h>

void firstFit(int blockSize[], int m, int processSize[], int n);
void bestFit(int blockSize[], int m, int processSize[], int n);
void worstFit(int blockSize[], int m, int processSize[], int n);

void firstFit(int blockSize[], int m, int processSize[], int n)
{
    int i, j;
    int allocation[n];
    for(i = 0; i < n; i++)
    {
        allocation[i] = -1;
    }

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++)
        {
            if (blockSize[j] >= processSize[i])
            {
                allocation[i] = j;
                blockSize[j] = blockSize[j] - processSize[i];
                break;
            }
        }
    }
    printf("\nProcess No.\tProcess Size\tBlock no.\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %i\t\t", i+1);
        printf("%i\t\t", processSize[i]);
        if (allocation[i] != -1)
            printf("%i", allocation[i] + 1);
        else
            printf("Not Allocated");
        printf("\n");
   }
}


void bestFit(int blockSize[], int m, int processSize[], int n)
{
    int allocation[n];
    for (int i = 0; i < n; i++)
    {
        allocation[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int bestIdx = -1;
        for (int j = 0; j < m; j++)
        {
            if (blockSize[j] >= processSize[i])
            {  
                if (bestIdx == -1)
                    bestIdx = j;
                else if (blockSize[bestIdx] > blockSize[j])
                    bestIdx = j;
            }
        }
        if (bestIdx != -1)
        {
            allocation[i] = bestIdx;
            blockSize[bestIdx] = blockSize[bestIdx] - processSize[i];
        }
    }
    printf("\nProcess No.\tProcess Size\tBlock no.\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d\t\t%d\t\t",i+1,processSize[i]);
        if (allocation[i] != -1)
            printf(" %d",allocation[i] + 1);
        else
            printf("Not Allocated");
        printf("\n");
    }
}


void worstFit(int blockSize[], int m, int processSize[], int n)
{
    int allocation[n];
    for (int i = 0; i < n; i++)
    {
        allocation[i] = -1;
    }
    for (int i=0; i<n; i++)
    {
        int wstIdx = -1;
        for (int j=0; j<m; j++)
        {
            if (blockSize[j] >= processSize[i])
            {   
                if (wstIdx == -1)
                    wstIdx = j;
                else if (blockSize[wstIdx] < blockSize[j])
                    wstIdx = j;
            } 
        }
        if (wstIdx != -1)
        {
            allocation[i] = wstIdx;
            blockSize[wstIdx] -= processSize[i];
        }
    }
    printf("\nProcess No.\tProcess Size\tBlock no.\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d\t\t%d\t\t",i+1,processSize[i]);
        if (allocation[i] != -1)
            printf("%d",allocation[i] + 1);
        else
            printf("Not Allocated");
        printf("\n");
    }
}


int main()
{
    int m, n, ch;
    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};
    m = sizeof(blockSize) / sizeof(blockSize[0]);
    n = sizeof(processSize) / sizeof(processSize[0]);
    for(int i = 0; i < 5; i++)
    {
        printf("Block No - %d ,Block Size - %d\n",i+1,blockSize[i]);
    }
    for(int i = 0; i < 4; i++)
    {
    	printf("Process No - %d, Process Size - %d\n",i+1,processSize[i]);
	}
    printf("Enter your choice for memory allocation :- \n");
    printf("1. First Fit memory allocation.\n");
    printf("2. Best Fit memory allocation.\n");
    printf("3. Worst Fit memory allocation.\n");
    printf("Enter your choice - ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("\nFIRST FIT MEMORY ALLOCATION :- \n");
                firstFit(blockSize, m, processSize, n);
                break;
 
        case 2: printf("\nBEST FIT MEMORY ALLOCATION :- \n");
                bestFit(blockSize, m, processSize, n);
                break; 
 
        case 3: printf("\nWORST FIT MEMORY ALLOCATION :- \n");
                worstFit(blockSize, m, processSize, n);
                break;
       
	    default: printf("Invalid Choice.");
                 break;
    }   
    return 0 ;
}
