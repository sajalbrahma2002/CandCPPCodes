#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() 
{
    pid_t child_pid;
    child_pid = fork();

    if (child_pid > 0) 
	{
        sleep(10); 
        printf("Parent process exiting.\n");
    } 
	else if (child_pid == 0) 
	{
        printf("Child process executing.\n");
        exit(0); 
    } 
	else 
    {
        fprintf(stderr, "Fork failed.\n");
        return 1;
    }

    return 0;   
}

