#include <stdio.h>
void main()
{
    int x, y, *a, *b;
    printf("Enter x and y values:");
    scanf("%d%d", &x, &y);
    a = &x;
    b = &y;
    printf("Adiition:%d", *a + *b);
}