#include <stdio.h>
void main()
{
    int number;
    scanf("%d", &number);
    printf("Enter the number:%d \n", number);
    if (number > 0)
    {
        printf("%d is positive number.", number);
    }
    else if (number < 0)
    {
        printf("%d is negetive number.", number);
    }
    else
    {
        printf("zero");
    }
}
// OUPUT:
// Enter the number:8
// 8 is positive number