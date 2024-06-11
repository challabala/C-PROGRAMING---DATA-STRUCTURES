#include <stdio.h>

// Define a union with various types of members
union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;
    printf("size:%d\n", sizeof(data));
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "Hello");
    printf("data.i: %d\n", data.i);
    printf("data.f: %f\n", data.f);
    printf("data.str: %s\n", data.str);

    return 0;
}
