#include <stdio.h>

// Function prototype to perform insertion sort
void insertionSort(int arr[], int n) ;

// Function prototype to print an array
void printArray(int arr[], int n) ;

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: ");
    printArray(arr, n);

    insertionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
// Function to perform insertion sort
/*Algorithm:

1.Start from the second element (index 1) since the first element is trivially sorted.
2.Compare the current element with the elements in the sorted portion of the array.
3.Shift all the elements in the sorted portion that are greater than the current element to the right.
4.Insert the current element into its correct position.
5.Repeat steps 2-4 for each element until the array is sorted.
*/
void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
// Function to print an array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
Enter number of elements: 7
Enter 7 integers:
55
22
44
11
99
15
1
Unsorted array: 55 22 44 11 99 15 1
Sorted array: 1 11 15 22 44 55 99
*/