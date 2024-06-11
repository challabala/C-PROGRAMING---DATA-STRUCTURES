#include <stdio.h>
void main()
{
    int n, key, i, d = 0, flag;
    printf("Enter the size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the key element:");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        flag = 0;
        for (j = 1; i < n; j++)
        {
            if (a[j] == a[i])
            {
                flag = 1;
                break;
            }
        }
    }
}