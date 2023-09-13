#include <stdio.h>

#define MAX_FRAMES 3 

int isPagePresent(int frames[], int n, int page) 
{
    for (int i = 0; i < n; i++) 
	{
        if (frames[i] == page)
            return 1; 
    }
    return 0; 
}


void fifoPageReplacement(int pages[], int n, int frames[]) 
{
    int page_faults = 0; 
    int index = 0;  

    for (int i = 0; i < n; i++) 
	{
        int page = pages[i];
        if (!isPagePresent(frames, MAX_FRAMES, page)) 
		{
            int victim_page = frames[index];
            frames[index] = page;

            // Move the front of the queue to the next page
            index = (index + 1) % MAX_FRAMES;
            page_faults++;

            printf("Page %d: [", page);
            for (int j = 0; j < MAX_FRAMES; j++) 
			{
                printf(" %d", frames[j]);
            }
            printf(" ]\n");
        }
    }
    printf("\nTotal Page Faults: %d\n", page_faults);
}

int main() 
{
    int n;
    printf("Enter the number of pages in the reference string: ");
    scanf("%d", &n);
    int pages[n]; 
    printf("Enter the page reference string: ");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &pages[i]);
    }

    int frames[MAX_FRAMES]; 

    for (int i = 0; i < MAX_FRAMES; i++) 
	{
        frames[i] = -1;
    }

    printf("\nFIFO Page Replacement:\n");
    fifoPageReplacement(pages, n, frames);
    return 0;
}

