#include <stdio.h>
void main()
{
    int n, sum = 0, digit, temp, i, f;
    printf("Enter the number");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        digit = n % 10;
        f = 1;
        for (i = 1; i <= digit; i++)
        {
            f = f * i;
        }
        sum = sum + f;
        n = n / 10;
    }
    if (temp == sum)
        printf("Strong Number");
    else
        printf("Not an strong number.");
}