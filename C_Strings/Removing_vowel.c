#include <stdio.h>
#include <stdlib.h>

int main() {
    // Initializing variable.
    char str[100];
    int i, j, len = 0;

    // Accepting input.
    printf("Enter a string : ");
    // gets(str);
    scanf("%s", str);

    len = strlen(str);
    // Accepting input.

    for (i = 0; i < len; i++) {
        // Checking vowels.
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            // Deleting vowels.
            for (j = i; j < len; j++) {
                // Storing string without vowels.
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
        str[len + 1] = '\0';
    }
   printf("After deleting the vowels, the string will be : %s", str);
   return 0;
}