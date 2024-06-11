#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/* ::: OUTPUT :::
Enter the number of rows:5
     *
    ***
   *****
  *******
 *********

*/