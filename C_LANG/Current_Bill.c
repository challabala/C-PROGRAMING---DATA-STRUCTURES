#include <stdio.h>
void main()
{
    int units;
    float gst, cc, bill, t_bill;
    printf("Electricity Bill Genaration:\n");
    printf("============================\n");
    printf("1. <50 units-3 perunit\n");
    printf("2. <=100 units-4 perunit\n");
    printf("3. <=200 units-5.5 perunit\n");
    printf("4. <=300 watts-7.5 perunit\n");
    printf("5. >300 units-9 perunit\n");
    printf("Enter no. of units consumed:");
    scanf("%d", &units);
    if (units > 0 && units <= 50)
        bill = units * 3;

    else if (units > 50 && units <= 100)
        bill = 50 * 3 + (units - 50) * 4;

    else if (units > 100 && units <= 200)
        bill = 50 * 3 + 50 * 4 + (units - 100) * 5.5;

    else if (units > 200 && units <= 300)
        bill = 50 * 3 + 50 * 4 + 100 * 5.5 + (units - 200) * 7.5;

    else if (units > 300)
        bill = 50 * 3 + 50 * 4 + 100 * 5.5 + 100 * 7.5 + (units - 300) * 9;

    gst = bill * 0.05;
    cc = bill * 0.02;
    t_bill = gst + cc + bill;
    printf("GST : %f\n", gst);
    printf("Service Charge : %f\n", cc);
    printf("Total_Bill : %.2f\n", t_bill);
}
//**********OUTPUT***********
// Electricity Bill Genaration:
//============================
// 1. <50 units-3 perunit
// 2. <=100 units-4 perunit
// 3. <=200 units-5.5 perunit
// 4. <=300 watts-7.5 perunit
// 5. >300 units-9 perunit
// Enter no. of units consumed:250
// GST : 63.750000
// Service Charge : 25.500000
// Total_Bill : 1364.25