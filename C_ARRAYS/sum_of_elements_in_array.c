#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("Enter the size of an array:");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("The sum is:%d", sum);
}