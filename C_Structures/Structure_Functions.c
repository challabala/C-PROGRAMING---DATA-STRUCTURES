#include <stdio.h>
#include <stdlib.h>
struct student
{
    char *name;
    int roll;
    float marks;
};
void fun(struct student *s1);
void main()
{
    struct student s = {"Balaji",3328,898};
    fun(&s);
}
void fun(struct student *s1)
{
    printf("Name : %s\n", s1->name);
    printf("Roll : %d\n", s1->roll);
    printf("Marks : %.2f", s1->marks);
}

/*struct student     structure as parameter
{
    char *name;
    int roll;
    float marks;
};
void fun(struct student s);
void main()
{
    struct student s1 = {"balji", 132, 67.9};
    fun(s1);
}
void fun(struct student s)
{
    printf("Name : %s\n", s.name);
    printf("Roll : %d\n", s.roll);
    printf("Marks : %.2f\n", s.marks);
}*/

/*void structure(char name[],int roll,int marks);
void main(){
    struct stu{
        char name;
        int roll;
        float marks;
    };
    struct student s ={"balaji",123,67.9};
    structure(s.name,s.roll,s.marks);
}
void structure(char name[],int roll,int marks){
        printf("Name:%s\n",name);
        printf("Rolll:%d\n",roll);
        printf("Marks:%f\n",marks);
}*/