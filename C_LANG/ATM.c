#include <stdio.h>
void main()
{
    int amount, five, two, one;
    printf("Enter the amount:");
    scanf("%d", &amount);
    if (amount % 100 != 0)
        printf("Amount must be multiple of hundred");
    else
    {
        if (amount >= 500)
        {
            five = amount / 500;
            printf("500-%d\n", five);
            amount = amount - (five * 500);
        }
        if (amount >= 200)
        {
            two = amount / 200;
            printf("200-%d\n", two);
            amount = amount - (two * 200);
        }
        if (amount >= 100)
        {
            one = amount / 100;
            printf("100-%d\n", one);
            amount = amount - (two * 100);
        }
    }
}
/* ** OUTPUT **
Enter the amount:1800
500-3
200-1
100-1
*/