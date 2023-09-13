#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

#define NUM_PHILOSOPHERS 5

// Define the state of each philosopher
enum 
{
    THINKING,
    HUNGRY,
    EATING
} state[NUM_PHILOSOPHERS];

// Define the semaphores
sem_t mutex;
sem_t chopstick[NUM_PHILOSOPHERS];

// Function to check if both chopsticks are available
void pickup_chopsticks(int philosopher_id) 
{
    // Acquire mutex lock
    sem_wait(&mutex);

    // Set philosopher's state to hungry
    state[philosopher_id] = HUNGRY;

    // Try to acquire two chopsticks
    if (state[philosopher_id] == HUNGRY && state[(philosopher_id + 1) % NUM_PHILOSOPHERS] != EATING) 
	{
        state[philosopher_id] = EATING;
        sem_post(&chopstick[philosopher_id]);
    }

    // Release mutex lock
    sem_post(&mutex);

    // Wait for chopsticks to be acquired
    sem_wait(&chopstick[philosopher_id]);
}

// Function to release both chopsticks
void putdown_chopsticks(int philosopher_id) 
{
    // Acquire mutex lock
    sem_wait(&mutex);

    // Set philosopher's state to thinking
    state[philosopher_id] = THINKING;

    // Release both chopsticks
    sem_post(&chopstick[philosopher_id]);
    sem_post(&chopstick[(philosopher_id + 1) % NUM_PHILOSOPHERS]);

    // Release mutex lock
    sem_post(&mutex);
}

// Function to simulate a philosopher's behavior
void *philosopher(void *arg) {
    int philosopher_id = *(int *)arg;

    while (1) 
	{
        // Think for a while
        printf("Philosopher %d is thinking...\n", philosopher_id);
        sleep(rand() % 10);

        // Pick up chopsticks and eat
        printf("Philosopher %d is hungry...\n", philosopher_id);
        pickup_chopsticks(philosopher_id);
        printf("Philosopher %d is eating...\n", philosopher_id);
        sleep(rand() % 10);

        // Put down chopsticks and think again
        printf("Philosopher %d finished eating and is putting down chopsticks...\n", philosopher_id);
        putdown_chopsticks(philosopher_id);
    }

    return NULL;
}

int main() 
{
    pthread_t tid[NUM_PHILOSOPHERS];
    int philosopher_ids[NUM_PHILOSOPHERS];

    // Initialize the semaphores
    sem_init(&mutex, 0, 1);
    for (int i = 0; i < NUM_PHILOSOPHERS; i++) 
	{
        sem_init(&chopstick[i], 0, 0);
    }

    // Create the philosopher threads
    for (int i = 0; i < NUM_PHILOSOPHERS; i++) 
	{
        philosopher_ids[i] = i;
        pthread_create(&tid[i], NULL, philosopher, &philosopher_ids[i]);
    }

    // Wait for all philosopher threads to finish (this will never happen)
    for (int i = 0; i < NUM_PHILOSOPHERS; i++) 
	{
        pthread_join(tid[i], NULL);
    }

    return 0;
}

