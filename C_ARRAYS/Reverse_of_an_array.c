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
    printf("The reverse of an array:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}