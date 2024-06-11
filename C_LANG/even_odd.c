#include <stdio.h>

int main()
{
    int num;

    // Get a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check even/odd using the ternary operator
    (num % 2 == 0) ? printf("%d is even", num) : printf("%d is odd", num);

    // Print the result

    return 0;
}
//*** OUTPUT ***
// Enter a number: 5
// 5 is odd