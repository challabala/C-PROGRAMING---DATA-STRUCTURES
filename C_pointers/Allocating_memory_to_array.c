#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("Array[%d] : %d \n", i,arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
/*******OUTPUT*********
Array[0] : 1 
Array[1] : 2
Array[2] : 3
Array[3] : 4
Array[4] : 5
*/
