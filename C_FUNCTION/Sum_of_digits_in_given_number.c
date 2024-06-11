/*Without Parameters and Without Return statement*/
#include <stdio.h>
void sum_digits(); // prototype declaration.
void main()
{
    sum_digits(); // calling function.
}
void sum_digits() // called function.
{
    int n, d, sum = 0;
    printf("Enter the n value:");
    scanf("%d", &n);
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