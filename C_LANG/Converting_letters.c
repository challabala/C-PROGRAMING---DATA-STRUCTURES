#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the charscter:");
    scanf("%c", &ch);
    if (ch >= 65 && ch < 90)
    {
        printf("%c", ch + 32);
    }
    else
    {
        printf("%c", ch - 32);
    }
}
/*OUTPUT:Enter the charscter:b
B
*/