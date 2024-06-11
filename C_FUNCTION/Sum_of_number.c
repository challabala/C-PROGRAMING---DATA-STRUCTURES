#include <stdio.h>
int sum(int n); 
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    printf("sum is %d", sum(n));
}
int sum(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}
