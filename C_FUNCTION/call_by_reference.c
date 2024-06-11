#include <stdio.h>
void swap(int *a, int *b);
void main()
{
    int a, b;
    printf("Enter the values of a and b:");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("The a b values in main: a=%d b=%d", a, b);
}
void swap(int *p, int *q)
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
    printf("After swaping :a=%d b=%d \n", *p, *q);
} /*
 ::::::::::::OUTPUT:::::::::::::
 Enter the values of a and b:10 20
 After swaping :a=20 b=10
 The a b values in main: a=20 b=10
 */