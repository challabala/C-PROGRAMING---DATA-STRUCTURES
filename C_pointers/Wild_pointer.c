#include <stdio.h>
void main()
{
    int *ptr;
    if (ptr)
    {
        printf("ptr is not NULL \n");
        *ptr = 10;
        printf("*ptr:%d\n", *ptr);
    }
}
