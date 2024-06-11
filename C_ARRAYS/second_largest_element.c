#include <stdio.h>
void main()
{
    int n, large, second_largest;
    printf("Enter the size of an array:");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    large = a[0];
    second_largest = a[1];
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
        if (large < a[i])
        {
            second_largest = large;
            large = a[i];
        }
        else if (a[i] > second_largest && a[i] != large)
        {
            second_largest = a[i];
        }
    }
    printf("second_largest element in array is %d", second_largest);
}
/* ::::::::::: OUTPUT :::::::::::::
   Enter the size of an array:5
   Enter the elements of array:1 2 3 4 5
   second_largest element in array is 4
*/