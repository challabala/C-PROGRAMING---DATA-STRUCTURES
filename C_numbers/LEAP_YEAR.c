#include <stdio.h>
void main()
{
    int y;
    printf("ENTER THE YEAR:");
    scanf("%d", &y);
    if (y % 400 == 0 && (y % 4 == 0 || y % 100 != 0))
        printf("%d is a leap year.", y);
    else
        printf("NOT A LEAP YEAR.");
}