#include <stdio.h>

int main()
{
    int a = 10;
    int  *ptr1,**ptr2;
    ptr1 = &a;
    *ptr2 = &ptr1;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",ptr1);
    printf("%d\n",&ptr1);
    printf("%d\n",*ptr1);
    printf("%d\n",ptr2);
    printf("%d\n",&ptr2);
    printf("%d\n",&(*ptr2));
    printf("%d\n",&(**ptr2));
    printf("%d\n",*ptr2);
    printf("%d\n",**ptr2);
}
/*{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr[5] = &arr;

    // Accessing elements using the pointer
    for (int i = 0; i < 5; i++)
    {
        printf("%u", ptr[i]);
    }

    return 0;
}*/

/*#include <stdio.h>
void main()
{

   /* int *a = 30;
    void *b = 30;
    printf("%d",(*a+*b));*/

/*printf("value of b %p:%p %p \n", b);
printf("value of a %p:%p\n", a);
printf("value of b %u:%u\n", b);
printf("value of a %u:%u\n", a);
printf("value of a :%d\n", a);
printf("value of b :%d\n", b);
printf("value of a :%d\n", &a);
printf("value of b :%d\n", &b);
}*/