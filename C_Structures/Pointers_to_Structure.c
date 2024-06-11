#include <stdio.h>
#include <string.h>

struct book{
   char title[10];
   char author[20];
   double price;
   int pages;
};

int main (){
   struct book book1 = {"Learn C", "Dennis Ritchie", 675.50, 325};
   struct book *strptr;
   strptr = &book1;
   
   printf("Title: %s \n", strptr -> title);
   printf("Author: %s \n", strptr -> author);
   printf("Price: %lf \n", strptr -> price);
   printf("Pages: %d \n", strptr -> pages); 
   return 0;
}