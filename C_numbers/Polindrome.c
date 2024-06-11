#include <stdio.h>
void main()
{
    int n, d, re = 0;
    printf("Enter the number:");
    scanf("%d", &n);
    int temp = n;
    while (n != 0)
    {
        d = n % 10;
        re = re * 10 + d;
        n = n / 10;
    }
    if (temp == re)
    {
        printf("Polyndrome.");
    }
    else
    {
        printf("Not polyndrome");
    }
}