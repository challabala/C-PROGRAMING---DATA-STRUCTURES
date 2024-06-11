#include <stdio.h>
void main()
{
    int n, d, s = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    int t = n;
    while (n != 0)
    {
        d = n % 10;
        s += d;
        n /= 10;
    }
    if (t % s == 0)
    {
        printf("Harshad number.");
    }
    else
    {
        printf("Not harshad number.");
    }
}