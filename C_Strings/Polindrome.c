#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int flag;
    printf("Enter your string:");
    gets(s);
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("Polindrome.");
    else
        printf("Not polindrom.");
}