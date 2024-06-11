#include <stdio.h>
void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    int t = num;
    while (num > 9)
    {
        int sum = 0;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    if (num == 1)
        printf("%d is a magic number.", t);
    else
        printf("%d is not magic number.", t);
}