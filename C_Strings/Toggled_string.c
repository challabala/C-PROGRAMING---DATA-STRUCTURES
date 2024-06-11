#include <stdio.h>
void main()
{
    char s[100];
    printf("Enter the string:");
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
    }
    printf("\n Toglled strig: %s", s);
}
/* :::::::::::OUTPUT::::::::::::::
   Enter the string:cHALLA bALAJI

   Toglled strig: Challa Balaji
*/