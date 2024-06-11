#include <stdio.h>
void strong();
void main()
{
    strong();
}
void strong()
{
    int num, digit, fact, sum = 0, temp;
    printf("Enter the number:");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        fact = 1;
        for (int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if (temp == sum)
    {
        printf("%d is a strong number", temp);
    }
    else
    {
        printf("%d is not strong number.", temp);
    }
} /* :::: OUTPUT ::::
 Enter the number:145
 145 is a strong number
 */