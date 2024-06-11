#include <stdio.h>
int Second_large(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("Second largest digit:%d", Second_large(n));
}
int Second_large(int n)
{
    int d, l1 = -1, l2 = -1;
    int *ptr = &n;
    while (*ptr != 0)
    {
        d = *ptr % 10;
        if (d > l1)
        {
            l2 = l1;
            l1 = d;
        }
        else if (d > l2 && d < l1)
        {
            l2 = d;
        }
        *ptr /= 10;
    }
    return l2;
}