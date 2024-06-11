#include <stdio.h>
int main()
{
    int r, c, i, j;
    printf("Enter the order of the matrix: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int j = 0; j < c; j++)
    {
        sum += a[0][j];
    }
    for (int j = 0; j < c; j++)
    {
        sum += a[r - 1][j];
    }
    for (int i = 1; i < r - 1; i++)
    {
        sum += a[i][0];
    }
    for (int i = 1; i < r - 1; i++)
    {
        sum += a[i][c - 1];
    }
    printf("Sum of border elements: %d\n", sum);
    return 0;
} /*
 :::::: OUTPUT :::::::
 Enter the order of the matrix: 3 3
 Enter the elements of the matrix:
 1 2 3 4 5 6 7 8  9
 1 2 3
 4 5 6
 7 8 9
 Sum of border elements: 40
 */
