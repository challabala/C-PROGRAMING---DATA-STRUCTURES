#include <stdio.h>
void main()
{

    int *ptr = NULL;
    if (ptr == NULL)
        printf("Pointer does not pointing anything.");
    else
        printf("The value pointed by the pointer is %d", *ptr);
}