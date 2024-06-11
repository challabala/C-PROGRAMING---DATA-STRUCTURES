#include <stdio.h>
void main()
{
    int i, j, r, c, sum = 0;
    printf("Enter the order of the mat:");
    scanf("%d%d", &r, &c);
    int a[r][c];
    printf("Enter the mat elements:");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Given matrix is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    sum = a[0][0] + a[r - 1][0] + a[0][c - 1] + a[r - 1][c - 1];
    printf("Sum of corner elements:%d", sum);
}
/* ::: OUTPUT :::
Given matrix is:
1 2 3 4
5 6 7 8
9 1 2 3
Sum of corner elements:17
*/