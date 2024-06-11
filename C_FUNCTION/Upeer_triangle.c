#include <stdio.h>
// Function prototype
void printUpperTriangle(int size, int matrix[size][size]);
int main()
{
    int size;
    // Input the size of the matrix
    printf("Enter the size of the matrix: ");
    scanf("%d", &size);
    int matrix[size][size];
    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Call the function to print the upper triangular matrix
    printf("\nUpper Triangular Matrix:\n");
    printUpperTriangle(size, matrix);
    return 0;
}
// Function definition to print the upper triangular matrix
void printUpperTriangle(int size, int matrix[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            printf("%d ", matrix[i][j]); // Print upper triangle elements
        }
        printf("\n"); // Move to the next row
    }
} /*::::::::::: OUTPUT :::::::::::
 Enter the size of the matrix: 3
 Enter the elements of the matrix:
 1 2 3 4 5 6 7 8 9
 Upper Triangular Matrix:
 1 2 3
 5 6
 9
 */