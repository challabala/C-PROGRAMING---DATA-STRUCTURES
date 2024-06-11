#include <stdio.h>
int main()
{
    int rows, i, j;
    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    // Iterate through each row
    for (i = 0; i < rows; i++){
        int number = 1;
        // Print spaces before each row
        for (j = 0; j < rows - i - 1; j++){
            printf(" ");
        }
        // Print numbers in each row
        for (j = 0; j <= i; j++){
            printf("%d ", number);
            number = number * (i - j) / (j + 1);
        }
        // Move to the next row
        printf("\n");
    }
    return 0;
}
/* ######### OUTPUT #########
Enter the number of rows: 7
        1 
       1 1 
      1 2 1 
     1 3 3 1 
    1 4 6 4 1 
   1 5 10 10 5 1 
  1 6 15 20 15 6 1 
*/
