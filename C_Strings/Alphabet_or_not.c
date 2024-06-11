#include <stdio.h>
void main()
{
    char c;
    printf("Enter the character:");
    scanf("%c", &c);
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);
}