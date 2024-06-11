#include <stdio.h>
void main()
{
    int n;
    printf("Eneter the number:");
    scanf("%d", &n);
    int n1 = 0, n2 = 1;
    printf("%d %d ", n1, n2);
    int next;
    for (int i = 2; i < n; i++)
    {
        next = n1 + n2;
        n1 = n2;
        n2 = next;
        printf("%d ", next);
    }
}