#include <stdio.h>
void main()
{
    int n = 5;
    // printf("enter the no of rors:");
    // scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}