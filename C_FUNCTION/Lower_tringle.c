#include <stdio.h>
// Function prototype
void printLowerTriangle(int size, int matrix[size][size]);
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
    // Call the function to print the lower triangular matrix
    printf("\nLower Triangular Matrix:\n");
    printLowerTriangle(size, matrix);
    return 0;
}
// Function definition to print the lower triangular matrix
void printLowerTriangle(int size, int matrix[size][size])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", matrix[i][j]); // Print lower triangle elements
        }
        printf("\n"); // Move to the next row
    }
} /*######### OUTPUT #########
 Enter the size of the matrix: 3
 Enter the elements of the matrix:
 1 2 3 4 5 6 7 8 9
 Lower Triangular Matrix:
 1
 4 5
 7 8 9
 */