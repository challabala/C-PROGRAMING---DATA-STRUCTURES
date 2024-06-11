#include <stdio.h>
void main()
{
    int n1, n2, max, t;
    printf("Enter the n1 and n2 values:");
    scanf("%d%d", &n1, &n2);
    max = (n1 > n2) ? n1 : n2;
    t = max;
    while (1)
    {
        if (t % n1 == 0 && t % n2 == 0)
        {
            printf("LCM of %d ,%d is %d", n1, n2, t);
            break;
        }
        t += max;
    }
}