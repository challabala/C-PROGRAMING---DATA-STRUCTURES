#include <stdio.h>

void selectionSort(int arr[], int n);

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

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
/*Algorithm:

1.Start with the first element as the minimum.
2.Compare this minimum with the rest of the elements.
3.If a smaller element is found, set the new minimum.
4.Swap the minimum with the first element.
5.Move the boundary between the sorted and unsorted parts by one element to the right.
6.Repeat steps 1-5 for each element until the entire array is sorted.*/

// Function to perform selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;

    // One by one move the boundary of the unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in the unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
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
/*:::::::::::: OUTPUT :::::::::::::
Enter number of elements: 6             
Enter 6 integers:
33 22 66 11 77 44
Unsorted array: 33 22 66 11 77 44 
Sorted array: 11 22 33 44 66 77 
*/
