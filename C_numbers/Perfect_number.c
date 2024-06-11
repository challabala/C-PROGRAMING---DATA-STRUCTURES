#include <stdio.h>
void main()
{
    int n, s = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            s += i;
        }
    }
    if (s == n)
    {
        printf("Perfect number.");
    }
    else
    {
        printf("Not a perfect number.");
    }
}