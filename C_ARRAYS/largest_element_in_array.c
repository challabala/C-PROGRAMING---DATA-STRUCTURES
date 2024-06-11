#include <stdio.h>
void main()
{
    int n, large;
    printf("Enter the size of an array:");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    large = a[0];
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
        if (large < a[i])
        {
            large = a[i];
        }
    }
    printf("largest element in array is %d", large);
}