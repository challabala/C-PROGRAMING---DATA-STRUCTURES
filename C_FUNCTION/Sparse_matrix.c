#include <stdio.h>
// Function prototype
int isSparse(int size, int matrix[size][size]);
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
    // Call the function to check if the matrix is sparse
    if (isSparse(size, matrix))
    {
        printf("\nThe given matrix is a sparse matrix.\n");
    }
    else
    {
        printf("\nThe given matrix is not a sparse matrix.\n");
    }
    return 0;
}
// Function definition to check if the matrix is sparse
int isSparse(int size, int matrix[size][size])
{
    int countZeros = 0;
    int totalCount = size * size;
    printf("Given matrix:\n");
    // Count the number of zeros in the matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] == 0)
            {
                countZeros++;
            }
        }
        printf("\n");
    }
    // If more than half of the elements are zeros, it is a sparse matrix
    if (countZeros > totalCount / 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
} /************* OUTPUT ***************
 Enter the size of the matrix: 4
 Enter the elements of the matrix:
 1 2 3 4 0 0 0 0 3 0 0 0 0 0 0 5 0
 Given matrix:
 1 2 3 4
 0 0 0 0
 3 0 0 0
 0 0 0 5
 The given matrix is a sparse matrix.
 */