#include <stdio.h>
int strong(int n);
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if (strong(n))
        printf("Given number is strong");
    else
        printf("Not strong number.");
}
int strong(int n)
{
    int d, f, s = 0, temp;
    temp = n;
    while (n > 0)
    {
        d = n % 10;
        f = 1;
        for (int i = 1; i <= d; i++)
        {
            f = f * i;
        }
        s = s + f;
        n = n / 10;
    }
    return s;
}