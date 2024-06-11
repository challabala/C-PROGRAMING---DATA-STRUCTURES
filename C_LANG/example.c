#include <stdio.h>
int prime(int n);
void main()
{
    int s, st;
    printf("enter thre numbers");
    scanf("%d%d", &s, &st);
    for (int i = s; i <= st; i++)
    {
        if (prime(i))
        {
            printf("%d ", i);
        }
    }
}
int prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 0; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}