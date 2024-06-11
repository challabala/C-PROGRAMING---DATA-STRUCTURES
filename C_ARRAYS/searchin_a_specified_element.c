#include <stdio.h>
void main()
{
    int n, key, i, flag = 0;
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
        if (key == a[i])
        {

            printf("element found at %d position", i + 1);
            flag = 1; // element is found
            break;
        }
    }
    if (!flag) // not found
    {
        printf("Element is not found");
    }
}
