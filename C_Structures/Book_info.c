#include <stdio.h>
// Define a structure to represent book information
struct Book
{
    char title[100];
    char author[50];
    int year;
};
int main()
{
    // Declare a Book structure variable
    struct Book book1;
    // Initialize book information
    strcpy(book1.title, "The Great Gatsby");
    strcpy(book1.author, "F. Scott Fitzgerald");
    book1.year = 1925;
    // Print book information
    printf("Title: %s\n", book1.title);
    printf("Author: %s\n", book1.author);
    printf("Year: %d\n", book1.year);
    return 0;
}
/* ::::::::::::: OUTPUT :::::::::::::
   Title: The Great Gatsby
   Author: F. Scott Fitzgerald
   Year: 1925
*/
