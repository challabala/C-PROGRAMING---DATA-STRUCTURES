#include <stdio.h>
#include <math.h>
int main()
{
    int n, n1, n2, digit, count = 0, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    n1 = n;
    n2 = n;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    while (n1 > 0)
    {
        digit = n % 10;
        sum = sum + pow(digit, count);
        n1 = n1 / 10;
        // count--;
    }
    if (sum == n2)
        printf("%d is a armstrong number.", n2);
    else
        printf("%d is not a armstrong number.", n2);
    return 0;
}