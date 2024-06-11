#include <stdio.h>
void main()
{
    char ch;
    int a, b, sum;
    do
    {
        printf("Enter the a , b valuse:");
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("SUM :%d \n", sum);
        printf("Do you want to repeat(y/n):");
        scanf(" %c ", &ch);
    } while (ch == 'y' || ch == 'Y');
}