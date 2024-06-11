#include <stdio.h>
void swap(int a, int b);
void main()
{
    int a, b;
    printf("Enter the values of a and b:");
    scanf("%d%d", &a, &b);
    swap(a, b);
    printf("The a b values in main: a=%d b=%d", a, b);
}
void swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
    printf("After swapping :a=%d b=%d \n", a, b);
} /*
 :::::::OUTPUT:::::::
 Enter the values of a and b:10 20
 After swapping :a=20 b=10
 The a b values in main: a=10 b=20
 */