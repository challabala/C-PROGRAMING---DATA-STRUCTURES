#include <stdio.h>
int main()
{
    int Total_days, Years, Months, Weeks, Days;
    printf("Enter the number of days: ");
    scanf("%d", &Total_days);
    Years = Total_days / 365;
    Total_days = Total_days % 365;
    Months = Total_days / 30;
    Total_days = Total_days % 30;
    Weeks = Total_days / 7;
    Total_days = Total_days % 7;
    Days = Total_days;
    printf("%d Years, %d Months, %d Weeks and %d Days\n", Years, Months, Weeks, Days);
    return 0;
}
//*** OUTPUT ***
// Enter the number of days: 1234
// 3 Years, 4 Months, 2 Weeks and 5 Days
