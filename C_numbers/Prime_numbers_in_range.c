#include <stdio.h>

// Function prototype
int isPrime(int num);

int main()
{
    int start, end;

    // Input the range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers in the range %d to %d are:\n", start, end);

    // Check each number in the range for primality
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

// Function definition to check if a number is prime
int isPrime(int num)
{
    // 0 and 1 are not prime numbers
    if (num <= 1)
    {
        return 0;
    }

    // Check for divisibility by numbers up to the square root of num
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // If num is divisible by any number, it's not prime
        }
    }

    return 1; // If num is not divisible by any number, it's prime
}