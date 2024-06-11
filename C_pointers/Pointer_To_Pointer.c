#include <stdio.h>
void main()
{
    int num = 10;
    int *ptr1 = &num;
    int **ptr2 = &(ptr1);
    printf("value of num %d\n", ptr2);
    printf("value of num %d\n", *ptr2);
    printf("value of num %d\n", **ptr2);
    printf("value of num %d\n", ptr1);
    printf("value of num %d\n", *ptr1);
}