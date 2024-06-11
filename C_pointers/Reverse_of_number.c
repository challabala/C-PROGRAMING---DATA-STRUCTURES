#include <stdio.h>
int Reverse(int n);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("Reverse of given number:%d", Reverse(n));
}
int Reverse(int n)
{
    int d, re = 0;
    int *ptr = &n;
    while (*ptr != 0)
    {
        d = *ptr % 10;
        re = d + re * 10;
        *ptr /= 10;
    }
    return re;
}