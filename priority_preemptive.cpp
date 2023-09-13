#include <stdio.h>

struct Process 
{
    int id;         
    int burst_time;   
    int arrival_time; 
    int priority;    
    int remaining_time; 
};

void priority_preemptive(struct Process p[], int n) 
{
    int total_waiting_time = 0;
    int total_turnaround_time = 0;

    printf("\nProcess\t   Burst Time\t  Priority\tWaiting Time\tTurnaround Time\n");

    int current_time = 0;
    int completed_processes = 0;
    while (completed_processes < n) 
	{
        int highest_priority_index = -1;
        int highest_priority = -1;

        for (int i = 0; i < n; i++) 
		{
            if (p[i].arrival_time <= current_time && p[i].remaining_time > 0) 
			{
                if (highest_priority_index == -1 || p[i].priority < highest_priority) 
				{
                    highest_priority_index = i;
                    highest_priority = p[i].priority;
                }
            }
        }

        if (highest_priority_index == -1) 
		{
            current_time++;
            continue;
        }

        p[highest_priority_index].remaining_time--;
        current_time++;

        if (p[highest_priority_index].remaining_time == 0) 
		{
            int waiting_time = current_time - p[highest_priority_index].burst_time - p[highest_priority_index].arrival_time;
            int turnaround_time = current_time - p[highest_priority_index].arrival_time;

            total_waiting_time = total_waiting_time + waiting_time;
            total_turnaround_time = total_turnaround_time + turnaround_time;

            printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", p[highest_priority_index].id, p[highest_priority_index].burst_time,p[highest_priority_index].priority,waiting_time, turnaround_time);
            completed_processes++;
        }
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
        printf("Process %d:\n",P[i].id);
        printf("Burst Time: ");
        scanf("%d", &P[i].burst_time);
        printf("Arrival Time: ");
        scanf("%d", &P[i].arrival_time);
        printf("Priority: ");
        scanf("%d", &P[i].priority);    
        P[i].remaining_time = P[i].burst_time; 
        printf("\n");
    }
    priority_preemptive(P, n);
    return 0;
}

