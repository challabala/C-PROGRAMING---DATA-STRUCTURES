#include <stdio.h>
#include <string.h>
void main()
{

    char s[100];
    printf("Enter the string:");
    scanf("%s", s);
    int i = 0, count = 0;
    while (s[i] != NULL)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            count++;
        }
        i++;
    }
    printf("The no of vowels:%d", count);
}