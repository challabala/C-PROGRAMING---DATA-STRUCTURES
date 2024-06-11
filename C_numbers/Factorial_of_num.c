#include <stdio.h>
void main()
{
    int n, fact = 1;
    printf("Enter the n value:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of the %d is %d", n, fact);
}