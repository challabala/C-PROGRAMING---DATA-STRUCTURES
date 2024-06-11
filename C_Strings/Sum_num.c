#include <stdio.h>
int main()
{
    // Initializing variables.
    char str[100];
    printf("Enter your string:");
    gets(str);
    int i, sum = 0;

    // Iterating each character through for loop.
    for (i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9')) // Checking for numeric characters.
        {

            sum += (str[i] - '0'); // Adding numeric characters.
        }
    }
    // Printing result.
    printf("Sum of all digits:\n%d", sum);
    return 0;
} /*::::::::::::OUTPUT:::::::::::::
    Enter your string:Balaji1436@#786
    Sum of all digits:35
 */