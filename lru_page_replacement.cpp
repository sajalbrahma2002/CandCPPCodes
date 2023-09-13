#include <stdio.h>

int main() 
{
    int frames, pages, i, j, k, fault = 0;
    printf("Enter the number of frames: ");
    scanf("%d", &frames);
    printf("Enter the number of pages: ");
    scanf("%d", &pages);
    int frame[frames], page[pages], time[frames];
    for (i = 0; i < frames; i++) 
	{
        frame[i] = -1; 
        time[i] = 0;  
    }
    printf("Enter the reference string: ");
    for (i = 0; i < pages; i++) 
	{
        scanf("%d", &page[i]);
    }
    for (i = 0; i < pages; i++) 
	{
        int flag = 0;
        for (j = 0; j < frames; j++) 
		{
            if (frame[j] == page[i]) 
			{
                flag = 1;
                time[j] = i + 1; 
                break;
            }
        }
        if (flag == 0) 
		{ 
            int min = time[0], pos = 0;
            for (k = 1; k < frames; k++) 
			{
                if (time[k] < min) 
				{
                	
                    min = time[k];
                    pos = k;
                }
            }
            frame[pos] = page[i]; 
            time[pos] = i + 1;  
            fault++;
        }
        printf("\n");
        printf("Page Frame [%d]: [",page[i]);
        for (j = 0; j < frames; j++) 
		{
            printf(" %d", frame[j]); 
        }
        printf("]");
    }
    printf("\nPage Faults: %d", fault);
    return 0;
}

