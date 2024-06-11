#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char*)malloc(20 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    strcpy(str, "Hello, World!");
    printf("String: %s\n", str);
    free(str);
    return 0;
}
//######## OUTPUT ##########
//String: Hello, World!
