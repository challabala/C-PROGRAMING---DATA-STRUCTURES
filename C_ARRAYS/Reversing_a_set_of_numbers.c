#include <stdio.h>
void main()
{
    int n, i, sum, digit;
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
        sum = 0;
        while (a[i] > 0)
        {
            digit = a[i] % 10;
            sum = sum * 10 + digit;
            a[i] = a[i] / 10;
        }
        printf("%d  ", sum);
    }
}
