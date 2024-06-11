#include <stdio.h>
int largest(int b[], int size);
void main()
{
    int n, i;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Largest element in array:%d", largest(a, n));
}
int largest(int b[], int size)
{
    int large, i;
    large = b[0];
    for (i = 0; i < size; i++)
    {
        if (large < b[i])
        {
            large = b[i];
        }
    }
    return large;
}