#include <stdio.h>
#include <string.h>
struct student{
    char name[10];
    int id;
    float marks;
};
void main(){
    struct student s1;
    printf("Enter the student details:\n");
    printf("Enter the name:");
    scanf("%s",&s1.name);
    printf("Enter the id:");
    scanf("%d",&s1.id);
    printf("Enter the marks:");
    scanf("%f",&s1.marks);
    printf("\n");
    printf("Given student details:\n");
    printf("Name : %s\n",s1.name);
    printf("ID : %d\n",s1.id);
    printf("Marks : %f\n",s1.marks);
}