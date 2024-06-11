#include <stdio.h>
int main()
{
    int n, i, large, small;
    printf("Enter the size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    small = large = a[0];
    for (i = 0; i < n; i++)
    {
        if (large <= a[i])
        {
            large = a[i];
        }
        if (small > a[i])
        {
            small = a[i];
        }
    }
    printf("Largest element is:%d\n", large);
    printf("Smallest element is:%d\n", small);
    printf("Sum of smallest and lergest elements:%d\n", small + large);
    return 0;
}
