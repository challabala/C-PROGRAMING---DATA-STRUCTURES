#include <stdio.h>
#include <string.h>
void main()
{
    char a[20] = "challabalaji";
    char b[20], c[20] = "BALAJI", d = 'b';
    printf("The length of string:%d\n", strlen(a));
    printf("Copying the ch to ch1:%s\n", strcpy(b, a));
    printf("The cancatination of ch and ch1:%s\n", strcat(a, b));
    printf("The comparing of a and b strings:%d\n", strcmp(a, b));
    printf("The reverse of string a :%s\n", strrev(a));
    printf("The length of string:%d\n", strlen(a));
    printf("The lower case of string c:%s\n", strlwr(c));
    printf("The upper case of string b :%s\n", strupr(b));
    printf("Is alpha :%d\n", isalpha(d));
    printf("Is digit :%d\n", isdigit(d));
}
/* is functions (commonly used with characters):

These functions check if a character belongs to a specific category and typically return non-zero for true and zero for false.

isalpha(ch): Checks if ch is an alphabet (a-z or A-Z).
isdigit(ch): Checks if ch is a digit (0-9).
isalnum(ch): Checks if ch is alphanumeric (alphabet or digit).
isspace(ch): Checks if ch is a whitespace character (space, tab, newline, etc.).
isupper(ch): Checks if ch is an uppercase alphabet.
islower(ch): Checks if ch is a lowercase alphabet.
*/