#include <stdio.h>
int main()
{
    int rows, i, j, c = 0;
    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    // Iterate through each row
    for (i = 0; i < rows; i++)
    {
        // Print numbers in each row
        for (j = 0; j <= i; j++)
        {
            printf("% c", c + 65);
            c++;
        }
        // Move to the next row
        printf("\n");
    }
    return 0;
}
