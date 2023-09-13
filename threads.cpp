#include <stdio.h>
#include <pthread.h>

void *calculateFactorial(void *arg) 
{
    int n = *(int *)arg;
    int factorial = 1;
    for (int i = 2; i <= n; i++) 
	{
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", n, factorial);
    pthread_exit(NULL);
}



void *checkPrime(void *arg) 
{
    int n = *(int *)arg;
    int isPrime = 1;
    if (n <= 1) 
	{
        isPrime = 0;
    } 
	else 
	{
        for (int i = 2; i * i <= n; i++) 
		{
            if (n % i == 0) 
			{
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) 
	{
        printf("%d is a prime number\n", n);
    } 
	else 
	{
        printf("%d is not a prime number\n", n);
    }
    pthread_exit(NULL);
}



void *checkLastFourDigits(void *arg) 
{
    long long registerNumber = *(long long *)arg;
    int lastFourDigits = registerNumber % 10000;
    int isEven = (lastFourDigits % 2 == 0);
    if (isEven) 
	{
        printf("Last four digits of the register number (%lld) are even\n", registerNumber);
    } 
	else 
	{
        printf("Last four digits of the register number (%lld) are odd\n", registerNumber);
    }
    pthread_exit(NULL);
}


int main() 
{
    pthread_t thread1, thread2, thread3;
    int num1,num2;
    printf("Enter the number to calculate factorial: ");
    scanf("%d",&num1);
    printf("Enter the number to check for prime or not: ");
    scanf("%d",&num2);
 
    long long registerNumber; 
    printf("Enter the registration number number to check for even or odd: ");
    scanf("%lld",&registerNumber);
    pthread_create(&thread1, NULL, calculateFactorial, (void *)&num1);
    pthread_create(&thread2, NULL, checkPrime, (void *)&num2);
    pthread_create(&thread3, NULL, checkLastFourDigits, (void *)&registerNumber);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);
    return 0;
}

