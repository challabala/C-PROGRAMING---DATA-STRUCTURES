#include <stdio.h>
int main()
{
    int rows, i, j, number = 1;
    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    // Iterate through each row
    for (i = 0; i < rows; i++){
        // Print numbers in each row
        for (j = 0; j <= i; j++){
            printf("%d ", number);
            number++;
        }
        // Move to the next row
        printf("\n");
    }
    return 0;
}
/* ############ OUTPUT ############
   Enter the number of rows: 6
   1 
   2 3 
   4 5 6 7 
   8 9 10 11 
   12 13 14 15 16 
   17 18 19 20 21 22 
*/
