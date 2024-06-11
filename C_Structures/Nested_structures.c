#include <stdio.h>
struct student
{
    char *name;
    int roll;
    struct dob
    {
        int d;
        int m;
        int y;
    } d1;
} s;

void main()
{
    s.name = "balaji";
    s.roll = 123;
    s.d1.d = 5;
    s.d1.m = 10;
    s.d1.y = 2002;
    printf("The details you entered:\n");
    printf("Student Name : %s\n", s.name);
    printf("Student Roll no: %d\n", s.roll);
    printf("Date Of Birth:%d %d %d\n", s.d1.d, s.d1.m, s.d1.y);
}
/*:::::::::::::::: OUPUT :::::::::::::::::::::
  The details you entered:
  Student Name : balaji
  Student Roll no: 123
  Date Of Birth:5 10 2002
*/
/*{
    char *name;
    int id;
    struct dept
    {
        int depid;
        char *hod;
        float rating;
    } d;
};
void main()
{
    struct college c = {"gist", 223, {123, "naga", 58.9}};
    printf("\n");
    printf("College name     : %s\n", c.name);
    printf("college id       :%d\n", c.id);
    printf("dept id          :%d\n", c.d.depid);
    printf("dept hod         :%s\n", c.d.hod);
    printf("dept rating      :%f\n", c.d.rating);
}*/