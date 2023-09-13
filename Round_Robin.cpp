#include <stdio.h>

struct Process 
{
    int id;        
    int burst_time;  
    int arrival_time; 
    int remaining_time;
};

void round_robin(struct Process p[], int n, int x) 
{
    int total_waiting_time = 0;
    int total_turnaround_time = 0;

    printf("\nProcess\t  Burst Time\tWaiting Time\tTurnaround Time\n");

    int current_time = 0;
    int completed_processes = 0;
    while (completed_processes < n) 
	{
        for (int i = 0; i < n; i++)
		 {
            if (p[i].arrival_time <= current_time && p[i].remaining_time > 0) 
			{
                int execution_time = (p[i].remaining_time < x) ? p[i].remaining_time : x;

                p[i].remaining_time = p[i].remaining_time - execution_time;
                current_time = current_time + execution_time;

                if (p[i].remaining_time == 0) 
				{
                    int waiting_time = current_time - p[i].burst_time - p[i].arrival_time;
                    int turnaround_time = current_time - p[i].arrival_time;

                    total_waiting_time = total_waiting_time + waiting_time;
                    total_turnaround_time = total_turnaround_time + turnaround_time;

                    printf("%d\t\t%d\t\t%d\t\t%d\n", p[i].id, p[i].burst_time, waiting_time, turnaround_time);
                    completed_processes++;
                }
            }
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
        printf("Process %d:\n", P[i].id);
        printf("Burst Time: ");
        scanf("%d", &P[i].burst_time);
        printf("Arrival Time: ");
        scanf("%d", &P[i].arrival_time);
        P[i].remaining_time = P[i].burst_time; 
        printf("\n");
    }

    int time_quantum; 
    printf("Enter the time quantum for Round Robin: ");
    scanf("%d", &time_quantum);

    round_robin(P, n, time_quantum);

    return 0;
}

