#include <stdio.h>

int main()
{
    int num1, num2, num3, largest;

    // Get three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the Greatest using the ternary operator
    Greatest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Print the Greatest number
    printf("The Greatest Number is: %d\n", Greatest);

    return 0;
}