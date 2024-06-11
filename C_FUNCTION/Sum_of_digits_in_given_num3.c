/*Without Parameters and With Return statement*/
#include <stdio.h>
int sum_digits(); // prototype declaration.
void main()
{
    printf("Sum of digit:%d", sum_digits()); // calling function.
}
int sum_digits() // called function.
{
    int d, n, sum = 0;
    printf("Enter n value:");
    scanf("%d", &n);
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