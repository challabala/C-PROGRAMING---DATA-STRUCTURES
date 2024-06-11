#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter the string:");
    gets(str);
    int length = 0;
    // Loop until the null character is encountered
    while (str[length] != '\0')
    {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}
/* :::::::::::::: OUTPUT ::::::::::::::::
   Enter the string:hi how are you
   Length of the string: 14
*/
