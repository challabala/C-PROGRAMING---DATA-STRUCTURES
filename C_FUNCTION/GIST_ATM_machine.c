#include <stdio.h>
void deposit();
void withdraw();
void balance();
float balance = 5000, amount;
void main()
{
    int option;
    char choice;
    do
    {
        printf("GIST ATM MACHINE \n");
        printf("1.Balance \n");
        printf("2.Deposit \n");
        printf("3.Withdraw \n");
        printf("4.Exit \n");

        printf("Enter your option:  ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            balance();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice try again.....");
            break;
        }
        printf("Do you want to perform another transaction(y/n)");
        scanf("%c", &choice);
    } while (choice == 'y' && choice == 'Y');
}

void balance()
{
    printf("Your account balnce is : %.2f\n", balance);
}
void deposit()
{
    printf("Enter amount to be deposit:");
    scanf("%f", &amount);
    balance = balance + amount;
    printf("%.2f amount is successfully deposited.\n");
    printf("New balance is: %.2f \n", balance);
}
void withdraw()
{
    printf("Enter amount to be withdraw:");
    scanf("%f", &amount);
    balance = balance - amount;
    printf("%.2f amount is successfully withdrwed.\n");
    printf("New balance is: %.2f \n", balance);
}