#include <stdio.h>
int main()
{
    int i, rangenumber, num = 1, c = 0, letest = 0;
    printf("Enter the Nth value:");
    scanf("%d", &rangenumber);
    while (c != rangenumber)
    {
        int flag = 0;
        for (i = 0; i <= num; i++)
        {
            if (i * (i + 1) == num)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
        {
            c++;
            letest = num;
        }
        num = num + 1;
    }
    printf("%dth Pronic number is %d", rangenumber, letest);
    return 0;
}
/* :::::::: OUTPUT ::::::::::
   Enter the Nth value:5
   5th Pronic number is 30
*/