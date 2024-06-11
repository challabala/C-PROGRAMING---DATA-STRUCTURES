#include <stdio.h>
int sum(int x, int y);
void main()
{
    int (*fp)(int, int);
    fp = &sum;
    int s = fp(10, 20);
    printf("Sum is %d", s);
}
int sum(int x, int y)
{
    return x + y;
}