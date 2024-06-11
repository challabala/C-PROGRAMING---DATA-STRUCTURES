#include <stdio.h>
void main()
{
    int s, st;
    printf("Enter the start and stop values:");
    scanf("%d %d", &s, &st);
    for (int i = s; i <= st; i++)

    {
        int n = i, t, d, s = 0, fact;
        t = n;
        while (n > 0)
        {
            d = n % 10;
            fact = 1;
            for (int i = 1; i <= d; i++)
            {
                fact = fact * i;
            }
            s += fact;
            n = n / 10;
        }

        if (s == t)
        {
            printf("%d ", t);
        }
    }
}
