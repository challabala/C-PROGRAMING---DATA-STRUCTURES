#include <stdio.h>
#include <math.h>
int main()
{
    int binary;
    printf("Enter Binary number:");
    scanf("%d", &binary);
    int decimal = 0, temp = 0, reminder;
    while (binary != 0)
    {
        reminder = binary % 10;
        binary = binary / 10;
        decimal = decimal + reminder * pow(2, temp);
        temp++;
    }

    printf("Decimal number is: %d", decimal);
    return 0;
}
/*::::::::::: OUTPUT ::::::::::
  Enter Binary number:01010101
  Decimal number is: 85
*/