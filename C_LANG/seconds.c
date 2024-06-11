#include <stdio.h>
void main()
{
    int s, h, m;
    printf("Enter the seconds:");
    scanf("%d", &s);
    h = s / 3600;
    s = s - (h * 3600);
    m = s / 60;
    s = s - (m * 60);
    printf("%d hours %d minute %d seconds", h, m, s);
}