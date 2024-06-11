#include <stdio.h>
#include <string.h>

int CheckPassword(char password[], int length);
char GeneratePassword(void);

int is_lowercase(char ch)
{
    return ch >= 'a' && ch <= 'z';
}


int is_uppercase(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}
int is_digit(char ch)
{
    return ch >= '0' && ch <= '9';
}

int main()
{
    int password_length;

    while (1)
    {
        printf("Enter desired password length (minimum 8 characters): ");
        if (scanf("%d", &password_length) == 1 && password_length >= 8)
        {
            break; // Valid input, exit loop
        }
        printf("Invalid input. Please enter a number greater than or equal to 8.\n");
        while (getchar() != '\n')
            ; // Clear remaining input from buffer
    }

    // Generate a random password
    char generated_password = GeneratePassword();

    // Check password validity (optional, remove if not needed)
    if (CheckPassword(&generated_password, password_length))
    {
        printf("Generated password: %c\n", generated_password); // Print only the first character for security (optional)
    }
    else
    {
        printf("An error occurred while generating the password.\n");
    }

    return 0;
}

int CheckPassword(char password[], int length)
{
    
    return length >= 8; 
}

char GeneratePassword(void)
{
    
    unsigned int seed = 1;

    const char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    const char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char digits[] = "0123456789";
    const char special_chars[] = "!@#$%^&*()-_=+[]{};':\"\\|,.<>/?";

    int total_chars = sizeof(lowercase) - 1 + sizeof(uppercase) - 1 + sizeof(digits) - 1 + sizeof(special_chars) - 1;


    int num_lowercase, num_uppercase, num_digits, num_special;

    while (1)
    {
        printf("Enter desired number of lowercase letters (minimum 1): ");
        if (scanf("%d", &num_lowercase) == 1 && num_lowercase >= 1)
        {
            break;
        }
        printf("Invalid input. Please enter a number greater than or equal to 1.\n");
        while (getchar() != '\n')
            ; // Clear remaining input from buffer
    }

    while (1)
    {
        printf("Enter desired number of uppercase letters (minimum 1): ");
        if (scanf("%d", &num_uppercase) == 1 && num_uppercase >= 1)
        {
            break;
        }
        printf("Invalid input. Please enter a number greater than or equal to 1.\n");
        while (getchar() != '\n')
            ; // Clear remaining input from buffer
    }

    while (1)
    {
        printf("Enter desired number of digits (minimum 1): ");
        if (scanf("%d", &num_digits) == 1 && num_digits >= 1)
        {
            break;
        }
        printf("Invalid input. Please enter a number greater than or equal to 1.\n");
        while (getchar() != '\n')
            ; 
    }

} 
