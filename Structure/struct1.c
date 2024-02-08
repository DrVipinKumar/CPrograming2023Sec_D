#include <stdio.h>
struct Student
{
    char *sname;
    int sid;
};
int main()
{
    struct Student s1;
    s1.sname = "Student 1";
    s1.sid = 1;
    printf("Student Name=%s\n", s1.sname);
    printf("Student ID=%d\n", s1.sid);
    return 0;
}