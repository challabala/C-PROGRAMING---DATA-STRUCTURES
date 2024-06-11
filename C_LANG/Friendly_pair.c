#include <stdio.h>
int main()
{
    int num1, num2, sum1 = 0, sum2 = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for (int i = 1; i < num1; i++)
    {
        if (num1 % i == 0)
            sum1 += i;
    }
    for (int i = 1; i < num2; i++)
    {
        if (num2 % i == 0)
            sum2 += i;
    }
    if (sum1 / num1 == sum2 / num2)
        printf("%d and %d form a friendly pair.\n", num1, num2);
    else
        printf("%d and %d do not form a friendly pair.\n", num1, num2);
    return 0;
}
/*:::::: OUTPUT::::::
Enter two numbers: 6 28
6 and 28 form a friendly pair.
*/