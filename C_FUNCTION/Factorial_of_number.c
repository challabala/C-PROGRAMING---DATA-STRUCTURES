#include <stdio.h>
int factorial(int n);
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, factorial(n));
}
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}