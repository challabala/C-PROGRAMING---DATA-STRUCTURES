#include <stdio.h>

#include <string.h>

int main()
{
    char str[1000], rev[1000];
    printf("Enter your string:");
    gets(str);
    int i, j, count = 0;
    printf("String Before Reverse: %s", str);
    // finding the length of the string
    while (str[count] != '\0')
    {
        count++;
    }
    j = count - 1;
    // reversing the string by swapping
    for (i = 0; i < count; i++)
    {
        rev[i] = str[j];
        j--;
    }
    printf("String After Reverse: %s", rev);
    return 0;
}