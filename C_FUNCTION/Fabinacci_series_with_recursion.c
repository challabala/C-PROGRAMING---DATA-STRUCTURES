#include <stdio.h>
int fabinacci(int n);
void main()
{
    int n, i;
    printf("Enter the number of terms:");
    scanf("%d", &n);
    printf("Fabinacci series:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fabinacci(i));
    }
}
int fabinacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fabinacci(n - 1) + fabinacci(n - 2);
}