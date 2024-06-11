#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    originalNumber = number;
    // Calculate factorial of each digit and sum them up
    while (originalNumber != 0)
    {
        int digit = originalNumber % 10;
        int factorial = 1;
        // Calculate factorial of digit
        for (int i = 1; i <= digit; ++i)
        {
            factorial *= i;
        }
        sum += factorial;
        originalNumber /= 10;
    }
    // Check if the number is a strong number
    if (sum == number)
        printf("%d is a strong number.\n", number);
    else
        printf("%d is not a strong number.\n", number);
    return 0;
}
/* ::::OUTPUT::::
    Enter a number: 145
    145 is a strong number.
*/