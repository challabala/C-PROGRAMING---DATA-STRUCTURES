#include <stdio.h>
int main()
{
    int arr[100];
    int size, i, j;
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    // Print repeating elements
    printf("Repeating elements in the array:\n");
    for (i = 0; i < size; i++){
        for (j = i + 1; j < size; j++){
            if (arr[i] == arr[j]){
                printf("%d\n", arr[i]);
                break;
            }
        }
    }
    return 0;
}
/*:::::::::::::OUTPUT::::::::::::
Enter the size of the array: 10
Enter the elements of the array:
1 1 1 2 3 4 4 5 5 6 7
Repeating elements in the array:
1
1
4
5
*/