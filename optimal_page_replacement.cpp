#include <stdio.h>

int main() {
    int frames, pages, i, j, k, fault = 0;
    printf("Enter the number of frames: ");
    scanf("%d", &frames);
    printf("Enter the number of pages: ");
    scanf("%d", &pages);
    int frame[frames], page[pages], future[pages];
    for (i = 0; i < frames; i++) 
	{
        frame[i] = -1; 
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
                break;
            }
        }
        if (flag == 0) 
		{ 
            fault++;
            int max = -1, pos = -1;
            for (j = 0; j < frames; j++) 
			{
                int found = 0;
                for (k = i + 1; k < pages; k++) 
				{
                    if (frame[j] == page[k]) 
					{	
                        found = 1;
                        future[j] = k;
                        break;
                    }
                }
                if (found == 0) 
				{
                    pos = j;
                    break;
                } 
				else if (future[j] > max) 
				{ 
                    max = future[j];
                    pos = j;
                }
            }
            frame[pos] = page[i]; 
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

