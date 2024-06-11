#include <stdio.h>
#include <stdbool.h>
isPrime(int n)
{
    if (n == 0 || n == 1)
        return 0;
    else
    {
    }
}
void main()
{
    int n, c;
    int flag = 0;
    printf("Enetr the num:");
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++)
    {
        c = 0;
        if (n % i == 0)
        {
            c++;
        }
        if (c == 2)
        {
            printf("%d ", i);
        }
    }
}