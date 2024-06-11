#include <stdio.h>
void main()
{
    int n, i, j;
    printf("Enter the no of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i + 1; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
/* ::: OUTPUT :::
Enter the no of rows:5
     *
    * *
   * * *
  * * * *
 * * * * *

*/