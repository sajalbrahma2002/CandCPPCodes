#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
{
    pid_t child_pid = fork();

    if (child_pid > 0) 
	{
        printf("Parent process (PID: %d)\n", getpid());
        sleep(2);  
        printf("Parent process exiting\n");
    } 
	else if (child_pid == 0) 
	{
        printf("Child process (PID: %d)\n", getpid());
        sleep(5);  
        printf("Child process exiting\n");
    } else 
	{
        fprintf(stderr,"Fork failed\n");
        return 1;
    }
    return 0;
}

