#include <stdio.h>
int largest(int n);
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The largest digit is: %d", largest(n));
}
int largest(int n)
{
    int largest = 0, digit;
    while (n > 0)
    {
        digit = n % 10;
        if (digit > largest)
        {
            largest = digit;
        }
        n = n / 10;
    }
    return largest;
} /* :::**:::OUTPUT:::**:::
 Enter a number: 122356
 The largest digit is: 6
 */