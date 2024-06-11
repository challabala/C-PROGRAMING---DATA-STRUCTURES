#include <stdio.h>
void main()
{
    int r1, c1, r2, c2, re;
    printf("Enter the order of mat1:");
    scanf("%d %d", r1, c1);
    int m1[r1][c1];
    printf("Enter the elements of mat1:");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Matrix 1: ");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the order of mat2:");
    scanf("%d %d", r2, c2);
    int m2[r2][c2];
    printf("Enter the elements of mat1:");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &m2[i][j]);
        }
    }
    printf("Matrix 2: ");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("\n");
    }
    if (r1 != c2)
    {
        printf("Matrix multiplication is not posssible.");
    }
    else
    {
        int re[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                re[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    re[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
        printf("multiplication of matrix:");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d", re[i][j]);
            }
        }
        printf("\n");
    }
}