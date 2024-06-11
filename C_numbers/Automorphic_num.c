#include <stdio.h>
#include <math.h>
void main()
{
    int n, s, c = 0, t;
    printf("Enter the number:");
    scanf("%d", &n);
    t = n;
    s = pow(n, 2);
    while (n != 0)
    {
        n /= 10;
        c++;
    }
    int o = c;
    int n2 = (n / ()) % 10;
    if (t == n2)
        printf("%d is an Automorphic number.", t);
    else
        printf("Not an automarphic number.");
}