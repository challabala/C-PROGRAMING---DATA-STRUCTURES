#include <stdio.h>
void main()
{
    int n, i, j, sum = 0, digit, count, flag;
    printf("Enter the size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 2; i < n; i++)
    {
        flag = 1;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            sum = sum + a[i];
        }
    }
    printf("Sum of elements at prime indices = %d", sum);
}
