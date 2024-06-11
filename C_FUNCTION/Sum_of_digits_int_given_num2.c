/*With Parameters and Without Return statement*/
#include <stdio.h>
void sum_digits(n); // prototype declaration.
void main()
{
    int n;
    printf("Enter n value:");
    scanf("%d", &n);
    sum_digits(n); // calling function.
}
void sum_digits(n) // called function.
{
    int d, sum = 0;
    while (n != 0)
    {
        d = n % 10;
        sum += d;
        n = n / 10;
    }
    printf("Sum of digits: %d", sum);
}
/*=== OUTPUT ===
  Enter the n value:6743
  Sum of digits: 20
*/