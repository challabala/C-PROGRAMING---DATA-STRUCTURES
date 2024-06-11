#include <stdio.h>
#include <string.h>
void main()
{
    char *p = "hello everyone";
    printf("String p:%s\n", p);
    char *q;
    printf("Copy the content of p into q....\n");
    q = p;
    printf("String q:%s\n", q);
    char *r;
    printf("Copy the content of q into r...\n");
    r = q;
    printf("String r:%s\n", r);
}