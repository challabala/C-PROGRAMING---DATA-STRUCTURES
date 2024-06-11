#include <stdio.h>
void main()
{
    int n, sum;
    printf("Enter the number:");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("Sum of %d natural numbers is %d", n, sum);
}