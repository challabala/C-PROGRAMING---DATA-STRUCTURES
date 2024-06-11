#include <stdio.h>
void main()
{
    int a = 10, b = 20, *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("\np1 is :%u", p1);
    p1++;
    printf("\np1++ is :%u", p1);
    p1--;
    printf("\np1-- is :%u", p1);

    printf("\np2 is :%u", p2);
    printf("\np2+2 is :%u", p2 + 2);
    printf("\np2-2 is :%u", p2 - 2);
}