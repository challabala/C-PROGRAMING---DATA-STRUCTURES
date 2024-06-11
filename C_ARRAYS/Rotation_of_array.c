#include <stdio.h>
void main()
{
    int n, sum = 0, temp, d = 2;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < d; i++)
    {
        int temp = a[0];
        for (int j = 0; j < n; j++)
        {
            a[j] = a[j + 1];
        }
        a[n - 1] = temp;
    }

    printf("The rotation of an array:\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}