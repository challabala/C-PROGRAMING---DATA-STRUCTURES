#include <stdio.h>
void main()
{
    int n, i, sum, digit, count = 0;
    printf("Enter the size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d  ", a[i]);
        }
    }
}
