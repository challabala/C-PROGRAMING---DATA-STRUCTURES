#include <stdio.h>
#include <string.h>
void main()
{

    char s[100];
    printf("Enter the string:");
    scanf("%s", s);
    char *p = s;
    printf("Your string is:%s", p);
}