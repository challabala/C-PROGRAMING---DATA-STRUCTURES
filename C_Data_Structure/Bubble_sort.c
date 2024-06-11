#include <stdio.h>

// Prototypes for Functions to perform bubble sort
void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main()

{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
/*
-Algorithm:

1.Start from the first element of the array.
2.Compare the current element with the next element.
3.If the current element is greater than the next element, swap them.
4.Move to the next element and repeat step 2 until the end of the array.
5.Repeat steps 1 to 4 for the remaining unsorted part of the array.
6.The process continues until no more swaps are needed (i.e., the array is sorted).
*/
// Function to perform bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Function to print an array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
/*
Enter number of elements: 5
Enter 5 integers:
64
34
25
12
22

Unsorted array: 64 34 25 12 22 
Sorted array: 12 22 25 34 64 

*/