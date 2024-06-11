#include <stdio.h>
void main()
{
    int n, fact = 1, cube, digit, i;
    printf("enter the number:");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        if (digit % 2 == 0)
        {
            for (i = 1; i <= digit; i++)
            {
                fact = fact * i;
            }
        }
        else
        {
            cube = digit * digit * digit;
        }
    }
    printf("%d", fact);
    printf("%d", cube);
}