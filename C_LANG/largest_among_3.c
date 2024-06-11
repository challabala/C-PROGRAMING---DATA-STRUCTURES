#include <stdio.h>

int main()
{
    int num1, num2, num3, largest;

    // Get three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest using the ternary operator
    largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // Print the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}
//*** OUTPUT ***
// Enter three numbers: 23 34 54
// The largest number is: 54