#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

#define BUFFER_SIZE 5
#define NUM_PRODUCERS 2
#define NUM_CONSUMERS 3

// Define the buffer and its index
int buffer[BUFFER_SIZE];
int in = 0, out = 0;

// Define the semaphores
sem_t mutex;
sem_t empty;
sem_t full;

// Function to add an item to the buffer
void insert_item(int item) 
{
    // Acquire empty semaphore
    sem_wait(&empty);

    // Acquire mutex lock
    sem_wait(&mutex);

    // Add item to buffer
    buffer[in] = item;
    in = (in + 1) % BUFFER_SIZE;
    printf("Producer %ld produced item %d.\n", pthread_self(), item);

    // Release mutex lock
    sem_post(&mutex);

    // Release full semaphore
    sem_post(&full);
}

// Function to remove an item from the buffer
int remove_item() 
{
    int item;

    // Acquire full semaphore
    sem_wait(&full);

    // Acquire mutex lock
    sem_wait(&mutex);

    // Remove item from buffer
    item = buffer[out];
    out = (out + 1) % BUFFER_SIZE;
    printf("Consumer %ld consumed item %d.\n", pthread_self(), item);

    // Release mutex lock
    sem_post(&mutex);

    // Release empty semaphore
    sem_post(&empty);

    return item;
}

// Function to simulate a producer's behavior
void *producer(void *arg) 
{
    int item;

    while (1) 
	{
        // Generate a random item
        item = rand() % 100;

        // Insert the item into the buffer
        insert_item(item);

        // Sleep for a while
        sleep(rand() % 5);
    }
}

// Function to simulate a consumer's behavior
void *consumer(void *arg) 
{
    int item;

    while (1) 
	{
        // Remove an item from the buffer
        item = remove_item();

        // Sleep for a while
        sleep(rand() % 5);
    }
}

int main() 
{
    pthread_t producers[NUM_PRODUCERS];
    pthread_t consumers[NUM_CONSUMERS];

    // Initialize the semaphores
    sem_init(&mutex, 0, 1);
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);

    // Create the producer threads
    for (int i = 0; i < NUM_PRODUCERS; i++) 
	{
        pthread_create(&producers[i], NULL, producer, NULL);
    }

    // Create the consumer threads
    for (int i = 0; i < NUM_CONSUMERS; i++)
	 {
        pthread_create(&consumers[i], NULL, consumer, NULL);
    }

    // Wait for all threads to complete
    for (int i = 0; i < NUM_PRODUCERS; i++) 
	{
        pthread_join(producers[i], NULL);
    }
    for (int i = 0; i < NUM_CONSUMERS; i++) 
	{
        pthread_join(consumers[i], NULL);
    }

    // Destroy the semaphores
    sem_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}

