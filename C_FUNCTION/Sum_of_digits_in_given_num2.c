/*With Parameters and With Return statement*/
#include <stdio.h>
int sum_digits(int n); // prototype declaration.
void main()
{
    int n, result;
    printf("Enter n value:");
    scanf("%d", &n);
    result = sum_digits(n);
    printf("Sum of digit:%d", result); // calling function.
}
int sum_digits(int n) // called function.
{
    int d, sum = 0;
    while (n != 0)
    {
        d = n % 10;
        sum += d;
        n = n / 10;
    }
    return sum;
}
/*=== OUTPUT ===
  Enter the n value:6743
  Sum of digits: 20
*/