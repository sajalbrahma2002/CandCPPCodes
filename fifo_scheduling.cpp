#include <stdio.h>
void Sort_Process(struct Process p[], int n);

struct Process 
{
    int id;          
    int burst_time;   
    int arrival_time; 
};


void fifo_Scheduling(struct Process p[], int n) 
{
	Sort_Process(p,n);
    int total_waiting_time = 0;
    int total_turnaround_time = 0;

    printf("\nProcess\t  Burst Time\tWaiting Time\tTurnaround Time\n");

    int current_time = 0;
    for (int i = 0; i < n; i++) 
	{
        if (current_time < p[i].arrival_time)
            current_time = p[i].arrival_time;

        int waiting_time = current_time - p[i].arrival_time;
        current_time = current_time + p[i].burst_time;
        int turnaround_time = current_time - p[i].arrival_time;

        total_waiting_time =  total_waiting_time + waiting_time;
        total_turnaround_time = total_turnaround_time + turnaround_time;

        printf("%d\t\t%d\t\t%d\t\t%d\n", p[i].id, p[i].burst_time, waiting_time, turnaround_time);
    }

    double avg_waiting_time = (double)total_waiting_time / n;
    double avg_turnaround_time = (double)total_turnaround_time / n;

    printf("\nAverage Waiting Time: %.2lf", avg_waiting_time);
    printf("\nAverage Turnaround Time: %.2lf\n", avg_turnaround_time);
}

void Sort_Process(struct Process p[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++) 
		{
            if (p[j].arrival_time > p[j + 1].arrival_time) 
			{
                struct Process temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process P[n];
    for (int i = 0; i < n; i++) 
	{
		P[i].id = i + 1;
        printf("Process %d:\n", P[i].id);
        printf("Burst Time: ");
        scanf("%d", &P[i].burst_time);
        printf("Arrival Time: ");
        scanf("%d", &P[i].arrival_time);
        printf("\n");
    }
    fifo_Scheduling(P, n);
    return 0;
}

