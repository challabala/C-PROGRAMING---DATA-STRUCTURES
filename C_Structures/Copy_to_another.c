#include <stdio.h>
#include <string.h>
// Define the struct student
struct student
{
    int id;
    char *name;
    float marks;
};

int main()
{
    // Declare and initialize a variable of type struct student
    struct student s1 = {123, "balaji", 88.9};
    struct student s2, s3, s4;
    s2.id = 124;
    s2.name = "pawan";
    s2.marks = 88.90;

    /*// Print the details to verify the initialization
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    printf("\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);*/
    // Method-1:
    s3 = s2;
    printf("Student3 detailes:\n");
    printf("ID: %d\n", s3.id);
    printf("Name: %s\n", s3.name);
    printf("Marks: %.2f\n", s3.marks);
    printf("\n");
    strcpy(s4.name, s1.name);
    s4.id = s1.id;
    s4.marks = s1.marks;
    printf("Student4 detailes:\n");
    printf("ID: %d\n", s4.id);
    printf("Name: %s\n", s4.name);
    printf("Marks: %.2f\n", s4.marks);

    return 0;
}
