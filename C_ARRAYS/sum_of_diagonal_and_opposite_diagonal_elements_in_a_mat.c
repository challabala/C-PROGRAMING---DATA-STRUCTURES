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
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            if (i == j || i + j == r - 1)
            {
                sum = sum + a[i][j];
            }
        }
    }
    printf("Sum of two diagonal elements:%d", sum);
}
/*:::: OUTPUT :::::
Enter the mat elements:1 2 3 4 5 6 7 8 9
Given matrix is:
1 2 3
4 5 6
7 8 9
Sum of two diagonal elements:25

*/