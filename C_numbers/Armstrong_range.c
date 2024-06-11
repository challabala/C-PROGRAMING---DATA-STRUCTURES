#include <stdio.h>
#include <math.h>

int main()
{
    int start, end;

    // Input the range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Armstrong numbers in the range %d to %d are:\n", start, end);

    // Check each number in the range for being Armstrong
    for (int num = start; num <= end; num++)
    {
        int originalNum = num;
        int n = 0;
        int result = 0;

        // Count the number of digits
        while (originalNum != 0)
        {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // Calculate the result
        while (originalNum != 0)
        {
            int remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        // Check if num is an Armstrong number
        if (result == num)
        {
            printf("%d  ", num);
        }
    }

    return 0;
}