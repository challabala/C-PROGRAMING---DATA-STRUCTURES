#include <stdio.h>
void main()
{
    int a = 10;
    float pi = 3.14;
    void *ptr;
    ptr = &a;
    printf("The value is %d \n", *(int *)ptr);
    ptr = &pi;
    printf("The value is %f \n", *(float *)ptr);
}