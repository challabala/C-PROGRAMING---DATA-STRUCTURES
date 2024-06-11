#include <stdio.h>
void main()
{
    int n, d, s = 0, p = 1;
    printf("Enter the number:");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        s += d;
        p *= d;
        n /= 10;
    }
    if (s == p)
    {
        printf("SPY number.");
    }
    else
    {
        printf("NOT spy number");
    }
}