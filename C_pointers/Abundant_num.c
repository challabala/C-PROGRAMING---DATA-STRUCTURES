#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    if (sum > num)
    {
        printf("%d is an Abundant Number\n", num);
        printf("Num: %d\nSum: %d\nAbundance: %d", num, sum, (sum - num));
    }
    else
    {

        printf("%d is not a Abundant Number", num);
    }
}
/* :::::::::::: OUTPUT :::::::::::::
  Enter the number:18
  18 is an Abundant Number
  Num: 18
  Sum: 21
  Abundance: 3
*/