#include <stdio.h>
void main()
{
    int n, choice;
    float gst, toll, t_charge, cost;
    printf("\n ***BUS CHARGES*** \n");
    printf("1.Express-300 \n");
    printf("2.Delux-500 \n");
    printf("3.Super luxary-750 \n");
    printf("Enter ur choice:");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Enter the no of tickets:");
        scanf("%d", &n);
        if (n > 6)
        {
            printf("one person can not buy more than 6 tickets");
        }
        else
        {
            cost = n * 300;
        }
    }
    if (choice == 2)
    {
        printf("Enter the no of tickets:");
        scanf("%d", &n);
        if (n > 6)
        {
            printf("one person can not buy more than 6 tickets");
        }
        else
        {
            cost = n * 500;
        }
    }
    if (choice == 3)
    {
        printf("Enter the no of tickets:");
        scanf("%d", &n);
        if (n > 6)
        {
            printf("one person can not buy more than 6 tickets");
        }
        else
        {
            cost = n * 750;
        }
    }
    gst = cost * 0.05;
    toll = cost * 0.02;
    t_charge = cost + gst + toll;
    printf("GST:%f.2\n", gst);
    printf("TOLL CHARGE:%.2f\n", toll);
    printf("TOTAL_CHARGE:%.2f\n", t_charge);
}
//***BUS CHARGES***
// 1.Express-300
// 2.Delux-500
// 3.Super luxary-750
// Enter ur choice:2
// Enter the no of tickets:3
// GST:75.000000.2
// TOLL CHARGE:30.00
// TOTAL_CHARGE:1605.00