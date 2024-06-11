#include <stdio.h>
void main()
{
    int n, k, i;
    printf("Enter the size of an array:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("Enter the key value:");
    scanf("%d", k);
    int flag = 0;
    for (i = 0; i < n; i++)
    {
        if (k == a[i])
        {
            printf("Element found at %d", i + 1);
            flag = 1;
            break;
        }
    }
    if (!flag)
    {
        printf("Element no found at");
    }
}