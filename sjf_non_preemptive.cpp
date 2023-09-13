#include <stdio.h>

struct Process 
{
    int id;          
    int burst_time;   
    int arrival_time; 
};

void sjf_non_preemptive_Scheduling(struct Process p[], int n)
{
	int total_waiting_time = 0;
    int total_turnaround_time = 0;
    
    printf("\nProcess\t  Burst Time\tWaiting Time\tTurnaround Time\n");
    
    int current_time = 0;
    for (int i = 0; i < n; i++) 
	{
        int sjf_index = i;
        for (int j = i + 1; j < n; j++)
		{
            if (p[j].burst_time < p[sjf_index].burst_time) 
			{
                sjf_index = j;
            }
        }
    
        struct Process temp = p[i];
        p[i] = p[sjf_index];
        p[sjf_index] = temp;

        if (current_time < p[i].arrival_time)
            current_time = p[i].arrival_time;

        int waiting_time = current_time - p[i].arrival_time;
        current_time = current_time +  p[i].burst_time;
        int turnaround_time = current_time - p[i].arrival_time;

        total_waiting_time = total_waiting_time + waiting_time;
        total_turnaround_time = total_turnaround_time + turnaround_time;

        printf("%d\t\t%d\t\t%d\t\t%d\n", p[i].id, p[i].burst_time, waiting_time, turnaround_time);
    
	}
	double avg_waiting_time = (double)total_waiting_time / n;
    double avg_turnaround_time = (double)total_turnaround_time / n;

    printf("\nAverage Waiting Time: %.2lf", avg_waiting_time);
    printf("\nAverage Turnaround Time: %.2lf\n", avg_turnaround_time);
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
    sjf_non_preemptive_Scheduling(P, n);
    return 0;
}

