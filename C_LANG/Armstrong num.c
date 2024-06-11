#include <stdio.h>

int main()
{
    int number, originalNumber, remainder, digits = 0, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    originalNumber = number;
    // Count number of digits
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++digits;
    }
    originalNumber = number;
    // Calculate sum of nth power of each digit
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        // Calculate power of remainder
        int power = 1;
        for (int i = 0; i < digits; ++i)
        {
            power *= remainder;
        }
        result += power;
        originalNumber /= 10;
    }
    // Check if the number is Armstrong
    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
/* ** OUTPUT**
Enter an integer: 153
153 is an Armstrong number.
*/