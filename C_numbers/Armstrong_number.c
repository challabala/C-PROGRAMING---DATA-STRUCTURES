#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, result = 0, n = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate the result
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if num is an Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}