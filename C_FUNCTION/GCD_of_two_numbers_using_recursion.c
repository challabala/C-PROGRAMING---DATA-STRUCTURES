#include <stdio.h>
int gcd(int a, int b);
void main()
{
    int c, d;
    printf("Enter the a,b values:");
    scanf("%d%d", &c, &d);
    printf("The GCD of %d and %d is %d", c, d, gcd(c, d));
}
int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    else
        return a;
}