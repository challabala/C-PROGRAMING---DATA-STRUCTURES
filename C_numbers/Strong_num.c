#include <stdio.h>
void main()
{
    int n, t, d, s = 0, fact;
    printf("Enter the number:");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        d = n % 10;
        fact = 1;
        for (int i = 1; i <= d; i++)
        {
            fact = fact * i;
        }
        s += fact;
        n = n / 10;
    }
    if (s == t)
    {
        printf("Strong number.");
    }
    else
    {
        printf("Not a strong number.");
    }
}
