#include <stdio.h>
int main()
{
    int arr[100];
    int size, i, j;
    int isRepeated;
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    // Check each element for repetition
    printf("Non-repeating elements in the array:\n");
    for (i = 0; i < size; i++){
        isRepeated = 0; // Flag to indicate if the element is repeated
        for (j = 0; j < size; j++){
            if (i != j && arr[i] == arr[j]){
                // If the element is found again in the array, it is repeated
                isRepeated = 1;
                break;
            }
        }
        // If the element is not repeated, print it
        if (!isRepeated){
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}
/* :::::::::::::: OUTPUT :::::::::::::::::
Enter the size of the array: 10
Enter the elements of the array:
1 2 3 3 4 4 5 6 6 7 
Non-repeating elements in the array:
1
2
5
7  */