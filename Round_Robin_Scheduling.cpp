#include<stdio.h>
#include<conio.h>

struct Process 
{
    int pid;            // process ID
    int arrivalTime;    // arrival time
    int burstTime;      // burst time
    int remainingTime;  // remaining time
    int compTime;       // completion time
    int waitTime ;      // waiting time
    int TurnAroundTime; // Turn Around Time
};

int main()
{
	int n;
	printf("Enter the number of processes : ");
    scanf("%d",&n);
    struct Process processes[n];
    printf("Enter the arrival time and burst time of each process:\n");
    for (int i = 0; i < n; i++) 
	{
        printf("Process %d: ", i+1);
        scanf("%d %d", &processes[i].arrivalTime,&processes[i].burstTime);
        processes[i].pid = i+1;
        processes[i].remainingTime = processes[i].burstTime;
    }
    int quantum;
    printf("\nEnter the time quantum : ");
    scanf("%d",&quantum);
    
    int currentTime = 0;
    int completedProcesses = 0;
    int waitingTimeSum = 0;
    int turnaroundTimeSum = 0;
    
    
    // to print Gantt chart
    printf("\nGantt Chart:\n");
    printf("------------\n");
    while (completedProcesses < n) 
	{
        int isCompleted = 1;
        for (int i = 0; i < n; i++) 
		{
            if (processes[i].remainingTime > 0 && processes[i].arrivalTime <= currentTime) {
                isCompleted = 0;
                if (processes[i].remainingTime <= quantum) 
				{
                    currentTime += processes[i].remainingTime;
                    processes[i].remainingTime = 0;
                } 
				else 
				{
                    currentTime += quantum;
                    processes[i].remainingTime -= quantum;
                }
                processes[i].compTime = currentTime;
                printf("P%d(%d) ", processes[i].pid, currentTime);
                if (processes[i].remainingTime == 0) 
				{
                    completedProcesses++;
                    int completionTime = currentTime;
                    int turnaroundTime = completionTime - processes[i].arrivalTime;
                    int waitingTime = turnaroundTime - processes[i].burstTime;
                    waitingTimeSum += waitingTime;
                    turnaroundTimeSum += turnaroundTime;
                }
            }
        }
        if (isCompleted) 
		{
            currentTime++;
            printf("(idle) ");
        }
    }
    float avgWaitingTime = 0;
    float avgTurnaroundTime = 0;
    
    for(int i = 0 ; i < n; i++)
    {
    	processes[i].waitTime = processes[i].compTime - processes[i].burstTime - processes[i].arrivalTime;
    	processes[i].TurnAroundTime = processes[i].compTime;
    	avgWaitingTime = avgWaitingTime + processes[i].waitTime;
    	avgTurnaroundTime = avgTurnaroundTime + processes[i].TurnAroundTime;
    	
	}
	
	avgWaitingTime = (float)avgWaitingTime/n;
	avgTurnaroundTime = (float)avgTurnaroundTime/n;
	
    printf("\n\nProcess \tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    printf("-------------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) 
	{
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].pid,processes[i].arrivalTime,processes[i].burstTime,processes[i].waitTime,processes[i].TurnAroundTime);
    }
    printf("\nAverage Waiting Time: %.2lf\n", avgWaitingTime);
    printf("Average Turnaround Time: %.2lf\n", avgTurnaroundTime);

    return 0;
    
}
