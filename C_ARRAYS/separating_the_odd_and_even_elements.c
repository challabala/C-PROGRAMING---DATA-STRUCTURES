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
    printf("Even:");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d \n", a[i]);
        }
    }
    printf("Odd:");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d ", a[i]);
        }
    }
}