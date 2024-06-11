#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // printf("The sorting  of an array:\n");
    int sum_neg = 0;
    int sum_pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            sum_pos += a[i];
        }
        else
        {
            sum_neg += a[i];
        }
    }
    printf("The sum of posive elements:%d\n", sum_pos);
    printf("The sum of negetive elements:%d\n", sum_neg);
}