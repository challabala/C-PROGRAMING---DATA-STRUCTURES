#include <stdio.h>
void main()
{
    int i, j, r1, c1, r2, c2;
    printf("Enter the order of the mat1:");
    scanf("%d%d", &r1, &c1);
    int mat1[r1][c1];
    printf("Enter the mat1 elements:");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Given matrix1 is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the order of the mat2:");
    scanf("%d%d", &r2, &c2);
    int mat2[r2][c2];
    printf("Enter the mat2 elements:");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Given matrix2  is:\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    if (c2 != r1)
    {
        printf("matrix multiplication is not possible.");
    }
    else
    {
        int product[r1][c2];
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                product[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    product[i][j] = 0;
                    product[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        printf("Multiplied matrix is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
    }
}
