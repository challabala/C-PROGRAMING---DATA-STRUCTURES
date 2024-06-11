#include <stdio.h>

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
    struct student s2;
    s2.id = 124;
    s2.name = "pawan";
    s2.marks = 88.90;

    // Print the details to verify the initialization
    printf("ID: %d\n", s1.id);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    printf("\n");
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    printf("Marks: %.2f\n", s2.marks);

    return 0;
}
