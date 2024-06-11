#include <stdio.h>
void main()
{
    int n, i;
    printf("Enter the size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements reverse order:\n");
    for (i = n; i >= 0; i--)
    {
        printf("%d  ", &a[i]);
    }
}
