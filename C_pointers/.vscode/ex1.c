#include <stdio.h>
void main()
{
    int b = 20, *a = 30;
    a = &b;
    printf("%u\n", a);
    printf("%u\n", b);
    printf("%u\n", *a);
    printf("%p\n", a);
    printf("%p\n", b);
    printf("%p\n", *a);
}