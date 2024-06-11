#include <stdio.h>
void main()
{
    int n, small, second_small;
    printf("Enter the size of an array:");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    small = a[0];
    second_small = a[1];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < small)
        {
            second_small = small;
            small = a[i];
        }
        else if (a[i] < second_small && a[i] != small)
        {
            second_small = a[i];
        }
    }
    printf("Second_Smallest element in array is %d", second_small);
} /*
     :::::::::: OUTPUT ::::::::::
     Enter the size of an array:5
     Enter the elements of array:1 2 3 4 5
     Second_Smallest element in array is 2
 */