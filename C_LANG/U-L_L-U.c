#include <conio.h>
void main()
{
    char u, l;
    int a;
    printf(" Enter the Upper Case Character: ");
    scanf(" %c", &u);
    a = u + 32;
    printf(" %c character in Lower case is: %c", u, a);
    printf(" \n Enter the Lower Case Character: ");
    scanf(" %c", &l);
    a = l - 32;
    printf(" %c character in the Upper case is: %c", l, a);
}