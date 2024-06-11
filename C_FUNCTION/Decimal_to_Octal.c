#include <stdio.h>
int decimalToOctal(int decimal);

int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Octal equivalent: %d\n", decimalToOctal(decimal));
    return 0;
}

int decimalToOctal(int decimal)
{
    int octal = 0, rem, place = 1;
    while (decimal > 0)
    {
        rem = decimal % 8;
        octal += rem * place;
        place *= 10;
        decimal /= 8;
    }
    return octal;
}
