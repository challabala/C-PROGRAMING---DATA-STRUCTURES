#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int i, j;
    printf("Enter the string:");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        while (!(s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == '\0')
        {
            for (j = i; s[j] != '\0'; j++)
            {
                s[j] = s[j + 1];
            }
            s[j] = '\0';
        }
    }
    printf("After removing the non alphabets:\n");
    puts(s);
}