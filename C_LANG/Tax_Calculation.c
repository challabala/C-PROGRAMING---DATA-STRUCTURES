#include <stdio.h>
void main()
{
    int amount;
    float Tax;
    printf("*** Tax_Calcuation *** \n ");
    printf(":::::::::::::::::::::: \n ");
    printf("1. <=2.5 lakhs -->0% \n ");
    printf("2. <=5 lakhs -->5% \n ");
    printf("3. <=7.5 lakhs -->10% \n ");
    printf("4. <=10 lakhs -->20% \n ");
    printf("5. >10 lakhs -->30% \n ");
    printf("Eeter the amount:");
    scanf("%d", &amount);
    if (amount <= 250000)
        Tax = amount * 0.00;
    else if (amount > 250000 && amount <= 500000)
        Tax = 250000 * 0.00 + (amount - 250000) * 0.05;
    else if (amount > 500000 && amount <= 750000)
        Tax = 250000 * 0.00 + 250000 * 0.05 + (amount - 500000) * 0.10;
    else if (amount > 750000 && amount <= 1000000)
        Tax = 250000 * 0.00 + 250000 * 0.05 + 2500000 * 0.10 + (amount - 750000) * 0.20;
    else
        Tax = 250000 * 0.00 + 250000 * 0.05 + 2500000 * 0.10 + 250000 * 0.20 + (amount - 1000000) * 0.30;
    printf("Tax = %f\n", Tax);
}
/*------OUTPUT-------
*** Tax_Calcuation ***
 ::::::::::::::::::::::
 1. <=2.5 lakhs -->0%
 2. <=5 lakhs -->5%
 3. <=7.5 lakhs -->10%
 4. <=10 lakhs -->20%
 Eeter the amount:600000
 Tax = 22500.000000 */