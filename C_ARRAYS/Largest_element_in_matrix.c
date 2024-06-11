#include <stdio.h>

int main()
{
    int r, c, i, j, large;
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
    large = a[0][0];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] > large)
            {
                large = a[i][j];
            }
        }
    }
    printf("Largest element in matrix: %d\n", large);
    return 0;
}/*
######:::#### OUTPUT####:::######
Enter the order of the matrix: 3 3
Enter the elements of the matrix:
1 2 3 4 5 6 7 8 9
1 2 3 
4 5 6 
7 8 9
Largest element in matrix: 9
*/
