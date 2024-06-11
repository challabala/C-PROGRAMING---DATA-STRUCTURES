
#include <stdio.h>
#include <math.h>
int main()
{
    int start, stop, n, n1, n2, digit, count = 0, sum = 0;
    printf("Enter the start and stop: ");
    scanf("%d %d", &start, &stop);
    int i = start;
    while (i <= stop)
    {
        n = i;
        n1 = n;
        n2 = n;
        while (n > 0)
        {
            n = n / 10;
            count++;
        }
        while (n1 > 0)
        {
            digit = n1 % 10;
            sum = sum + pow(digit, count);
            n1 = n1 / 10;
            count--;
        }
        if (sum == n2)
            printf("%d ", n2);
        i++;
    }

    return 0;
}