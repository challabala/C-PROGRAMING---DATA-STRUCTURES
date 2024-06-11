#include <stdio.h>
int main()
{
    int n, sum = 0, i, fact = 1;
    printf("Enter the range of number:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
        sum += fact;
    }

    printf("The sum of the series = %d", sum);
}
/* ::::::::::::: OUTPUT ::::::::::::::::
   Enter the range of number:6
   The sum of the series = 873
*/