#include <stdio.h>
void main()
{
    int n, small;
    printf("Enter the size of an array:");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    small = a[0];
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
        if (small >= a[i])
        {
            small = a[i];
        }
    }
    printf("Smallest element in array is %d", small);
}