#include <stdio.h>
int add(int *p, int *q);
void main()
{
    int a, b;
    printf("Enter the a,b values:");
    scanf("%d%d", &a, &b);
    printf("Sum : %d", add(&a, &b));
}
int add(int *p, int *q)
{
    return *p + *q;
}