#include <stdio.h>
struct student
{
    char name[100];
    int id;
    float marks;
};
void main()
{
    int n, i;
    printf("How many student datails you want:");
    scanf("%d", &n);
    struct student s[n];
    for (i = 1; i <= n; i++)
    {
        printf("Enter the student %d details:", i);
        scanf("%s %d %f", &s[i].name, &s[i].id, &s[i].marks);
    }
    printf("All student details are:\n");
    for (i = 1; i <=n; i++)
    {
        printf("Name : %s\n", s[i].name);
        printf("ID : %d\n", s[i].id);
        printf("Marks : %f\n", s[i].marks);
    }
}