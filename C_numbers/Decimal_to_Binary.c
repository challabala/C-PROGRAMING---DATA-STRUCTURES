#include <stdio.h>
#include <math.h>
int main()
{
    int decimal;
    printf("Enter a Decimal Number: ");
    scanf("%d", &decimal);

    int binary = 0;
    int reminder, temp = 1;

    while (decimal != 0)
    {
        reminder = decimal % 2;
        decimal = decimal / 2;
        binary = binary + reminder * temp;
        temp = temp * 10;
    }

    printf("The Binary Number is: %d", binary);
    return 0;
}
/* :::::::::::: OUTPUT ::::::::::::
    Enter a Decimal Number: 143
    The Binary Number is: 10001111
*/
