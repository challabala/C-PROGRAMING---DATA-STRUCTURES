#include <stdio.h>
void main()
{
    int start, stop, n1;
    printf("Enter the number:");
    scanf("%d", &n);
    // n1 = n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n1)
    {
        printf("%d is a perfect number.", n1);
    }
    else
    {
        printf("%d is not a perfect number.", n1);
    }
}